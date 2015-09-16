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

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Devices::AllJoyn;
using namespace Windows::Foundation;
using namespace org::alljoyn::AirPurifier::Events;

void EventsSignals::Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId)
{
    m_busObject = busObject;
    m_sessionId = sessionId;

    auto interfaceDefinition = alljoyn_busattachment_getinterface(alljoyn_busobject_getbusattachment(busObject), "org.alljoyn.AirPurifier.Events");
    alljoyn_interfacedescription_getmember(interfaceDefinition, "PowerSetToOff", &m_memberPowerSetToOff);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "PowerSetToOn", &m_memberPowerSetToOn);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "FlowSetToHI", &m_memberFlowSetToHI);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "FlowSetToMED", &m_memberFlowSetToMED);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "FlowSetToLOW", &m_memberFlowSetToLOW);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "FlowSetToQUIET", &m_memberFlowSetToQUIET);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "FlowSetToAUTO", &m_memberFlowSetToAUTO);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "TimerSetTo8H", &m_memberTimerSetTo8H);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "TimerSetTo2H", &m_memberTimerSetTo2H);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "TimerSetTo1H", &m_memberTimerSetTo1H);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "TimerSetToOff", &m_memberTimerSetToOff);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "SensorOdorActivated", &m_memberSensorOdorActivated);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "SensorDustActivated", &m_memberSensorDustActivated);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "SensorOdorDeactivated", &m_memberSensorOdorDeactivated);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "SensorDustDeactivated", &m_memberSensorDustDeactivated);
}

void EventsSignals::PowerSetToOff()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberPowerSetToOff,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallPowerSetToOffReceived(_In_ EventsSignals^ sender, _In_ EventsPowerSetToOffReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        PowerSetToOffReceived(sender, args);
    });
}

void EventsSignals::PowerSetToOn()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberPowerSetToOn,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallPowerSetToOnReceived(_In_ EventsSignals^ sender, _In_ EventsPowerSetToOnReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        PowerSetToOnReceived(sender, args);
    });
}

void EventsSignals::FlowSetToHI()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberFlowSetToHI,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallFlowSetToHIReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToHIReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        FlowSetToHIReceived(sender, args);
    });
}

void EventsSignals::FlowSetToMED()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberFlowSetToMED,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallFlowSetToMEDReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToMEDReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        FlowSetToMEDReceived(sender, args);
    });
}

void EventsSignals::FlowSetToLOW()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberFlowSetToLOW,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallFlowSetToLOWReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToLOWReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        FlowSetToLOWReceived(sender, args);
    });
}

void EventsSignals::FlowSetToQUIET()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberFlowSetToQUIET,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallFlowSetToQUIETReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToQUIETReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        FlowSetToQUIETReceived(sender, args);
    });
}

void EventsSignals::FlowSetToAUTO()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberFlowSetToAUTO,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallFlowSetToAUTOReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToAUTOReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        FlowSetToAUTOReceived(sender, args);
    });
}

void EventsSignals::TimerSetTo8H()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberTimerSetTo8H,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallTimerSetTo8HReceived(_In_ EventsSignals^ sender, _In_ EventsTimerSetTo8HReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        TimerSetTo8HReceived(sender, args);
    });
}

void EventsSignals::TimerSetTo2H()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberTimerSetTo2H,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallTimerSetTo2HReceived(_In_ EventsSignals^ sender, _In_ EventsTimerSetTo2HReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        TimerSetTo2HReceived(sender, args);
    });
}

void EventsSignals::TimerSetTo1H()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberTimerSetTo1H,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallTimerSetTo1HReceived(_In_ EventsSignals^ sender, _In_ EventsTimerSetTo1HReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        TimerSetTo1HReceived(sender, args);
    });
}

void EventsSignals::TimerSetToOff()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberTimerSetToOff,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallTimerSetToOffReceived(_In_ EventsSignals^ sender, _In_ EventsTimerSetToOffReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        TimerSetToOffReceived(sender, args);
    });
}

void EventsSignals::SensorOdorActivated()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorOdorActivated,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallSensorOdorActivatedReceived(_In_ EventsSignals^ sender, _In_ EventsSensorOdorActivatedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorOdorActivatedReceived(sender, args);
    });
}

void EventsSignals::SensorDustActivated()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorDustActivated,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallSensorDustActivatedReceived(_In_ EventsSignals^ sender, _In_ EventsSensorDustActivatedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorDustActivatedReceived(sender, args);
    });
}

void EventsSignals::SensorOdorDeactivated()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorOdorDeactivated,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallSensorOdorDeactivatedReceived(_In_ EventsSignals^ sender, _In_ EventsSensorOdorDeactivatedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorOdorDeactivatedReceived(sender, args);
    });
}

void EventsSignals::SensorDustDeactivated()
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 0;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorDustDeactivated,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallSensorDustDeactivatedReceived(_In_ EventsSignals^ sender, _In_ EventsSensorDustDeactivatedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorDustDeactivatedReceived(sender, args);
    });
}

