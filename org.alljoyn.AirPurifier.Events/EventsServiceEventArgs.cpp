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
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace org::alljoyn::AirPurifier::Events;
namespace org { namespace alljoyn { namespace AirPurifier { namespace Events {

// Methods
// Readable Properties
EventsGetVersionRequestedEventArgs::EventsGetVersionRequestedEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = EventsGetVersionResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ EventsGetVersionRequestedEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &EventsGetVersionRequestedEventArgs::Complete);
    return ref new Deferral(handler);
}

void EventsGetVersionRequestedEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void EventsGetVersionRequestedEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void EventsGetVersionRequestedEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for GetVersionRequested.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

// Writable Properties
} } } } 
