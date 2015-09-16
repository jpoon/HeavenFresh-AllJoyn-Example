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

namespace org { namespace alljoyn { namespace Humidifier { namespace Events {

ref class EventsSignals;

public interface class IEventsSignals
{
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsPowerSetToOffReceivedEventArgs^>^ PowerSetToOffReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsPowerSetToOnReceivedEventArgs^>^ PowerSetToOnReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo40ReceivedEventArgs^>^ HumiditySetTo40Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo45ReceivedEventArgs^>^ HumiditySetTo45Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo50ReceivedEventArgs^>^ HumiditySetTo50Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo55ReceivedEventArgs^>^ HumiditySetTo55Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo60ReceivedEventArgs^>^ HumiditySetTo60Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo65ReceivedEventArgs^>^ HumiditySetTo65Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo70ReceivedEventArgs^>^ HumiditySetTo70Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo75ReceivedEventArgs^>^ HumiditySetTo75Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo80ReceivedEventArgs^>^ HumiditySetTo80Received;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsWarmMistSetToOFFReceivedEventArgs^>^ WarmMistSetToOFFReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsWarmMistSetToLOWReceivedEventArgs^>^ WarmMistSetToLOWReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsWarmMistSetToHIReceivedEventArgs^>^ WarmMistSetToHIReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsMistVolumeSetToLOWReceivedEventArgs^>^ MistVolumeSetToLOWReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsMistVolumeSetToMEDReceivedEventArgs^>^ MistVolumeSetToMEDReceived;
    event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsMistVolumeSetToHIReceivedEventArgs^>^ MistVolumeSetToHIReceived;
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

    // Calling this method will send the HumiditySetTo40 signal to every member of the session.
    void HumiditySetTo40();

    // This event fires whenever the HumiditySetTo40 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo40ReceivedEventArgs^>^ HumiditySetTo40Received;

    // Calling this method will send the HumiditySetTo45 signal to every member of the session.
    void HumiditySetTo45();

    // This event fires whenever the HumiditySetTo45 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo45ReceivedEventArgs^>^ HumiditySetTo45Received;

    // Calling this method will send the HumiditySetTo50 signal to every member of the session.
    void HumiditySetTo50();

    // This event fires whenever the HumiditySetTo50 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo50ReceivedEventArgs^>^ HumiditySetTo50Received;

    // Calling this method will send the HumiditySetTo55 signal to every member of the session.
    void HumiditySetTo55();

    // This event fires whenever the HumiditySetTo55 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo55ReceivedEventArgs^>^ HumiditySetTo55Received;

    // Calling this method will send the HumiditySetTo60 signal to every member of the session.
    void HumiditySetTo60();

    // This event fires whenever the HumiditySetTo60 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo60ReceivedEventArgs^>^ HumiditySetTo60Received;

    // Calling this method will send the HumiditySetTo65 signal to every member of the session.
    void HumiditySetTo65();

    // This event fires whenever the HumiditySetTo65 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo65ReceivedEventArgs^>^ HumiditySetTo65Received;

    // Calling this method will send the HumiditySetTo70 signal to every member of the session.
    void HumiditySetTo70();

    // This event fires whenever the HumiditySetTo70 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo70ReceivedEventArgs^>^ HumiditySetTo70Received;

    // Calling this method will send the HumiditySetTo75 signal to every member of the session.
    void HumiditySetTo75();

    // This event fires whenever the HumiditySetTo75 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo75ReceivedEventArgs^>^ HumiditySetTo75Received;

    // Calling this method will send the HumiditySetTo80 signal to every member of the session.
    void HumiditySetTo80();

    // This event fires whenever the HumiditySetTo80 signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsHumiditySetTo80ReceivedEventArgs^>^ HumiditySetTo80Received;

    // Calling this method will send the WarmMistSetToOFF signal to every member of the session.
    void WarmMistSetToOFF();

    // This event fires whenever the WarmMistSetToOFF signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsWarmMistSetToOFFReceivedEventArgs^>^ WarmMistSetToOFFReceived;

    // Calling this method will send the WarmMistSetToLOW signal to every member of the session.
    void WarmMistSetToLOW();

    // This event fires whenever the WarmMistSetToLOW signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsWarmMistSetToLOWReceivedEventArgs^>^ WarmMistSetToLOWReceived;

    // Calling this method will send the WarmMistSetToHI signal to every member of the session.
    void WarmMistSetToHI();

    // This event fires whenever the WarmMistSetToHI signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsWarmMistSetToHIReceivedEventArgs^>^ WarmMistSetToHIReceived;

    // Calling this method will send the MistVolumeSetToLOW signal to every member of the session.
    void MistVolumeSetToLOW();

    // This event fires whenever the MistVolumeSetToLOW signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsMistVolumeSetToLOWReceivedEventArgs^>^ MistVolumeSetToLOWReceived;

    // Calling this method will send the MistVolumeSetToMED signal to every member of the session.
    void MistVolumeSetToMED();

    // This event fires whenever the MistVolumeSetToMED signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsMistVolumeSetToMEDReceivedEventArgs^>^ MistVolumeSetToMEDReceived;

    // Calling this method will send the MistVolumeSetToHI signal to every member of the session.
    void MistVolumeSetToHI();

    // This event fires whenever the MistVolumeSetToHI signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<EventsSignals^, EventsMistVolumeSetToHIReceivedEventArgs^>^ MistVolumeSetToHIReceived;

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallPowerSetToOffReceived(_In_ EventsSignals^ sender, _In_ EventsPowerSetToOffReceivedEventArgs^ args);
    void CallPowerSetToOnReceived(_In_ EventsSignals^ sender, _In_ EventsPowerSetToOnReceivedEventArgs^ args);
    void CallHumiditySetTo40Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo40ReceivedEventArgs^ args);
    void CallHumiditySetTo45Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo45ReceivedEventArgs^ args);
    void CallHumiditySetTo50Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo50ReceivedEventArgs^ args);
    void CallHumiditySetTo55Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo55ReceivedEventArgs^ args);
    void CallHumiditySetTo60Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo60ReceivedEventArgs^ args);
    void CallHumiditySetTo65Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo65ReceivedEventArgs^ args);
    void CallHumiditySetTo70Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo70ReceivedEventArgs^ args);
    void CallHumiditySetTo75Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo75ReceivedEventArgs^ args);
    void CallHumiditySetTo80Received(_In_ EventsSignals^ sender, _In_ EventsHumiditySetTo80ReceivedEventArgs^ args);
    void CallWarmMistSetToOFFReceived(_In_ EventsSignals^ sender, _In_ EventsWarmMistSetToOFFReceivedEventArgs^ args);
    void CallWarmMistSetToLOWReceived(_In_ EventsSignals^ sender, _In_ EventsWarmMistSetToLOWReceivedEventArgs^ args);
    void CallWarmMistSetToHIReceived(_In_ EventsSignals^ sender, _In_ EventsWarmMistSetToHIReceivedEventArgs^ args);
    void CallMistVolumeSetToLOWReceived(_In_ EventsSignals^ sender, _In_ EventsMistVolumeSetToLOWReceivedEventArgs^ args);
    void CallMistVolumeSetToMEDReceived(_In_ EventsSignals^ sender, _In_ EventsMistVolumeSetToMEDReceivedEventArgs^ args);
    void CallMistVolumeSetToHIReceived(_In_ EventsSignals^ sender, _In_ EventsMistVolumeSetToHIReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    alljoyn_interfacedescription_member m_memberPowerSetToOff;
    alljoyn_interfacedescription_member m_memberPowerSetToOn;
    alljoyn_interfacedescription_member m_memberHumiditySetTo40;
    alljoyn_interfacedescription_member m_memberHumiditySetTo45;
    alljoyn_interfacedescription_member m_memberHumiditySetTo50;
    alljoyn_interfacedescription_member m_memberHumiditySetTo55;
    alljoyn_interfacedescription_member m_memberHumiditySetTo60;
    alljoyn_interfacedescription_member m_memberHumiditySetTo65;
    alljoyn_interfacedescription_member m_memberHumiditySetTo70;
    alljoyn_interfacedescription_member m_memberHumiditySetTo75;
    alljoyn_interfacedescription_member m_memberHumiditySetTo80;
    alljoyn_interfacedescription_member m_memberWarmMistSetToOFF;
    alljoyn_interfacedescription_member m_memberWarmMistSetToLOW;
    alljoyn_interfacedescription_member m_memberWarmMistSetToHI;
    alljoyn_interfacedescription_member m_memberMistVolumeSetToLOW;
    alljoyn_interfacedescription_member m_memberMistVolumeSetToMED;
    alljoyn_interfacedescription_member m_memberMistVolumeSetToHI;
};

} } } } 
