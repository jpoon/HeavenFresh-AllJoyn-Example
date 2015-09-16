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
using namespace org::alljoyn::Humidifier::Events;

void EventsSignals::Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId)
{
    m_busObject = busObject;
    m_sessionId = sessionId;

    auto interfaceDefinition = alljoyn_busattachment_getinterface(alljoyn_busobject_getbusattachment(busObject), "org.alljoyn.Humidifier.Events");
    alljoyn_interfacedescription_getmember(interfaceDefinition, "PowerSetToOff", &m_memberPowerSetToOff);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "PowerSetToOn", &m_memberPowerSetToOn);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo40", &m_memberHumiditySetTo40);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo45", &m_memberHumiditySetTo45);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo50", &m_memberHumiditySetTo50);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo55", &m_memberHumiditySetTo55);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo60", &m_memberHumiditySetTo60);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo65", &m_memberHumiditySetTo65);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo70", &m_memberHumiditySetTo70);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo75", &m_memberHumiditySetTo75);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "HumiditySetTo80", &m_memberHumiditySetTo80);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "WarmMistSetToOFF", &m_memberWarmMistSetToOFF);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "WarmMistSetToLOW", &m_memberWarmMistSetToLOW);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "WarmMistSetToHI", &m_memberWarmMistSetToHI);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "MistVolumeSetToLOW", &m_memberMistVolumeSetToLOW);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "MistVolumeSetToMED", &m_memberMistVolumeSetToMED);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "MistVolumeSetToHI", &m_memberMistVolumeSetToHI);
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

void EventsSignals::HumiditySetTo40()
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
        m_memberHumiditySetTo40,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo40Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo40ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo40Received(sender, args);
    });
}

void EventsSignals::HumiditySetTo45()
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
        m_memberHumiditySetTo45,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo45Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo45ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo45Received(sender, args);
    });
}

void EventsSignals::HumiditySetTo50()
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
        m_memberHumiditySetTo50,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo50Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo50ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo50Received(sender, args);
    });
}

void EventsSignals::HumiditySetTo55()
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
        m_memberHumiditySetTo55,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo55Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo55ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo55Received(sender, args);
    });
}

void EventsSignals::HumiditySetTo60()
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
        m_memberHumiditySetTo60,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo60Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo60ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo60Received(sender, args);
    });
}

void EventsSignals::HumiditySetTo65()
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
        m_memberHumiditySetTo65,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo65Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo65ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo65Received(sender, args);
    });
}

void EventsSignals::HumiditySetTo70()
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
        m_memberHumiditySetTo70,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo70Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo70ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo70Received(sender, args);
    });
}

void EventsSignals::HumiditySetTo75()
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
        m_memberHumiditySetTo75,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo75Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo75ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo75Received(sender, args);
    });
}

void EventsSignals::HumiditySetTo80()
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
        m_memberHumiditySetTo80,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallHumiditySetTo80Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo80ReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumiditySetTo80Received(sender, args);
    });
}

void EventsSignals::WarmMistSetToOFF()
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
        m_memberWarmMistSetToOFF,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallWarmMistSetToOFFReceived(_In_ EventsSignals^ sender, _In_ EventsWarmMistSetToOFFReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        WarmMistSetToOFFReceived(sender, args);
    });
}

void EventsSignals::WarmMistSetToLOW()
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
        m_memberWarmMistSetToLOW,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallWarmMistSetToLOWReceived(_In_ EventsSignals^ sender, _In_ EventsWarmMistSetToLOWReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        WarmMistSetToLOWReceived(sender, args);
    });
}

void EventsSignals::WarmMistSetToHI()
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
        m_memberWarmMistSetToHI,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallWarmMistSetToHIReceived(_In_ EventsSignals^ sender, _In_ EventsWarmMistSetToHIReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        WarmMistSetToHIReceived(sender, args);
    });
}

void EventsSignals::MistVolumeSetToLOW()
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
        m_memberMistVolumeSetToLOW,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallMistVolumeSetToLOWReceived(_In_ EventsSignals^ sender, _In_ EventsMistVolumeSetToLOWReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        MistVolumeSetToLOWReceived(sender, args);
    });
}

void EventsSignals::MistVolumeSetToMED()
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
        m_memberMistVolumeSetToMED,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallMistVolumeSetToMEDReceived(_In_ EventsSignals^ sender, _In_ EventsMistVolumeSetToMEDReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        MistVolumeSetToMEDReceived(sender, args);
    });
}

void EventsSignals::MistVolumeSetToHI()
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
        m_memberMistVolumeSetToHI,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void EventsSignals::CallMistVolumeSetToHIReceived(_In_ EventsSignals^ sender, _In_ EventsMistVolumeSetToHIReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        MistVolumeSetToHIReceived(sender, args);
    });
}

