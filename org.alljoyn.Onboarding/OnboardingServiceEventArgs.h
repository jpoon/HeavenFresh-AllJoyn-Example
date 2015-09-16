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

namespace org { namespace alljoyn { namespace Onboarding {

// Methods
public ref class OnboardingConfigureWiFiCalledEventArgs sealed
{
public:
    OnboardingConfigureWiFiCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Onboarding^ interfaceMemberInputArg);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property OnboardingConfigureWiFiResult^ Result
    {
        OnboardingConfigureWiFiResult^ get() { return m_result; }
        void set(_In_ OnboardingConfigureWiFiResult^ value) { m_result = value; }
    }

    property Onboarding^ InputArg
    {
        Onboarding^ get() { return m_interfaceMemberInputArg; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<OnboardingConfigureWiFiResult^>^ GetResultAsync(OnboardingConfigureWiFiCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<OnboardingConfigureWiFiResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<OnboardingConfigureWiFiResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    OnboardingConfigureWiFiResult^ m_result;
    Onboarding^ m_interfaceMemberInputArg;
};

public ref class OnboardingConnectCalledEventArgs sealed
{
public:
    OnboardingConnectCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property OnboardingConnectResult^ Result
    {
        OnboardingConnectResult^ get() { return m_result; }
        void set(_In_ OnboardingConnectResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<OnboardingConnectResult^>^ GetResultAsync(OnboardingConnectCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<OnboardingConnectResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<OnboardingConnectResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    OnboardingConnectResult^ m_result;
};

public ref class OnboardingOffboardCalledEventArgs sealed
{
public:
    OnboardingOffboardCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property OnboardingOffboardResult^ Result
    {
        OnboardingOffboardResult^ get() { return m_result; }
        void set(_In_ OnboardingOffboardResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<OnboardingOffboardResult^>^ GetResultAsync(OnboardingOffboardCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<OnboardingOffboardResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<OnboardingOffboardResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    OnboardingOffboardResult^ m_result;
};

public ref class OnboardingGetScanInfoCalledEventArgs sealed
{
public:
    OnboardingGetScanInfoCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property OnboardingGetScanInfoResult^ Result
    {
        OnboardingGetScanInfoResult^ get() { return m_result; }
        void set(_In_ OnboardingGetScanInfoResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<OnboardingGetScanInfoResult^>^ GetResultAsync(OnboardingGetScanInfoCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<OnboardingGetScanInfoResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<OnboardingGetScanInfoResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    OnboardingGetScanInfoResult^ m_result;
};

// Readable Properties
public ref class OnboardingGetVersionRequestedEventArgs sealed
{
public:
    OnboardingGetVersionRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property OnboardingGetVersionResult^ Result
    {
        OnboardingGetVersionResult^ get() { return m_result; }
        void set(_In_ OnboardingGetVersionResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<OnboardingGetVersionResult^>^ GetResultAsync(OnboardingGetVersionRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<OnboardingGetVersionResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<OnboardingGetVersionResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    OnboardingGetVersionResult^ m_result;
};

public ref class OnboardingGetStateRequestedEventArgs sealed
{
public:
    OnboardingGetStateRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property OnboardingGetStateResult^ Result
    {
        OnboardingGetStateResult^ get() { return m_result; }
        void set(_In_ OnboardingGetStateResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<OnboardingGetStateResult^>^ GetResultAsync(OnboardingGetStateRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<OnboardingGetStateResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<OnboardingGetStateResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    OnboardingGetStateResult^ m_result;
};

public ref class OnboardingGetLastErrorRequestedEventArgs sealed
{
public:
    OnboardingGetLastErrorRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property OnboardingGetLastErrorResult^ Result
    {
        OnboardingGetLastErrorResult^ get() { return m_result; }
        void set(_In_ OnboardingGetLastErrorResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<OnboardingGetLastErrorResult^>^ GetResultAsync(OnboardingGetLastErrorRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<OnboardingGetLastErrorResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<OnboardingGetLastErrorResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    OnboardingGetLastErrorResult^ m_result;
};

// Writable Properties
} } } 
