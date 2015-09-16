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
#pragma once

namespace org { namespace alljoyn { namespace AirPurifier { namespace Events {

ref class EventsSignals;

public interface class IEventsSignals
{
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsPowerSetToOffReceivedEventArgs^>^ PowerSetToOffReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsPowerSetToOnReceivedEventArgs^>^ PowerSetToOnReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToHIReceivedEventArgs^>^ FlowSetToHIReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToMEDReceivedEventArgs^>^ FlowSetToMEDReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToLOWReceivedEventArgs^>^ FlowSetToLOWReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToQUIETReceivedEventArgs^>^ FlowSetToQUIETReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToAUTOReceivedEventArgs^>^ FlowSetToAUTOReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsTimerSetTo8HReceivedEventArgs^>^ TimerSetTo8HReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsTimerSetTo2HReceivedEventArgs^>^ TimerSetTo2HReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsTimerSetTo1HReceivedEventArgs^>^ TimerSetTo1HReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsTimerSetToOffReceivedEventArgs^>^ TimerSetToOffReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsSensorOdorActivatedReceivedEventArgs^>^ SensorOdorActivatedReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsSensorDustActivatedReceivedEventArgs^>^ SensorDustActivatedReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsSensorOdorDeactivatedReceivedEventArgs^>^ SensorOdorDeactivatedReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsSensorDustDeactivatedReceivedEventArgs^>^ SensorDustDeactivatedReceived;
};

public ref class EventsSignals sealed : [Windows::Foundation::Metadata::Default] IEventsSignals
{
public:
    // Calling this method will send the PowerSetToOff signal to every member of the session.
    void PowerSetToOff();

    // This event fires whenever the PowerSetToOff signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsPowerSetToOffReceivedEventArgs^>^ PowerSetToOffReceived;

    // Calling this method will send the PowerSetToOn signal to every member of the session.
    void PowerSetToOn();

    // This event fires whenever the PowerSetToOn signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsPowerSetToOnReceivedEventArgs^>^ PowerSetToOnReceived;

    // Calling this method will send the FlowSetToHI signal to every member of the session.
    void FlowSetToHI();

    // This event fires whenever the FlowSetToHI signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToHIReceivedEventArgs^>^ FlowSetToHIReceived;

    // Calling this method will send the FlowSetToMED signal to every member of the session.
    void FlowSetToMED();

    // This event fires whenever the FlowSetToMED signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToMEDReceivedEventArgs^>^ FlowSetToMEDReceived;

    // Calling this method will send the FlowSetToLOW signal to every member of the session.
    void FlowSetToLOW();

    // This event fires whenever the FlowSetToLOW signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToLOWReceivedEventArgs^>^ FlowSetToLOWReceived;

    // Calling this method will send the FlowSetToQUIET signal to every member of the session.
    void FlowSetToQUIET();

    // This event fires whenever the FlowSetToQUIET signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToQUIETReceivedEventArgs^>^ FlowSetToQUIETReceived;

    // Calling this method will send the FlowSetToAUTO signal to every member of the session.
    void FlowSetToAUTO();

    // This event fires whenever the FlowSetToAUTO signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsFlowSetToAUTOReceivedEventArgs^>^ FlowSetToAUTOReceived;

    // Calling this method will send the TimerSetTo8H signal to every member of the session.
    void TimerSetTo8H();

    // This event fires whenever the TimerSetTo8H signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsTimerSetTo8HReceivedEventArgs^>^ TimerSetTo8HReceived;

    // Calling this method will send the TimerSetTo2H signal to every member of the session.
    void TimerSetTo2H();

    // This event fires whenever the TimerSetTo2H signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsTimerSetTo2HReceivedEventArgs^>^ TimerSetTo2HReceived;

    // Calling this method will send the TimerSetTo1H signal to every member of the session.
    void TimerSetTo1H();

    // This event fires whenever the TimerSetTo1H signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsTimerSetTo1HReceivedEventArgs^>^ TimerSetTo1HReceived;

    // Calling this method will send the TimerSetToOff signal to every member of the session.
    void TimerSetToOff();

    // This event fires whenever the TimerSetToOff signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsTimerSetToOffReceivedEventArgs^>^ TimerSetToOffReceived;

    // Calling this method will send the SensorOdorActivated signal to every member of the session.
    void SensorOdorActivated();

    // This event fires whenever the SensorOdorActivated signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsSensorOdorActivatedReceivedEventArgs^>^ SensorOdorActivatedReceived;

    // Calling this method will send the SensorDustActivated signal to every member of the session.
    void SensorDustActivated();

    // This event fires whenever the SensorDustActivated signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsSensorDustActivatedReceivedEventArgs^>^ SensorDustActivatedReceived;

    // Calling this method will send the SensorOdorDeactivated signal to every member of the session.
    void SensorOdorDeactivated();

    // This event fires whenever the SensorOdorDeactivated signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsSensorOdorDeactivatedReceivedEventArgs^>^ SensorOdorDeactivatedReceived;

    // Calling this method will send the SensorDustDeactivated signal to every member of the session.
    void SensorDustDeactivated();

    // This event fires whenever the SensorDustDeactivated signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsSensorDustDeactivatedReceivedEventArgs^>^ SensorDustDeactivatedReceived;

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallPowerSetToOffReceived(_In_ EventsSignals^ sender, _In_ EventsPowerSetToOffReceivedEventArgs^ args);
    void CallPowerSetToOnReceived(_In_ EventsSignals^ sender, _In_ EventsPowerSetToOnReceivedEventArgs^ args);
    void CallFlowSetToHIReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToHIReceivedEventArgs^ args);
    void CallFlowSetToMEDReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToMEDReceivedEventArgs^ args);
    void CallFlowSetToLOWReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToLOWReceivedEventArgs^ args);
    void CallFlowSetToQUIETReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToQUIETReceivedEventArgs^ args);
    void CallFlowSetToAUTOReceived(_In_ EventsSignals^ sender, _In_ EventsFlowSetToAUTOReceivedEventArgs^ args);
    void CallTimerSetTo8HReceived(_In_ EventsSignals^ sender, _In_ EventsTimerSetTo8HReceivedEventArgs^ args);
    void CallTimerSetTo2HReceived(_In_ EventsSignals^ sender, _In_ EventsTimerSetTo2HReceivedEventArgs^ args);
    void CallTimerSetTo1HReceived(_In_ EventsSignals^ sender, _In_ EventsTimerSetTo1HReceivedEventArgs^ args);
    void CallTimerSetToOffReceived(_In_ EventsSignals^ sender, _In_ EventsTimerSetToOffReceivedEventArgs^ args);
    void CallSensorOdorActivatedReceived(_In_ EventsSignals^ sender, _In_ EventsSensorOdorActivatedReceivedEventArgs^ args);
    void CallSensorDustActivatedReceived(_In_ EventsSignals^ sender, _In_ EventsSensorDustActivatedReceivedEventArgs^ args);
    void CallSensorOdorDeactivatedReceived(_In_ EventsSignals^ sender, _In_ EventsSensorOdorDeactivatedReceivedEventArgs^ args);
    void CallSensorDustDeactivatedReceived(_In_ EventsSignals^ sender, _In_ EventsSensorDustDeactivatedReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    alljoyn_interfacedescription_member m_memberPowerSetToOff;
    alljoyn_interfacedescription_member m_memberPowerSetToOn;
    alljoyn_interfacedescription_member m_memberFlowSetToHI;
    alljoyn_interfacedescription_member m_memberFlowSetToMED;
    alljoyn_interfacedescription_member m_memberFlowSetToLOW;
    alljoyn_interfacedescription_member m_memberFlowSetToQUIET;
    alljoyn_interfacedescription_member m_memberFlowSetToAUTO;
    alljoyn_interfacedescription_member m_memberTimerSetTo8H;
    alljoyn_interfacedescription_member m_memberTimerSetTo2H;
    alljoyn_interfacedescription_member m_memberTimerSetTo1H;
    alljoyn_interfacedescription_member m_memberTimerSetToOff;
    alljoyn_interfacedescription_member m_memberSensorOdorActivated;
    alljoyn_interfacedescription_member m_memberSensorDustActivated;
    alljoyn_interfacedescription_member m_memberSensorOdorDeactivated;
    alljoyn_interfacedescription_member m_memberSensorDustDeactivated;
};

} } } } 