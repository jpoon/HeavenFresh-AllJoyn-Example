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

namespace org { namespace alljoyn { namespace Config {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IConfigService. Instead, ConfigServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class ConfigServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IConfigService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<ConfigServiceEventAdapter^, ConfigFactoryResetCalledEventArgs^>^ FactoryResetCalled;
    event Windows::Foundation::TypedEventHandler<ConfigServiceEventAdapter^, ConfigRestartCalledEventArgs^>^ RestartCalled;
    event Windows::Foundation::TypedEventHandler<ConfigServiceEventAdapter^, ConfigGetConfigurationsCalledEventArgs^>^ GetConfigurationsCalled;
    event Windows::Foundation::TypedEventHandler<ConfigServiceEventAdapter^, ConfigUpdateConfigurationsCalledEventArgs^>^ UpdateConfigurationsCalled;
    event Windows::Foundation::TypedEventHandler<ConfigServiceEventAdapter^, ConfigResetConfigurationsCalledEventArgs^>^ ResetConfigurationsCalled;
    event Windows::Foundation::TypedEventHandler<ConfigServiceEventAdapter^, ConfigSetPasscodeCalledEventArgs^>^ SetPasscodeCalled;

    // Property Read Events
    event Windows::Foundation::TypedEventHandler<ConfigServiceEventAdapter^, ConfigGetVersionRequestedEventArgs^>^ GetVersionRequested;
    
    // Property Write Events

    // IConfigService Implementation
    virtual Windows::Foundation::IAsyncOperation<ConfigFactoryResetResult^>^ FactoryResetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<ConfigRestartResult^>^ RestartAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<ConfigGetConfigurationsResult^>^ GetConfigurationsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberInputArg);
    virtual Windows::Foundation::IAsyncOperation<ConfigUpdateConfigurationsResult^>^ UpdateConfigurationsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberInputArg, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberInputArg2);
    virtual Windows::Foundation::IAsyncOperation<ConfigResetConfigurationsResult^>^ ResetConfigurationsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberInputArg, _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberInputArg2);
    virtual Windows::Foundation::IAsyncOperation<ConfigSetPasscodeResult^>^ SetPasscodeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberInputArg, _In_ Windows::Foundation::Collections::IVectorView<byte>^ interfaceMemberInputArg2);

    virtual Windows::Foundation::IAsyncOperation<ConfigGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

};

} } } 
