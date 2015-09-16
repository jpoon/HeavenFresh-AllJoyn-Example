//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace concurrency;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Devices::AllJoyn;
using namespace org::alljoyn::AirPurifier::Events;

std::map<alljoyn_interfacedescription, WeakReference*> EventsConsumer::SourceInterfaces;

EventsConsumer::EventsConsumer(AllJoynBusAttachment^ busAttachment)
    : m_busAttachment(busAttachment),
    m_proxyBusObject(nullptr),
    m_busObject(nullptr),
    m_sessionListener(nullptr),
    m_sessionId(0)
{
    m_weak = new WeakReference(this);
    m_signals = ref new EventsSignals();
    m_nativeBusAttachment = AllJoynHelpers::GetInternalBusAttachment(m_busAttachment);
}

EventsConsumer::~EventsConsumer()
{
    AllJoynBusObjectManager::ReleaseBusObject(m_nativeBusAttachment, AllJoynHelpers::PlatformToMultibyteString(ServiceObjectPath).data());
    if (SessionListener != nullptr)
    {
        alljoyn_busattachment_setsessionlistener(m_nativeBusAttachment, m_sessionId, nullptr);
        alljoyn_sessionlistener_destroy(SessionListener);
    }
    if (nullptr != ProxyBusObject)
    {
        alljoyn_proxybusobject_destroy(ProxyBusObject);
    }
    delete m_weak;
}

void EventsConsumer::OnSessionLost(_In_ alljoyn_sessionid sessionId, _In_ alljoyn_sessionlostreason reason)
{
    if (sessionId == m_sessionId)
    {
        AllJoynSessionLostEventArgs^ args = ref new AllJoynSessionLostEventArgs(static_cast<AllJoynSessionLostReason>(reason));
        AllJoynHelpers::DispatchEvent([=]() {
            SessionLost(this, args);
        });
    }
}

void EventsConsumer::OnSessionMemberAdded(_In_ alljoyn_sessionid sessionId, _In_ PCSTR uniqueName)
{
    if (sessionId == m_sessionId)
    {
        auto args = ref new AllJoynSessionMemberAddedEventArgs(AllJoynHelpers::MultibyteToPlatformString(uniqueName));
        AllJoynHelpers::DispatchEvent([=]() {
            SessionMemberAdded(this, args);
        });
    }
}

void EventsConsumer::OnSessionMemberRemoved(_In_ alljoyn_sessionid sessionId, _In_ PCSTR uniqueName)
{
    if (sessionId == m_sessionId)
    {
        auto args = ref new AllJoynSessionMemberRemovedEventArgs(AllJoynHelpers::MultibyteToPlatformString(uniqueName));
        AllJoynHelpers::DispatchEvent([=]() {
            SessionMemberRemoved(this, args);
        });
    }
}

QStatus EventsConsumer::AddSignalHandler(_In_ alljoyn_busattachment busAttachment, _In_ alljoyn_interfacedescription interfaceDescription, _In_ PCSTR methodName, _In_ alljoyn_messagereceiver_signalhandler_ptr handler)
{
    alljoyn_interfacedescription_member member;
    if (!alljoyn_interfacedescription_getmember(interfaceDescription, methodName, &member))
    {
        return ER_BUS_INTERFACE_NO_SUCH_MEMBER;
    }

    return alljoyn_busattachment_registersignalhandler(busAttachment, handler, member, NULL);
}

IAsyncOperation<EventsJoinSessionResult^>^ EventsConsumer::JoinSessionAsync(
    _In_ AllJoynServiceInfo^ serviceInfo, _Inout_ EventsWatcher^ watcher)
{
    return create_async([serviceInfo, watcher]() -> EventsJoinSessionResult^
    {
        auto result = ref new EventsJoinSessionResult();
        result->Status = AllJoynStatus::Ok;
        result->Consumer = nullptr;

        result->Consumer = ref new EventsConsumer(watcher->BusAttachment);
        result->Status = result->Consumer->JoinSession(serviceInfo);

        return result;
    });
}


IAsyncOperation<EventsGetVersionResult^>^ EventsConsumer::GetVersionAsync()
{
    return create_async([this]() -> EventsGetVersionResult^
    {
        PropertyGetContext<uint16> getContext;
        
        alljoyn_proxybusobject_getpropertyasync(
            ProxyBusObject,
            "org.alljoyn.AirPurifier.Events",
            "Version",
            [](QStatus status, alljoyn_proxybusobject obj, const alljoyn_msgarg value, void* context)
            {
                UNREFERENCED_PARAMETER(obj);
                auto propertyContext = static_cast<PropertyGetContext<uint16>*>(context);

                if (ER_OK == status)
                {
                    uint16 argument;
                    TypeConversionHelpers::GetAllJoynMessageArg(value, "q", &argument);

                    propertyContext->SetValue(argument);
                }
                propertyContext->SetStatus(status);
                propertyContext->SetEvent();
            },
            c_MessageTimeoutInMilliseconds,
            &getContext);

        getContext.Wait();

        auto result = ref new EventsGetVersionResult();
        result->Status = getContext.GetStatus();
        result->Version = getContext.GetValue();
        return result;
    });
}

void EventsConsumer::OnPropertyChanged(_In_ alljoyn_proxybusobject obj, _In_ PCSTR interfaceName, _In_ const alljoyn_msgarg changed, _In_ const alljoyn_msgarg invalidated)
{
    UNREFERENCED_PARAMETER(obj);
    UNREFERENCED_PARAMETER(interfaceName);
    UNREFERENCED_PARAMETER(changed);
    UNREFERENCED_PARAMETER(invalidated);
}

void EventsConsumer::CallPowerSetToOffSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsPowerSetToOffReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallPowerSetToOffReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallPowerSetToOnSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsPowerSetToOnReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallPowerSetToOnReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallFlowSetToHISignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsFlowSetToHIReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallFlowSetToHIReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallFlowSetToMEDSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsFlowSetToMEDReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallFlowSetToMEDReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallFlowSetToLOWSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsFlowSetToLOWReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallFlowSetToLOWReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallFlowSetToQUIETSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsFlowSetToQUIETReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallFlowSetToQUIETReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallFlowSetToAUTOSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsFlowSetToAUTOReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallFlowSetToAUTOReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallTimerSetTo8HSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsTimerSetTo8HReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallTimerSetTo8HReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallTimerSetTo2HSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsTimerSetTo2HReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallTimerSetTo2HReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallTimerSetTo1HSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsTimerSetTo1HReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallTimerSetTo1HReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallTimerSetToOffSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsTimerSetToOffReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallTimerSetToOffReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallSensorOdorActivatedSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsSensorOdorActivatedReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallSensorOdorActivatedReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallSensorDustActivatedSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsSensorDustActivatedReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallSensorDustActivatedReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallSensorOdorDeactivatedSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsSensorOdorDeactivatedReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallSensorOdorDeactivatedReceived(consumer->Signals, eventArgs);
    }
}

void EventsConsumer::CallSensorDustDeactivatedSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message)
{
    auto source = SourceInterfaces.find(member->iface);
    if (source == SourceInterfaces.end())
    {
        return;
    }

    auto consumer = source->second->Resolve<EventsConsumer>();
    if (consumer->Signals != nullptr)
    {
        auto callInfo = ref new AllJoynMessageInfo(AllJoynHelpers::MultibyteToPlatformString(alljoyn_message_getsender(message)));
        auto eventArgs = ref new EventsSensorDustDeactivatedReceivedEventArgs();
        eventArgs->MessageInfo = callInfo;


        consumer->Signals->CallSensorDustDeactivatedReceived(consumer->Signals, eventArgs);
    }
}

int32 EventsConsumer::JoinSession(_In_ AllJoynServiceInfo^ serviceInfo)
{
    alljoyn_sessionlistener_callbacks callbacks =
    {
        AllJoynHelpers::SessionLostHandler<EventsConsumer>,
        AllJoynHelpers::SessionMemberAddedHandler<EventsConsumer>,
        AllJoynHelpers::SessionMemberRemovedHandler<EventsConsumer>
    };

    alljoyn_busattachment_enableconcurrentcallbacks(AllJoynHelpers::GetInternalBusAttachment(m_busAttachment));

    SessionListener = alljoyn_sessionlistener_create(&callbacks, m_weak);
    alljoyn_sessionopts sessionOpts = alljoyn_sessionopts_create(ALLJOYN_TRAFFIC_TYPE_MESSAGES, true, ALLJOYN_PROXIMITY_ANY, ALLJOYN_TRANSPORT_ANY);

    std::vector<char> sessionNameUtf8 = AllJoynHelpers::PlatformToMultibyteString(serviceInfo->UniqueName);
    RETURN_IF_QSTATUS_ERROR(alljoyn_busattachment_joinsession(
        m_nativeBusAttachment,
        &sessionNameUtf8[0],
        serviceInfo->SessionPort,
        SessionListener,
        &m_sessionId,
        sessionOpts));
    alljoyn_sessionopts_destroy(sessionOpts);

    ServiceObjectPath = serviceInfo->ObjectPath;
    std::vector<char> objectPath = AllJoynHelpers::PlatformToMultibyteString(ServiceObjectPath);

    if (objectPath.empty())
    {
        return AllJoynStatus::Fail;
    }

    ProxyBusObject = alljoyn_proxybusobject_create(m_nativeBusAttachment, &sessionNameUtf8[0], &objectPath[0], m_sessionId);
    if (nullptr == ProxyBusObject)
    {
        return AllJoynStatus::Fail;
    }


    alljoyn_interfacedescription description = alljoyn_busattachment_getinterface(m_nativeBusAttachment, "org.alljoyn.AirPurifier.Events");
    if (nullptr == description)
    {
        return AllJoynStatus::Fail;
    }

    RETURN_IF_QSTATUS_ERROR(AllJoynBusObjectManager::GetBusObject(m_nativeBusAttachment, AllJoynHelpers::PlatformToMultibyteString(ServiceObjectPath).data(), &m_busObject));
   
    if (!AllJoynBusObjectManager::BusObjectIsRegistered(m_nativeBusAttachment, m_busObject))
    {
        RETURN_IF_QSTATUS_ERROR(alljoyn_busobject_addinterface(BusObject, description));
    }

    QStatus result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "PowerSetToOff",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallPowerSetToOffSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "PowerSetToOn",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallPowerSetToOnSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "FlowSetToHI",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallFlowSetToHISignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "FlowSetToMED",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallFlowSetToMEDSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "FlowSetToLOW",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallFlowSetToLOWSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "FlowSetToQUIET",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallFlowSetToQUIETSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "FlowSetToAUTO",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallFlowSetToAUTOSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "TimerSetTo8H",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallTimerSetTo8HSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "TimerSetTo2H",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallTimerSetTo2HSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "TimerSetTo1H",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallTimerSetTo1HSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "TimerSetToOff",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallTimerSetToOffSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "SensorOdorActivated",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallSensorOdorActivatedSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "SensorDustActivated",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallSensorDustActivatedSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "SensorOdorDeactivated",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallSensorOdorDeactivatedSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }
    result = AddSignalHandler(
        m_nativeBusAttachment,
        description,
        "SensorDustDeactivated",
        [](const alljoyn_interfacedescription_member* member, PCSTR srcPath, alljoyn_message message) { UNREFERENCED_PARAMETER(srcPath); CallSensorDustDeactivatedSignalHandler(member, message); });
    if (result != ER_OK)
    {
        return static_cast<int32>(result);
    }

    SourceInterfaces[description] = m_weak;

    unsigned int noneMechanismIndex = 0;
    bool authenticationMechanismsContainsNone = m_busAttachment->AuthenticationMechanisms->IndexOf(AllJoynAuthenticationMechanism::None, &noneMechanismIndex);
    QCC_BOOL interfaceIsSecure = alljoyn_interfacedescription_issecure(description);

    // If the current set of AuthenticationMechanisms supports authentication, 
    // determine whether to secure the connection.
    if (AllJoynHelpers::CanSecure(m_busAttachment->AuthenticationMechanisms))
    {
        // Secure the connection if the org.alljoyn.Bus.Secure XML annotation
        // is specified, or if None is not present in AuthenticationMechanisms.
        if (!authenticationMechanismsContainsNone || interfaceIsSecure)
        {
            RETURN_IF_QSTATUS_ERROR(alljoyn_proxybusobject_secureconnection(ProxyBusObject, QCC_FALSE));
            RETURN_IF_QSTATUS_ERROR(AllJoynBusObjectManager::TryRegisterBusObject(m_nativeBusAttachment, BusObject, true));
        }
        else
        {
            RETURN_IF_QSTATUS_ERROR(AllJoynBusObjectManager::TryRegisterBusObject(m_nativeBusAttachment, BusObject, false));
        }
    }
    else
    {
        // If the current set of AuthenticationMechanisms does not support authentication
        // but the interface requires security, report an error.
        if (interfaceIsSecure)
        {
            return static_cast<int32>(ER_BUS_NO_AUTHENTICATION_MECHANISM);
        }
        else
        {
            RETURN_IF_QSTATUS_ERROR(AllJoynBusObjectManager::TryRegisterBusObject(m_nativeBusAttachment, BusObject, false));
        }
    }

    RETURN_IF_QSTATUS_ERROR(alljoyn_proxybusobject_addinterface(ProxyBusObject, description));
    
    m_signals->Initialize(BusObject, m_sessionId);

    return AllJoynStatus::Ok;
}
