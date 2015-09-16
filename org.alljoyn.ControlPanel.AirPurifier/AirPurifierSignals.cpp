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
using namespace org::alljoyn::ControlPanel::AirPurifier;

void AirPurifierSignals::Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId)
{
    m_busObject = busObject;
    m_sessionId = sessionId;

    auto interfaceDefinition = alljoyn_busattachment_getinterface(alljoyn_busobject_getbusattachment(busObject), "org.alljoyn.ControlPanel.AirPurifier");
    alljoyn_interfacedescription_getmember(interfaceDefinition, "sensorOdorValueChanged", &m_memberSensorOdorValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "sensorDustValueChanged", &m_memberSensorDustValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "sensorAllergenValueChanged", &m_memberSensorAllergenValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "sensorCleanMetalGridValueChanged", &m_memberSensorCleanMetalGridValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "sensorReplaceFilterValueChanged", &m_memberSensorReplaceFilterValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "sensorCleanMonitorValueChanged", &m_memberSensorCleanMonitorValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "powerStatusChanged", &m_memberPowerStatusChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "sensorsCleanMetalGridAndReplaceFilterValuesReset", &m_memberSensorsCleanMetalGridAndReplaceFilterValuesReset);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "flowValueChanged", &m_memberFlowValueChanged);
    alljoyn_interfacedescription_getmember(interfaceDefinition, "timerValueChanged", &m_memberTimerValueChanged);
}

void AirPurifierSignals::SensorOdorValueChanged(_In_ int32 interfaceMemberNewSensorOdorValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewSensorOdorValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorOdorValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void AirPurifierSignals::CallSensorOdorValueChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierSensorOdorValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorOdorValueChangedReceived(sender, args);
    });
}

void AirPurifierSignals::SensorDustValueChanged(_In_ int32 interfaceMemberNewSensorDustValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewSensorDustValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorDustValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void AirPurifierSignals::CallSensorDustValueChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierSensorDustValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorDustValueChangedReceived(sender, args);
    });
}

void AirPurifierSignals::SensorAllergenValueChanged(_In_ int32 interfaceMemberNewSensorAllergenValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewSensorAllergenValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorAllergenValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void AirPurifierSignals::CallSensorAllergenValueChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierSensorAllergenValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorAllergenValueChangedReceived(sender, args);
    });
}

void AirPurifierSignals::SensorCleanMetalGridValueChanged(_In_ int32 interfaceMemberNewSensorCleanMetalGridValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewSensorCleanMetalGridValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorCleanMetalGridValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void AirPurifierSignals::CallSensorCleanMetalGridValueChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierSensorCleanMetalGridValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorCleanMetalGridValueChangedReceived(sender, args);
    });
}

void AirPurifierSignals::SensorReplaceFilterValueChanged(_In_ int32 interfaceMemberNewSensorReplaceFilterValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewSensorReplaceFilterValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorReplaceFilterValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void AirPurifierSignals::CallSensorReplaceFilterValueChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierSensorReplaceFilterValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorReplaceFilterValueChangedReceived(sender, args);
    });
}

void AirPurifierSignals::SensorCleanMonitorValueChanged(_In_ int32 interfaceMemberNewSensorCleanMonitorValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewSensorCleanMonitorValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberSensorCleanMonitorValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void AirPurifierSignals::CallSensorCleanMonitorValueChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierSensorCleanMonitorValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorCleanMonitorValueChangedReceived(sender, args);
    });
}

void AirPurifierSignals::PowerStatusChanged(_In_ int32 interfaceMemberNewPowerStatus)
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

void AirPurifierSignals::CallPowerStatusChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierPowerStatusChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        PowerStatusChangedReceived(sender, args);
    });
}

void AirPurifierSignals::SensorsCleanMetalGridAndReplaceFilterValuesReset()
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
        m_memberSensorsCleanMetalGridAndReplaceFilterValuesReset,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void AirPurifierSignals::CallSensorsCleanMetalGridAndReplaceFilterValuesResetReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierSensorsCleanMetalGridAndReplaceFilterValuesResetReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        SensorsCleanMetalGridAndReplaceFilterValuesResetReceived(sender, args);
    });
}

void AirPurifierSignals::FlowValueChanged(_In_ int32 interfaceMemberNewFlowValue)
{
    if (nullptr == m_busObject)
    {
        return;
    }

    size_t argCount = 1;
    alljoyn_msgarg arguments = alljoyn_msgarg_array_create(argCount);
    TypeConversionHelpers::SetAllJoynMessageArg(alljoyn_msgarg_array_element(arguments, 0), "i", interfaceMemberNewFlowValue);
    
    alljoyn_busobject_signal(
        m_busObject, 
        NULL,  // Generated code only supports broadcast signals.
        m_sessionId,
        m_memberFlowValueChanged,
        arguments,
        argCount, 
        0, // A signal with a TTL of 0 will be sent to every member of the session, regardless of how long it takes to deliver the message
        ALLJOYN_MESSAGE_FLAG_GLOBAL_BROADCAST, // Broadcast to everyone in the session.
        NULL); // The generated code does not need the generated signal message

    alljoyn_msgarg_destroy(arguments);
}

void AirPurifierSignals::CallFlowValueChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierFlowValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        FlowValueChangedReceived(sender, args);
    });
}

void AirPurifierSignals::TimerValueChanged(_In_ int32 interfaceMemberNewTimerValue)
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

void AirPurifierSignals::CallTimerValueChangedReceived(_In_ AirPurifierSignals^ sender, _In_ AirPurifierTimerValueChangedReceivedEventArgs^ args)
{
    AllJoynHelpers::DispatchEvent([=]() {
        TimerValueChangedReceived(sender, args);
    });
}
