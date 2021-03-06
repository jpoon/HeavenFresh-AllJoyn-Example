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
using namespace org::alljoyn::ControlPanel::Humidifier;

void HumidifierSignals::Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId)
{
    m_busObject = busObject;
    m_sessionId = sessionId;

    auto interfaceDefinition = alljoyn_busattachment_getinterface(alljoyn_busobject_getbusattachment(busObject), "org.alljoyn.ControlPanel.Humidifier");
    alljoyn_interfacedescription_getmember(interfaceDefinition, "currentRoomTempValueChanged", &m_memberCurrentRoomTempValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "currentRoomHumidityValueChanged", &m_memberCurrentRoomHumidityValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "waterTankStatusChanged", &m_memberWaterTankStatusChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "powerStatusChanged", &m_memberPowerStatusChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "humidityValueChanged", &m_memberHumidityValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "ionStatusChanged", &m_memberIonStatusChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "warmMistStatusChanged", &m_memberWarmMistStatusChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "mistVolumeValueChanged", &m_memberMistVolumeValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "timerValueChanged", &m_memberTimerValueChanged);
}

void HumidifierSignals::CurrentRoomTempValueChanged(_In_ int32 interfaceMemberNewCurrentRoomTempValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewCurrentRoomTempValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberCurrentRoomTempValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallCurrentRoomTempValueChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierCurrentRoomTempValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        CurrentRoomTempValueChangedReceived(sender, args);
    });
}

void HumidifierSignals::CurrentRoomHumidityValueChanged(_In_ int32 interfaceMemberNewCurrentRoomHumidityValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewCurrentRoomHumidityValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberCurrentRoomHumidityValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallCurrentRoomHumidityValueChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierCurrentRoomHumidityValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        CurrentRoomHumidityValueChangedReceived(sender, args);
    });
}

void HumidifierSignals::WaterTankStatusChanged(_In_ int32 interfaceMemberNewWaterTankStatus)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewWaterTankStatus);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberWaterTankStatusChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallWaterTankStatusChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierWaterTankStatusChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        WaterTankStatusChangedReceived(sender, args);
    });
}

void HumidifierSignals::PowerStatusChanged(_In_ int32 interfaceMemberNewPowerStatus)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewPowerStatus);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberPowerStatusChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallPowerStatusChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierPowerStatusChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        PowerStatusChangedReceived(sender, args);
    });
}

void HumidifierSignals::HumidityValueChanged(_In_ int32 interfaceMemberNewHumidityValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewHumidityValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberHumidityValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallHumidityValueChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierHumidityValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        HumidityValueChangedReceived(sender, args);
    });
}

void HumidifierSignals::IonStatusChanged(_In_ int32 interfaceMemberNewIonStatus)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewIonStatus);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberIonStatusChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallIonStatusChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierIonStatusChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        IonStatusChangedReceived(sender, args);
    });
}

void HumidifierSignals::WarmMistStatusChanged(_In_ int32 interfaceMemberNewWarmMistStatus)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewWarmMistStatus);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberWarmMistStatusChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallWarmMistStatusChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierWarmMistStatusChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        WarmMistStatusChangedReceived(sender, args);
    });
}

void HumidifierSignals::MistVolumeValueChanged(_In_ int32 interfaceMemberNewMistVolumeValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewMistVolumeValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberMistVolumeValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallMistVolumeValueChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierMistVolumeValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        MistVolumeValueChangedReceived(sender, args);
    });
}

void HumidifierSignals::TimerValueChanged(_In_ int32 interfaceMemberNewTimerValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewTimerValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberTimerValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void HumidifierSignals::CallTimerValueChangedReceived(_In_ HumidifierSignals^ sender, _In_ HumidifierTimerValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        TimerValueChangedReceived(sender, args);
    });
}

