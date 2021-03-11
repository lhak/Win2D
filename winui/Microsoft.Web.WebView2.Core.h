/* Header file automatically generated from Microsoft.Web.WebView2.Core.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0229 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __Microsoft2EWeb2EWebView22ECore_h__
#define __Microsoft2EWeb2EWebView22ECore_h__
#ifndef __Microsoft2EWeb2EWebView22ECore_p_h__
#define __Microsoft2EWeb2EWebView22ECore_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xa0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.DataTransfer.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Core.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 ABI::Microsoft::Web::WebView2::Core::ICoreWebView2

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2AcceleratorKeyPressedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2AcceleratorKeyPressedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2CompositionController;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2CompositionControllerInterop;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionControllerInterop

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2ContentLoadingEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ContentLoadingEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2Controller;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2ControllerFactory;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerFactory

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2ControllerWindowReference;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2ControllerWindowReferenceStatics;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReferenceStatics

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2Cookie;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Cookie

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2CookieManager;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CookieManager

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2DOMContentLoadedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DOMContentLoadedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2DevToolsProtocolEventReceivedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DevToolsProtocolEventReceivedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2DevToolsProtocolEventReceiver;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DevToolsProtocolEventReceiver

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2Environment;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2EnvironmentInterop;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop ABI::Microsoft::Web::WebView2::Core::ICoreWebView2EnvironmentInterop

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2EnvironmentOptions;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions ABI::Microsoft::Web::WebView2::Core::ICoreWebView2EnvironmentOptions

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2EnvironmentStatics;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics ABI::Microsoft::Web::WebView2::Core::ICoreWebView2EnvironmentStatics

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2HttpHeadersCollectionIterator;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpHeadersCollectionIterator

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2HttpRequestHeaders;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpRequestHeaders

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2HttpResponseHeaders;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpResponseHeaders

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2MoveFocusRequestedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2MoveFocusRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2NavigationCompletedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NavigationCompletedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2NavigationStartingEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NavigationStartingEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2NewWindowRequestedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NewWindowRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2PermissionRequestedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2PermissionRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2PointerInfo;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo ABI::Microsoft::Web::WebView2::Core::ICoreWebView2PointerInfo

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2ProcessFailedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ProcessFailedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2ScriptDialogOpeningEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ScriptDialogOpeningEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2Settings;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Settings

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2SourceChangedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2SourceChangedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2WebMessageReceivedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebMessageReceivedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2WebResourceRequest;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequest

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2WebResourceRequestedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2WebResourceResponse;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponse

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2WebResourceResponseReceivedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponseReceivedEventArgs

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2WebResourceResponseView;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponseView

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    interface ICoreWebView2WindowFeatures;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WindowFeatures

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2CompositionController;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bcc673a2-3159-5629-834e-fd98fdd856f0"))
IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.Web.WebView2.Core.CoreWebView2CompositionController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*> __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*>
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_USE */





#ifndef DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_USE
#define DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5d7c5a55-fc7b-576b-9ecd-cea9fcbcd818"))
IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.Web.WebView2.Core.CoreWebView2CompositionController>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*> __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_t;
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController ABI::Windows::Foundation::__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController ABI::Windows::Foundation::IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*>
//#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_t ABI::Windows::Foundation::IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_USE */



namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2Controller;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("27748caf-6eaa-502b-abcb-372e5f9eebb9"))
IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.Web.WebView2.Core.CoreWebView2Controller>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*> __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_USE */





#ifndef DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_USE
#define DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a7d656bc-f13f-5b33-9e3c-9ed22de4b433"))
IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.Web.WebView2.Core.CoreWebView2Controller>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*> __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_t;
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller ABI::Windows::Foundation::__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller ABI::Windows::Foundation::IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>
//#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_t ABI::Windows::Foundation::IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_USE */



namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2Environment;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1cc60060-06a4-5618-a55a-c319219c733e"))
IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Microsoft.Web.WebView2.Core.CoreWebView2Environment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*> __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_t;
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*>
//#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_USE */





#ifndef DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_USE
#define DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2d35c71f-f832-5de7-af62-e687825a06d4"))
IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Microsoft.Web.WebView2.Core.CoreWebView2Environment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*> __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_t;
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment ABI::Windows::Foundation::__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment ABI::Windows::Foundation::IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*>
//#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_t ABI::Windows::Foundation::IAsyncOperation<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_USE */



namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */




#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2930c5c8-ed05-5875-84c0-068e018208e8"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,IInspectable*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2ContentLoadingEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("922949c6-2f1c-5a35-bb52-1dda426ec02d"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2ContentLoadingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2ContentLoadingEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ContentLoadingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2ContentLoadingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2ContentLoadingEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ContentLoadingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ContentLoadingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2DOMContentLoadedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("417646d0-86d4-54b9-8271-5957593c2a85"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2DOMContentLoadedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2DOMContentLoadedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DOMContentLoadedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2DOMContentLoadedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2DOMContentLoadedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DOMContentLoadedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DOMContentLoadedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2DevToolsProtocolEventReceivedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("02175754-31ec-5c0b-a9b2-ec09b02744be"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2DevToolsProtocolEventReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2DevToolsProtocolEventReceivedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DevToolsProtocolEventReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2DevToolsProtocolEventReceivedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DevToolsProtocolEventReceivedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DevToolsProtocolEventReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2NavigationCompletedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("04c8360d-8936-5278-a481-e5fab6ac145f"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2NavigationCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2NavigationCompletedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NavigationCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2NavigationCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2NavigationCompletedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NavigationCompletedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NavigationCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2NavigationStartingEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9ad59015-bb1e-5f09-a6e0-2cd94c03ad51"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2NavigationStartingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2NavigationStartingEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NavigationStartingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2NavigationStartingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2NavigationStartingEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NavigationStartingEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NavigationStartingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2NewWindowRequestedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4d621b8f-b24a-5397-b2f3-cfd099407fe6"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2NewWindowRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2NewWindowRequestedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NewWindowRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2NewWindowRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2NewWindowRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NewWindowRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2NewWindowRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2PermissionRequestedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4e8d65b1-8a18-5573-b72b-1e5d38104014"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2PermissionRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2PermissionRequestedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2PermissionRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2PermissionRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2PermissionRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2PermissionRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2PermissionRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2ProcessFailedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b5abb1cb-e6d4-536b-88a7-220b1ff47b40"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2ProcessFailedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2ProcessFailedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ProcessFailedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2ProcessFailedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ProcessFailedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ProcessFailedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2ScriptDialogOpeningEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd29166a-b464-546b-94d7-d1f0acc9de34"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2ScriptDialogOpeningEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2ScriptDialogOpeningEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ScriptDialogOpeningEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogOpeningEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2ScriptDialogOpeningEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ScriptDialogOpeningEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ScriptDialogOpeningEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2SourceChangedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c0615896-afa3-5949-94d2-c24c85cd5391"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2SourceChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2SourceChangedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2SourceChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2SourceChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2SourceChangedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2SourceChangedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2SourceChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2WebMessageReceivedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0c3f92aa-314a-5685-9242-3143cba62ac8"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebMessageReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebMessageReceivedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebMessageReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2WebMessageReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebMessageReceivedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebMessageReceivedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebMessageReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2WebResourceRequestedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8ac204d0-f3d3-5aee-bd9a-4ae1b6106d10"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceRequestedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2WebResourceResponseReceivedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("23260b0b-89c6-591e-8463-5cb4b7e53828"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceResponseReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceResponseReceivedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponseReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2, Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceResponseReceivedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponseReceivedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponseReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_USE */






#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4cb687c5-e6c4-59ed-ab68-3adee2d7b156"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2CompositionController, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2CompositionController*,IInspectable*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CompositionController*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_USE */






#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("81a4053f-f47b-50a1-a538-70153eb7d19e"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2Controller, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*,IInspectable*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2AcceleratorKeyPressedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("389a8241-6d27-52e8-b90b-b51cd481f889"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2AcceleratorKeyPressedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2AcceleratorKeyPressedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2AcceleratorKeyPressedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2Controller, Microsoft.Web.WebView2.Core.CoreWebView2AcceleratorKeyPressedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2AcceleratorKeyPressedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2AcceleratorKeyPressedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2AcceleratorKeyPressedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_USE */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2MoveFocusRequestedEventArgs;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5d4a4819-3c5a-56e6-bdd1-ef07f2077955"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2MoveFocusRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2MoveFocusRequestedEventArgs*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2MoveFocusRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2Controller, Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Controller*,ABI::Microsoft::Web::WebView2::Core::CoreWebView2MoveFocusRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2MoveFocusRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Controller*,ABI::Microsoft::Web::WebView2::Core::ICoreWebView2MoveFocusRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_USE */






#ifndef DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_USE
#define DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8233caa2-fcc7-5884-a6d0-eb1d76efd043"))
ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*, ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.Web.WebView2.Core.CoreWebView2Environment, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::CoreWebView2Environment*,IInspectable*> __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_t;
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*,IInspectable*>
//#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
//#define __FIAsyncOperationCompletedHandler_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<HSTRING>
//#define __FIAsyncOperation_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */




#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */



#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStream;
            } /* Streams */
        } /* Storage */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream ABI::Windows::Storage::Streams::IRandomAccessStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("398c4183-793d-5b00-819b-4aef92485e94"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("430ecece-1418-5d19-81b2-5ddb381603cc"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataPackage;
            } /* DataTransfer */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackage;
            } /* DataTransfer */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage ABI::Windows::ApplicationModel::DataTransfer::IDataPackage

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Deferral;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDeferral;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIDeferral ABI::Windows::Foundation::IDeferral

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Matrix4x4 Matrix4x4;
                
            } /* Numerics */
        } /* Foundation */
    } /* Windows */
} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* Foundation */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Foundation */
    } /* Windows */
} /* ABI */







namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreCursor;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreCursor;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreCursor ABI::Windows::UI::Core::ICoreCursor

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreWindow;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreWindow;
            } /* Core */
        } /* UI */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreWindow ABI::Windows::UI::Core::ICoreWindow

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__





namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2BoundsMode : int CoreWebView2BoundsMode;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2CapturePreviewImageFormat : int CoreWebView2CapturePreviewImageFormat;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2CookieSameSiteKind : int CoreWebView2CookieSameSiteKind;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2HostResourceAccessKind : int CoreWebView2HostResourceAccessKind;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2KeyEventKind : int CoreWebView2KeyEventKind;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2MouseEventKind : int CoreWebView2MouseEventKind;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2MouseEventVirtualKeys : unsigned int CoreWebView2MouseEventVirtualKeys;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2MoveFocusReason : int CoreWebView2MoveFocusReason;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2PermissionKind : int CoreWebView2PermissionKind;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2PermissionState : int CoreWebView2PermissionState;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2PointerEventKind : int CoreWebView2PointerEventKind;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2ProcessFailedKind : int CoreWebView2ProcessFailedKind;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2ScriptDialogKind : int CoreWebView2ScriptDialogKind;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2WebErrorStatus : int CoreWebView2WebErrorStatus;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef enum CoreWebView2WebResourceContext : int CoreWebView2WebResourceContext;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    
                    typedef struct CoreWebView2PhysicalKeyStatus CoreWebView2PhysicalKeyStatus;
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */










































namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2CompositionControllerInterop;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2ControllerWindowReference;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2Cookie;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2CookieManager;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2DevToolsProtocolEventReceiver;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2EnvironmentInterop;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2EnvironmentOptions;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2HttpHeadersCollectionIterator;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2HttpRequestHeaders;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2HttpResponseHeaders;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */







namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2PointerInfo;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2Settings;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */




namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2WebResourceRequest;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2WebResourceResponse;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */



namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2WebResourceResponseView;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    class CoreWebView2WindowFeatures;
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */












/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2BoundsMode
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2BoundsMode : int
                    {
                        CoreWebView2BoundsMode_UseRawPixels = 0,
                        CoreWebView2BoundsMode_UseRasterizationScale = 1,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2CapturePreviewImageFormat
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2CapturePreviewImageFormat : int
                    {
                        CoreWebView2CapturePreviewImageFormat_Png = 0,
                        CoreWebView2CapturePreviewImageFormat_Jpeg = 1,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2CookieSameSiteKind
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2CookieSameSiteKind : int
                    {
                        CoreWebView2CookieSameSiteKind_None = 0,
                        CoreWebView2CookieSameSiteKind_Lax = 1,
                        CoreWebView2CookieSameSiteKind_Strict = 2,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2HostResourceAccessKind
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2HostResourceAccessKind : int
                    {
                        CoreWebView2HostResourceAccessKind_Deny = 0,
                        CoreWebView2HostResourceAccessKind_Allow = 1,
                        CoreWebView2HostResourceAccessKind_DenyCors = 2,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2KeyEventKind
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2KeyEventKind : int
                    {
                        CoreWebView2KeyEventKind_KeyDown = 0,
                        CoreWebView2KeyEventKind_KeyUp = 1,
                        CoreWebView2KeyEventKind_SystemKeyDown = 2,
                        CoreWebView2KeyEventKind_SystemKeyUp = 3,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2MouseEventKind
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2MouseEventKind : int
                    {
                        CoreWebView2MouseEventKind_HorizontalWheel = 526,
                        CoreWebView2MouseEventKind_LeftButtonDoubleClick = 515,
                        CoreWebView2MouseEventKind_LeftButtonDown = 513,
                        CoreWebView2MouseEventKind_LeftButtonUp = 514,
                        CoreWebView2MouseEventKind_Leave = 675,
                        CoreWebView2MouseEventKind_MiddleButtonDoubleClick = 521,
                        CoreWebView2MouseEventKind_MiddleButtonDown = 519,
                        CoreWebView2MouseEventKind_MiddleButtonUp = 520,
                        CoreWebView2MouseEventKind_Move = 512,
                        CoreWebView2MouseEventKind_RightButtonDoubleClick = 518,
                        CoreWebView2MouseEventKind_RightButtonDown = 516,
                        CoreWebView2MouseEventKind_RightButtonUp = 517,
                        CoreWebView2MouseEventKind_Wheel = 522,
                        CoreWebView2MouseEventKind_XButtonDoubleClick = 525,
                        CoreWebView2MouseEventKind_XButtonDown = 523,
                        CoreWebView2MouseEventKind_XButtonUp = 524,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2MouseEventVirtualKeys
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version, flags] */
                    enum CoreWebView2MouseEventVirtualKeys : unsigned int
                    {
                        CoreWebView2MouseEventVirtualKeys_None = 0,
                        CoreWebView2MouseEventVirtualKeys_LeftButton = 0x1,
                        CoreWebView2MouseEventVirtualKeys_RightButton = 0x2,
                        CoreWebView2MouseEventVirtualKeys_Shift = 0x4,
                        CoreWebView2MouseEventVirtualKeys_Control = 0x8,
                        CoreWebView2MouseEventVirtualKeys_MiddleButton = 0x10,
                        CoreWebView2MouseEventVirtualKeys_XButton1 = 0x20,
                        CoreWebView2MouseEventVirtualKeys_XButton2 = 0x40,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(CoreWebView2MouseEventVirtualKeys)
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusReason
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2MoveFocusReason : int
                    {
                        CoreWebView2MoveFocusReason_Programmatic = 0,
                        CoreWebView2MoveFocusReason_Next = 1,
                        CoreWebView2MoveFocusReason_Previous = 2,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2PermissionKind
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2PermissionKind : int
                    {
                        CoreWebView2PermissionKind_UnknownPermission = 0,
                        CoreWebView2PermissionKind_Microphone = 1,
                        CoreWebView2PermissionKind_Camera = 2,
                        CoreWebView2PermissionKind_Geolocation = 3,
                        CoreWebView2PermissionKind_Notifications = 4,
                        CoreWebView2PermissionKind_OtherSensors = 5,
                        CoreWebView2PermissionKind_ClipboardRead = 6,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2PermissionState
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2PermissionState : int
                    {
                        CoreWebView2PermissionState_Default = 0,
                        CoreWebView2PermissionState_Allow = 1,
                        CoreWebView2PermissionState_Deny = 2,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2PointerEventKind
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2PointerEventKind : int
                    {
                        CoreWebView2PointerEventKind_Activate = 587,
                        CoreWebView2PointerEventKind_Down = 582,
                        CoreWebView2PointerEventKind_Enter = 585,
                        CoreWebView2PointerEventKind_Leave = 586,
                        CoreWebView2PointerEventKind_Up = 583,
                        CoreWebView2PointerEventKind_Update = 581,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedKind
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2ProcessFailedKind : int
                    {
                        CoreWebView2ProcessFailedKind_BrowserProcessExited = 0,
                        CoreWebView2ProcessFailedKind_RenderProcessExited = 1,
                        CoreWebView2ProcessFailedKind_RenderProcessUnresponsive = 2,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogKind
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2ScriptDialogKind : int
                    {
                        CoreWebView2ScriptDialogKind_Alert = 0,
                        CoreWebView2ScriptDialogKind_Confirm = 1,
                        CoreWebView2ScriptDialogKind_Prompt = 2,
                        CoreWebView2ScriptDialogKind_Beforeunload = 3,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2WebErrorStatus
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2WebErrorStatus : int
                    {
                        CoreWebView2WebErrorStatus_Unknown = 0,
                        CoreWebView2WebErrorStatus_CertificateCommonNameIsIncorrect = 1,
                        CoreWebView2WebErrorStatus_CertificateExpired = 2,
                        CoreWebView2WebErrorStatus_ClientCertificateContainsErrors = 3,
                        CoreWebView2WebErrorStatus_CertificateRevoked = 4,
                        CoreWebView2WebErrorStatus_CertificateIsInvalid = 5,
                        CoreWebView2WebErrorStatus_ServerUnreachable = 6,
                        CoreWebView2WebErrorStatus_Timeout = 7,
                        CoreWebView2WebErrorStatus_ErrorHttpInvalidServerResponse = 8,
                        CoreWebView2WebErrorStatus_ConnectionAborted = 9,
                        CoreWebView2WebErrorStatus_ConnectionReset = 10,
                        CoreWebView2WebErrorStatus_Disconnected = 11,
                        CoreWebView2WebErrorStatus_CannotConnect = 12,
                        CoreWebView2WebErrorStatus_HostNameNotResolved = 13,
                        CoreWebView2WebErrorStatus_OperationCanceled = 14,
                        CoreWebView2WebErrorStatus_RedirectFailed = 15,
                        CoreWebView2WebErrorStatus_UnexpectedError = 16,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2WebResourceContext
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [v1_enum, version] */
                    enum CoreWebView2WebResourceContext : int
                    {
                        CoreWebView2WebResourceContext_All = 0,
                        CoreWebView2WebResourceContext_Document = 1,
                        CoreWebView2WebResourceContext_Stylesheet = 2,
                        CoreWebView2WebResourceContext_Image = 3,
                        CoreWebView2WebResourceContext_Media = 4,
                        CoreWebView2WebResourceContext_Font = 5,
                        CoreWebView2WebResourceContext_Script = 6,
                        CoreWebView2WebResourceContext_XmlHttpRequest = 7,
                        CoreWebView2WebResourceContext_Fetch = 8,
                        CoreWebView2WebResourceContext_TextTrack = 9,
                        CoreWebView2WebResourceContext_EventSource = 10,
                        CoreWebView2WebResourceContext_Websocket = 11,
                        CoreWebView2WebResourceContext_Manifest = 12,
                        CoreWebView2WebResourceContext_SignedExchange = 13,
                        CoreWebView2WebResourceContext_Ping = 14,
                        CoreWebView2WebResourceContext_CspViolationReport = 15,
                        CoreWebView2WebResourceContext_Other = 16,
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2PhysicalKeyStatus
 *
 */

namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [version] */
                    struct CoreWebView2PhysicalKeyStatus
                    {
                        UINT32 RepeatCount;
                        UINT32 ScanCode;
                        INT32 IsExtendedKey;
                        INT32 IsMenuKeyDown;
                        INT32 WasKeyDown;
                        INT32 IsKeyReleased;
                    };
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("3E1AB759-8CB8-5581-8CF7-2E1966F52978"), exclusiveto] */
                    MIDL_INTERFACE("3E1AB759-8CB8-5581-8CF7-2E1966F52978")
                    ICoreWebView2 : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Settings(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Settings * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrowserProcessId(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanGoBack(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanGoForward(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentTitle(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContainsFullScreenElement(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NavigationStarting(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NavigationStarting(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContentLoading(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContentLoading(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SourceChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SourceChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HistoryChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HistoryChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NavigationCompleted(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NavigationCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FrameNavigationStarting(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FrameNavigationStarting(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FrameNavigationCompleted(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FrameNavigationCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ScriptDialogOpening(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ScriptDialogOpening(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PermissionRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PermissionRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ProcessFailed(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ProcessFailed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WebMessageReceived(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WebMessageReceived(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NewWindowRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NewWindowRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DocumentTitleChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DocumentTitleChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContainsFullScreenElementChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContainsFullScreenElementChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WebResourceRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WebResourceRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WindowCloseRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WindowCloseRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Navigate(
                            /* [in] */HSTRING uri
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NavigateToString(
                            /* [in] */HSTRING htmlContent
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddScriptToExecuteOnDocumentCreatedAsync(
                            /* [in] */HSTRING javaScript,
                            /* [retval, out] */__FIAsyncOperation_1_HSTRING * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveScriptToExecuteOnDocumentCreated(
                            /* [in] */HSTRING id
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ExecuteScriptAsync(
                            /* [in] */HSTRING javaScript,
                            /* [retval, out] */__FIAsyncOperation_1_HSTRING * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CapturePreviewAsync(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2CapturePreviewImageFormat imageFormat,
                            /* [in] */ABI::Windows::Storage::Streams::IRandomAccessStream * imageStream,
                            /* [retval, out] */ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Reload(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE PostWebMessageAsJson(
                            /* [in] */HSTRING webMessageAsJson
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE PostWebMessageAsString(
                            /* [in] */HSTRING webMessageAsString
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CallDevToolsProtocolMethodAsync(
                            /* [in] */HSTRING methodName,
                            /* [in] */HSTRING parametersAsJson,
                            /* [retval, out] */__FIAsyncOperation_1_HSTRING * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GoBack(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GoForward(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDevToolsProtocolEventReceiver(
                            /* [in] */HSTRING eventName,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2DevToolsProtocolEventReceiver * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddHostObjectToScript(
                            /* [in] */HSTRING name,
                            /* [in] */IInspectable * rawObject
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveHostObjectFromScript(
                            /* [in] */HSTRING name
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OpenDevToolsWindow(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddWebResourceRequestedFilter(
                            /* [in] */HSTRING uri,
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceContext ResourceContext
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveWebResourceRequestedFilter(
                            /* [in] */HSTRING uri,
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceContext ResourceContext
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CookieManager(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2CookieManager * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Environment(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Environment * * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WebResourceResponseReceived(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WebResourceResponseReceived(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DOMContentLoaded(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DOMContentLoaded(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NavigateWithWebResourceRequest(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequest * Request
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetVirtualHostNameToFolderMapping(
                            /* [in] */HSTRING hostName,
                            /* [in] */HSTRING folderPath,
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2HostResourceAccessKind accessKind
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ClearVirtualHostNameToFolderMapping(
                            /* [in] */HSTRING hostName
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2=_uuidof(ICoreWebView2);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2AcceleratorKeyPressedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2AcceleratorKeyPressedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2AcceleratorKeyPressedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2AcceleratorKeyPressedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("41A56100-92A5-59D1-9E71-9222E33AE38B"), exclusiveto] */
                    MIDL_INTERFACE("41A56100-92A5-59D1-9E71-9222E33AE38B")
                    ICoreWebView2AcceleratorKeyPressedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyEventKind(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2KeyEventKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VirtualKey(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyEventLParam(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhysicalKeyStatus(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2PhysicalKeyStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2AcceleratorKeyPressedEventArgs=_uuidof(ICoreWebView2AcceleratorKeyPressedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2CompositionController
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2CompositionController
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2CompositionController[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2CompositionController";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("D5BEC4E0-8967-5DE7-B6E0-B8D54AB5DD09"), exclusiveto] */
                    MIDL_INTERFACE("D5BEC4E0-8967-5DE7-B6E0-B8D54AB5DD09")
                    ICoreWebView2CompositionController : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE DragEnter(
                            /* [in] */ABI::Windows::ApplicationModel::DataTransfer::IDataPackage * dataObject,
                            /* [in] */UINT32 keyState,
                            /* [in] */ABI::Windows::Foundation::Point point,
                            /* [retval, out] */UINT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DragLeave(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DragOver(
                            /* [in] */UINT32 keyState,
                            /* [in] */ABI::Windows::Foundation::Point point,
                            /* [retval, out] */UINT32 * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Drop(
                            /* [in] */ABI::Windows::ApplicationModel::DataTransfer::IDataPackage * dataObject,
                            /* [in] */UINT32 keyState,
                            /* [in] */ABI::Windows::Foundation::Point point,
                            /* [retval, out] */UINT32 * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UIAProvider(
                            /* [retval, out] */IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RootVisualTarget(
                            /* [retval, out] */IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RootVisualTarget(
                            /* [in] */IInspectable * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CursorChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CursorChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SendMouseInput(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2MouseEventKind eventKind,
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2MouseEventVirtualKeys virtualKeys,
                            /* [in] */UINT32 mouseData,
                            /* [in] */ABI::Windows::Foundation::Point point
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2PointerInfoFromPointerId(
                            /* [in] */UINT32 PointerId,
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * ParentWindow,
                            /* [in] */ABI::Windows::Foundation::Numerics::Matrix4x4 transform,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2PointerInfo * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SendPointerInput(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2PointerEventKind eventKind,
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2PointerInfo * pointerInfo
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cursor(
                            /* [retval, out] */ABI::Windows::UI::Core::ICoreCursor * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2CompositionController=_uuidof(ICoreWebView2CompositionController);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2CompositionControllerInterop
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2CompositionControllerInterop
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2CompositionControllerInterop[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2CompositionControllerInterop";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("1B939775-5D57-5FA6-B8BC-CC944E3078B6"), exclusiveto] */
                    MIDL_INTERFACE("1B939775-5D57-5FA6-B8BC-CC944E3078B6")
                    ICoreWebView2CompositionControllerInterop : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UIAProvider(
                            /* [retval, out] */IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RootVisualTarget(
                            /* [retval, out] */IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RootVisualTarget(
                            /* [in] */IInspectable * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2CompositionControllerInterop=_uuidof(ICoreWebView2CompositionControllerInterop);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ContentLoadingEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ContentLoadingEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ContentLoadingEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ContentLoadingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("6CF95373-946C-5DAE-9B3E-0FE23D5AA29F"), exclusiveto] */
                    MIDL_INTERFACE("6CF95373-946C-5DAE-9B3E-0FE23D5AA29F")
                    ICoreWebView2ContentLoadingEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsErrorPage(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavigationId(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2ContentLoadingEventArgs=_uuidof(ICoreWebView2ContentLoadingEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2Controller
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Controller
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2Controller[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2Controller";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("C601C246-2CB0-56B4-8264-CA03EDA7FB7D"), exclusiveto] */
                    MIDL_INTERFACE("C601C246-2CB0-56B4-8264-CA03EDA7FB7D")
                    ICoreWebView2Controller : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsVisible(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsVisible(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bounds(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bounds(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ZoomFactor(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ZoomFactor(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ParentWindow(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ParentWindow(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CoreWebView2(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2 * * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ZoomFactorChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ZoomFactorChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MoveFocusRequested(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MoveFocusRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GotFocus(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GotFocus(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LostFocus(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LostFocus(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AcceleratorKeyPressed(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AcceleratorKeyPressed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetBoundsAndZoomFactor(
                            /* [in] */ABI::Windows::Foundation::Rect Bounds,
                            /* [in] */DOUBLE ZoomFactor
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveFocus(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2MoveFocusReason reason
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyParentWindowPositionChanged(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Close(void) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RasterizationScale(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RasterizationScale(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShouldDetectMonitorScaleChanges(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShouldDetectMonitorScaleChanges(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundsMode(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2BoundsMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BoundsMode(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2BoundsMode value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RasterizationScaleChanged(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RasterizationScaleChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2Controller=_uuidof(ICoreWebView2Controller);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ControllerFactory
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Controller
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ControllerFactory[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ControllerFactory";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("270B2C5B-C3A9-53D8-A5CA-262EA9EA62E8"), exclusiveto] */
                    MIDL_INTERFACE("270B2C5B-C3A9-53D8-A5CA-262EA9EA62E8")
                    ICoreWebView2ControllerFactory : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2ControllerFactory=_uuidof(ICoreWebView2ControllerFactory);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReference
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ControllerWindowReference
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ControllerWindowReference[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReference";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("0FEDDAD4-48A3-5CC4-9F61-E7ADFD1E9C76"), exclusiveto] */
                    MIDL_INTERFACE("0FEDDAD4-48A3-5CC4-9F61-E7ADFD1E9C76")
                    ICoreWebView2ControllerWindowReference : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowHandle(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CoreWindow(
                            /* [retval, out] */ABI::Windows::UI::Core::ICoreWindow * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2ControllerWindowReference=_uuidof(ICoreWebView2ControllerWindowReference);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReferenceStatics
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ControllerWindowReference
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ControllerWindowReferenceStatics[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReferenceStatics";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("DDF6EBF1-EBC6-5A34-9008-661C3A2EB767"), exclusiveto] */
                    MIDL_INTERFACE("DDF6EBF1-EBC6-5A34-9008-661C3A2EB767")
                    ICoreWebView2ControllerWindowReferenceStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateFromWindowHandle(
                            /* [in] */UINT64 windowHandle,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateFromCoreWindow(
                            /* [in] */ABI::Windows::UI::Core::ICoreWindow * coreWindow,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2ControllerWindowReferenceStatics=_uuidof(ICoreWebView2ControllerWindowReferenceStatics);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2Cookie
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Cookie
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2Cookie[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2Cookie";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("52F670FE-8CA2-5AAD-AEDB-25F7903B7038"), exclusiveto] */
                    MIDL_INTERFACE("52F670FE-8CA2-5AAD-AEDB-25F7903B7038")
                    ICoreWebView2Cookie : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                            /* [in] */HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Domain(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Path(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Expires(
                            /* [retval, out] */DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Expires(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsHttpOnly(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsHttpOnly(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SameSite(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2CookieSameSiteKind * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SameSite(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2CookieSameSiteKind value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSecure(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsSecure(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSession(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2Cookie=_uuidof(ICoreWebView2Cookie);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2CookieManager
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2CookieManager
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2CookieManager[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2CookieManager";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("E4736DAC-2241-5AB3-85EF-47E8A1077DEF"), exclusiveto] */
                    MIDL_INTERFACE("E4736DAC-2241-5AB3-85EF-47E8A1077DEF")
                    ICoreWebView2CookieManager : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateCookie(
                            /* [in] */HSTRING name,
                            /* [in] */HSTRING value,
                            /* [in] */HSTRING Domain,
                            /* [in] */HSTRING Path,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Cookie * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateCookieWithCookie(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Cookie * cookieParam,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Cookie * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddOrUpdateCookie(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Cookie * cookie
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteCookie(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2Cookie * cookie
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteCookies(
                            /* [in] */HSTRING name,
                            /* [in] */HSTRING uri
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteCookiesWithDomainAndPath(
                            /* [in] */HSTRING name,
                            /* [in] */HSTRING Domain,
                            /* [in] */HSTRING Path
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteAllCookies(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2CookieManager=_uuidof(ICoreWebView2CookieManager);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2DOMContentLoadedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2DOMContentLoadedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2DOMContentLoadedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2DOMContentLoadedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("C474D0A3-24AC-59FC-B78B-DA7562A6A052"), exclusiveto] */
                    MIDL_INTERFACE("C474D0A3-24AC-59FC-B78B-DA7562A6A052")
                    ICoreWebView2DOMContentLoadedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavigationId(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2DOMContentLoadedEventArgs=_uuidof(ICoreWebView2DOMContentLoadedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceivedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceivedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2DevToolsProtocolEventReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceivedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("B6A4B41D-FD18-59FA-923A-C57555D960CE"), exclusiveto] */
                    MIDL_INTERFACE("B6A4B41D-FD18-59FA-923A-C57555D960CE")
                    ICoreWebView2DevToolsProtocolEventReceivedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ParameterObjectAsJson(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2DevToolsProtocolEventReceivedEventArgs=_uuidof(ICoreWebView2DevToolsProtocolEventReceivedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceiver
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceiver
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2DevToolsProtocolEventReceiver[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceiver";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("B2A2BE79-65FC-5537-8715-3D92BF31090B"), exclusiveto] */
                    MIDL_INTERFACE("B2A2BE79-65FC-5537-8715-3D92BF31090B")
                    ICoreWebView2DevToolsProtocolEventReceiver : public IInspectable
                    {
                    public:
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DevToolsProtocolEventReceived(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DevToolsProtocolEventReceived(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2DevToolsProtocolEventReceiver=_uuidof(ICoreWebView2DevToolsProtocolEventReceiver);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2Environment
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Environment
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2Environment[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2Environment";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("CE0D6036-A775-5A99-A9C0-5742F0B3AF9C"), exclusiveto] */
                    MIDL_INTERFACE("CE0D6036-A775-5A99-A9C0-5742F0B3AF9C")
                    ICoreWebView2Environment : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrowserVersionString(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NewBrowserVersionAvailable(
                            /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable * handler,
                            /* [retval, out] */EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NewBrowserVersionAvailable(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2ControllerAsync(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * ParentWindow,
                            /* [retval, out] */__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWebResourceResponse(
                            /* [in] */ABI::Windows::Storage::Streams::IRandomAccessStream * Content,
                            /* [in] */INT32 StatusCode,
                            /* [in] */HSTRING ReasonPhrase,
                            /* [in] */HSTRING Headers,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponse * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWebResourceRequest(
                            /* [in] */HSTRING uri,
                            /* [in] */HSTRING Method,
                            /* [in] */ABI::Windows::Storage::Streams::IRandomAccessStream * postData,
                            /* [in] */HSTRING Headers,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequest * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2CompositionControllerAsync(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * ParentWindow,
                            /* [retval, out] */__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2PointerInfo(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2PointerInfo * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetProviderForHwnd(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * hwnd,
                            /* [retval, out] */IInspectable * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2Environment=_uuidof(ICoreWebView2Environment);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentInterop
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentInterop
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2EnvironmentInterop[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentInterop";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("325CB998-B662-56D0-A6D5-3B90C1AEAD1D"), exclusiveto] */
                    MIDL_INTERFACE("325CB998-B662-56D0-A6D5-3B90C1AEAD1D")
                    ICoreWebView2EnvironmentInterop : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetProviderForHwnd(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2ControllerWindowReference * hwnd,
                            /* [retval, out] */IInspectable * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2EnvironmentInterop=_uuidof(ICoreWebView2EnvironmentInterop);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentOptions
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentOptions
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2EnvironmentOptions[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentOptions";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("25D6DC39-0062-5735-8B09-A6F535F19E97"), exclusiveto] */
                    MIDL_INTERFACE("25D6DC39-0062-5735-8B09-A6F535F19E97")
                    ICoreWebView2EnvironmentOptions : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdditionalBrowserArguments(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AdditionalBrowserArguments(
                            /* [in] */HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Language(
                            /* [in] */HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetCompatibleBrowserVersion(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TargetCompatibleBrowserVersion(
                            /* [in] */HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowSingleSignOnUsingOSPrimaryAccount(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowSingleSignOnUsingOSPrimaryAccount(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2EnvironmentOptions=_uuidof(ICoreWebView2EnvironmentOptions);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentStatics
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Environment
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2EnvironmentStatics[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentStatics";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("0E33F804-F20B-5635-8491-162AAA27517B"), exclusiveto] */
                    MIDL_INTERFACE("0E33F804-F20B-5635-8491-162AAA27517B")
                    ICoreWebView2EnvironmentStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateAsync(
                            /* [retval, out] */__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithOptionsAsync(
                            /* [in] */HSTRING browserExecutableFolder,
                            /* [in] */HSTRING userDataFolder,
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2EnvironmentOptions * options,
                            /* [retval, out] */__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * * operation
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetAvailableBrowserVersionString(
                            /* [retval, out] */HSTRING * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetAvailableBrowserVersionString2(
                            /* [in] */HSTRING browserExecutableFolder,
                            /* [retval, out] */HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CompareBrowserVersionString(
                            /* [in] */HSTRING browserVersionString1,
                            /* [in] */HSTRING browserVersionString2,
                            /* [retval, out] */INT32 * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2EnvironmentStatics=_uuidof(ICoreWebView2EnvironmentStatics);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2HttpHeadersCollectionIterator
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2HttpHeadersCollectionIterator
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2HttpHeadersCollectionIterator[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2HttpHeadersCollectionIterator";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("ADF264EE-D980-5F48-A60E-8705DE046608"), exclusiveto] */
                    MIDL_INTERFACE("ADF264EE-D980-5F48-A60E-8705DE046608")
                    ICoreWebView2HttpHeadersCollectionIterator : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2HttpHeadersCollectionIterator=_uuidof(ICoreWebView2HttpHeadersCollectionIterator);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2HttpRequestHeaders
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2HttpRequestHeaders
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2HttpRequestHeaders[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2HttpRequestHeaders";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("DC2226C7-3515-55BB-BCB2-57B78F86B91D"), exclusiveto] */
                    MIDL_INTERFACE("DC2226C7-3515-55BB-BCB2-57B78F86B91D")
                    ICoreWebView2HttpRequestHeaders : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetHeader(
                            /* [in] */HSTRING name,
                            /* [retval, out] */HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHeaders(
                            /* [in] */HSTRING name,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpHeadersCollectionIterator * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Contains(
                            /* [in] */HSTRING name,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetHeader(
                            /* [in] */HSTRING name,
                            /* [in] */HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveHeader(
                            /* [in] */HSTRING name
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2HttpRequestHeaders=_uuidof(ICoreWebView2HttpRequestHeaders);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2HttpResponseHeaders
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2HttpResponseHeaders
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2HttpResponseHeaders[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2HttpResponseHeaders";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("F3D383E9-747F-5574-8662-9A6B920CECD4"), exclusiveto] */
                    MIDL_INTERFACE("F3D383E9-747F-5574-8662-9A6B920CECD4")
                    ICoreWebView2HttpResponseHeaders : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE AppendHeader(
                            /* [in] */HSTRING name,
                            /* [in] */HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Contains(
                            /* [in] */HSTRING name,
                            /* [retval, out] */::boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHeader(
                            /* [in] */HSTRING name,
                            /* [retval, out] */HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHeaders(
                            /* [in] */HSTRING name,
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpHeadersCollectionIterator * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2HttpResponseHeaders=_uuidof(ICoreWebView2HttpResponseHeaders);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2MoveFocusRequestedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusRequestedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2MoveFocusRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2MoveFocusRequestedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("2E29103B-ECDD-5C1D-B288-3F066D608919"), exclusiveto] */
                    MIDL_INTERFACE("2E29103B-ECDD-5C1D-B288-3F066D608919")
                    ICoreWebView2MoveFocusRequestedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2MoveFocusReason * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2MoveFocusRequestedEventArgs=_uuidof(ICoreWebView2MoveFocusRequestedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2NavigationCompletedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2NavigationCompletedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2NavigationCompletedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2NavigationCompletedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("4865E238-036A-5664-95A3-447EC44CF498"), exclusiveto] */
                    MIDL_INTERFACE("4865E238-036A-5664-95A3-447EC44CF498")
                    ICoreWebView2NavigationCompletedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSuccess(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebErrorStatus(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebErrorStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavigationId(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2NavigationCompletedEventArgs=_uuidof(ICoreWebView2NavigationCompletedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2NavigationStartingEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2NavigationStartingEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2NavigationStartingEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2NavigationStartingEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("548D23D3-FEA3-5616-BD05-AE08066C86D3"), exclusiveto] */
                    MIDL_INTERFACE("548D23D3-FEA3-5616-BD05-AE08066C86D3")
                    ICoreWebView2NavigationStartingEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUserInitiated(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRedirected(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestHeaders(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpRequestHeaders * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cancel(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Cancel(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavigationId(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2NavigationStartingEventArgs=_uuidof(ICoreWebView2NavigationStartingEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2NewWindowRequestedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2NewWindowRequestedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2NewWindowRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2NewWindowRequestedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("E6E013BA-AEC8-532E-9AC9-1590AF7B25EC"), exclusiveto] */
                    MIDL_INTERFACE("E6E013BA-AEC8-532E-9AC9-1590AF7B25EC")
                    ICoreWebView2NewWindowRequestedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewWindow(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2 * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NewWindow(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUserInitiated(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowFeatures(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WindowFeatures * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */ABI::Windows::Foundation::IDeferral * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2NewWindowRequestedEventArgs=_uuidof(ICoreWebView2NewWindowRequestedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2PermissionRequestedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2PermissionRequestedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2PermissionRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2PermissionRequestedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("118BDD9B-CEF1-5910-929E-C1A321328239"), exclusiveto] */
                    MIDL_INTERFACE("118BDD9B-CEF1-5910-929E-C1A321328239")
                    ICoreWebView2PermissionRequestedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PermissionKind(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2PermissionKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsUserInitiated(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2PermissionState * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_State(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2PermissionState value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */ABI::Windows::Foundation::IDeferral * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2PermissionRequestedEventArgs=_uuidof(ICoreWebView2PermissionRequestedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2PointerInfo
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2PointerInfo
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2PointerInfo[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2PointerInfo";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("C3860E0D-C018-5A84-BC06-9F8F7B275DFF"), exclusiveto] */
                    MIDL_INTERFACE("C3860E0D-C018-5A84-BC06-9F8F7B275DFF")
                    ICoreWebView2PointerInfo : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerKind(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerKind(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerId(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerId(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameId(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FrameId(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerFlags(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerFlags(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceRect(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerDeviceRect(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayRect(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayRect(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelLocation(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PixelLocation(
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HimetricLocation(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HimetricLocation(
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelLocationRaw(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PixelLocationRaw(
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HimetricLocationRaw(
                            /* [retval, out] */ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HimetricLocationRaw(
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Time(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Time(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HistoryCount(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HistoryCount(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputData(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InputData(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStates(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyStates(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PerformanceCount(
                            /* [retval, out] */UINT64 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PerformanceCount(
                            /* [in] */UINT64 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ButtonChangeKind(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ButtonChangeKind(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenFlags(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenFlags(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenMask(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenMask(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenPressure(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenPressure(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenRotation(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenRotation(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenTiltX(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenTiltX(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenTiltY(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenTiltY(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchFlags(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TouchFlags(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchMask(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TouchMask(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchContact(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TouchContact(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchContactRaw(
                            /* [retval, out] */ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TouchContactRaw(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchOrientation(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TouchOrientation(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchPressure(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TouchPressure(
                            /* [in] */UINT32 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2PointerInfo=_uuidof(ICoreWebView2PointerInfo);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ProcessFailedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ProcessFailedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ProcessFailedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("25A8F8C9-D944-539D-AFA3-24172B48EF47"), exclusiveto] */
                    MIDL_INTERFACE("25A8F8C9-D944-539D-AFA3-24172B48EF47")
                    ICoreWebView2ProcessFailedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProcessFailedKind(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2ProcessFailedKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2ProcessFailedEventArgs=_uuidof(ICoreWebView2ProcessFailedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ScriptDialogOpeningEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogOpeningEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ScriptDialogOpeningEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ScriptDialogOpeningEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("A4315212-C7EB-568A-86E4-C61E31BA6CDA"), exclusiveto] */
                    MIDL_INTERFACE("A4315212-C7EB-568A-86E4-C61E31BA6CDA")
                    ICoreWebView2ScriptDialogOpeningEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2ScriptDialogKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultText(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResultText(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ResultText(
                            /* [in] */HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Accept(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */ABI::Windows::Foundation::IDeferral * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2ScriptDialogOpeningEventArgs=_uuidof(ICoreWebView2ScriptDialogOpeningEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2Settings
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Settings
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2Settings[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2Settings";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("003B325E-74CD-52DD-8024-EBB8BE38E48E"), exclusiveto] */
                    MIDL_INTERFACE("003B325E-74CD-52DD-8024-EBB8BE38E48E")
                    ICoreWebView2Settings : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsScriptEnabled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsScriptEnabled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsWebMessageEnabled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsWebMessageEnabled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreDefaultScriptDialogsEnabled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreDefaultScriptDialogsEnabled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsStatusBarEnabled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsStatusBarEnabled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreDevToolsEnabled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreDevToolsEnabled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreDefaultContextMenusEnabled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreDefaultContextMenusEnabled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreHostObjectsAllowed(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreHostObjectsAllowed(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsZoomControlEnabled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsZoomControlEnabled(
                            /* [in] */::boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBuiltInErrorPageEnabled(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsBuiltInErrorPageEnabled(
                            /* [in] */::boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2Settings=_uuidof(ICoreWebView2Settings);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2SourceChangedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2SourceChangedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2SourceChangedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2SourceChangedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("CA437B2C-6A18-5552-B749-B198F8CC34D9"), exclusiveto] */
                    MIDL_INTERFACE("CA437B2C-6A18-5552-B749-B198F8CC34D9")
                    ICoreWebView2SourceChangedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsNewDocument(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2SourceChangedEventArgs=_uuidof(ICoreWebView2SourceChangedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebMessageReceivedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebMessageReceivedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebMessageReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebMessageReceivedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("EB066159-B725-5D5B-ADC8-F5D7B9290304"), exclusiveto] */
                    MIDL_INTERFACE("EB066159-B725-5D5B-ADC8-F5D7B9290304")
                    ICoreWebView2WebMessageReceivedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebMessageAsJson(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryGetWebMessageAsString(
                            /* [retval, out] */HSTRING * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2WebMessageReceivedEventArgs=_uuidof(ICoreWebView2WebMessageReceivedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequest
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequest
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceRequest[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequest";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("5C742259-67D2-5DF2-8382-0F201B4D7197"), exclusiveto] */
                    MIDL_INTERFACE("5C742259-67D2-5DF2-8382-0F201B4D7197")
                    ICoreWebView2WebResourceRequest : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                            /* [in] */HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Method(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Method(
                            /* [in] */HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                            /* [retval, out] */ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                            /* [in] */ABI::Windows::Storage::Streams::IRandomAccessStream * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headers(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpRequestHeaders * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2WebResourceRequest=_uuidof(ICoreWebView2WebResourceRequest);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequestedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequestedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequestedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("577F1FC4-C943-54A9-9700-BD469B48BD41"), exclusiveto] */
                    MIDL_INTERFACE("577F1FC4-C943-54A9-9700-BD469B48BD41")
                    ICoreWebView2WebResourceRequestedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequest * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Response(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponse * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Response(
                            /* [in] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponse * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceContext(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::CoreWebView2WebResourceContext * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */ABI::Windows::Foundation::IDeferral * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2WebResourceRequestedEventArgs=_uuidof(ICoreWebView2WebResourceRequestedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponse
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponse
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceResponse[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponse";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("14621923-E485-5F44-8F5D-BD4243BC398F"), exclusiveto] */
                    MIDL_INTERFACE("14621923-E485-5F44-8F5D-BD4243BC398F")
                    ICoreWebView2WebResourceResponse : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                            /* [retval, out] */ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                            /* [in] */ABI::Windows::Storage::Streams::IRandomAccessStream * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headers(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpResponseHeaders * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StatusCode(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StatusCode(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReasonPhrase(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReasonPhrase(
                            /* [in] */HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2WebResourceResponse=_uuidof(ICoreWebView2WebResourceResponse);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseReceivedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseReceivedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceResponseReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseReceivedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("12424671-9711-54F4-BCDF-5F307ADD6EC2"), exclusiveto] */
                    MIDL_INTERFACE("12424671-9711-54F4-BCDF-5F307ADD6EC2")
                    ICoreWebView2WebResourceResponseReceivedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceRequest * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Response(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2WebResourceResponseView * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2WebResourceResponseReceivedEventArgs=_uuidof(ICoreWebView2WebResourceResponseReceivedEventArgs);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseView
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseView
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceResponseView[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseView";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("33EE060B-B578-5698-B541-FEF87FE7FE72"), exclusiveto] */
                    MIDL_INTERFACE("33EE060B-B578-5698-B541-FEF87FE7FE72")
                    ICoreWebView2WebResourceResponseView : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headers(
                            /* [retval, out] */ABI::Microsoft::Web::WebView2::Core::ICoreWebView2HttpResponseHeaders * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StatusCode(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReasonPhrase(
                            /* [retval, out] */HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetContentAsync(
                            /* [retval, out] */__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2WebResourceResponseView=_uuidof(ICoreWebView2WebResourceResponseView);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WindowFeatures
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WindowFeatures
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WindowFeatures[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WindowFeatures";
namespace ABI {
    namespace Microsoft {
        namespace Web {
            namespace WebView2 {
                namespace Core {
                    /* [object, version, uuid("D8607388-260B-5EC4-845F-D90A3239D3E6"), exclusiveto] */
                    MIDL_INTERFACE("D8607388-260B-5EC4-845F-D90A3239D3E6")
                    ICoreWebView2WindowFeatures : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasPosition(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasSize(
                            /* [retval, out] */::boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Left(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Top(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Height(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Width(
                            /* [retval, out] */UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShouldDisplayMenuBar(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShouldDisplayStatus(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShouldDisplayToolbar(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShouldDisplayScrollBars(
                            /* [retval, out] */INT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreWebView2WindowFeatures=_uuidof(ICoreWebView2WindowFeatures);
                    
                } /* Core */
            } /* WebView2 */
        } /* Web */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2 ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2[] = L"Microsoft.Web.WebView2.Core.CoreWebView2";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2AcceleratorKeyPressedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2AcceleratorKeyPressedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2AcceleratorKeyPressedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2AcceleratorKeyPressedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2AcceleratorKeyPressedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2AcceleratorKeyPressedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2CompositionController
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2CompositionController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CompositionController_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CompositionController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2CompositionController[] = L"Microsoft.Web.WebView2.Core.CoreWebView2CompositionController";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2CompositionControllerInterop
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2CompositionControllerInterop ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CompositionControllerInterop_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CompositionControllerInterop_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2CompositionControllerInterop[] = L"Microsoft.Web.WebView2.Core.CoreWebView2CompositionControllerInterop";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2ContentLoadingEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2ContentLoadingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ContentLoadingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ContentLoadingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2ContentLoadingEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2ContentLoadingEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2Controller
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2Controller ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Controller_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Controller_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2Controller[] = L"Microsoft.Web.WebView2.Core.CoreWebView2Controller";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2ControllerWindowReference
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ControllerWindowReference_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ControllerWindowReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2ControllerWindowReference[] = L"Microsoft.Web.WebView2.Core.CoreWebView2ControllerWindowReference";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2Cookie
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2Cookie ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Cookie_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Cookie_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2Cookie[] = L"Microsoft.Web.WebView2.Core.CoreWebView2Cookie";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2CookieManager
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2CookieManager ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CookieManager_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CookieManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2CookieManager[] = L"Microsoft.Web.WebView2.Core.CoreWebView2CookieManager";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2DOMContentLoadedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2DOMContentLoadedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DOMContentLoadedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DOMContentLoadedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2DOMContentLoadedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2DOMContentLoadedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceivedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceivedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceiver
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceiver ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceiver_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceiver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceiver[] = L"Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceiver";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2Environment
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2Environment ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Environment_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Environment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2Environment[] = L"Microsoft.Web.WebView2.Core.CoreWebView2Environment";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentInterop
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentInterop ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentInterop_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentInterop_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentInterop[] = L"Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentInterop";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentOptions
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentOptions[] = L"Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentOptions";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2HttpHeadersCollectionIterator
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2HttpHeadersCollectionIterator ** Default Interface **
 *    Windows.Foundation.Collections.IIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpHeadersCollectionIterator_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpHeadersCollectionIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2HttpHeadersCollectionIterator[] = L"Microsoft.Web.WebView2.Core.CoreWebView2HttpHeadersCollectionIterator";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2HttpRequestHeaders
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2HttpRequestHeaders ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpRequestHeaders_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpRequestHeaders_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2HttpRequestHeaders[] = L"Microsoft.Web.WebView2.Core.CoreWebView2HttpRequestHeaders";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2HttpResponseHeaders
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2HttpResponseHeaders ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpResponseHeaders_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpResponseHeaders_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2HttpResponseHeaders[] = L"Microsoft.Web.WebView2.Core.CoreWebView2HttpResponseHeaders";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusRequestedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2MoveFocusRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2MoveFocusRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2MoveFocusRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2MoveFocusRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusRequestedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2NavigationCompletedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2NavigationCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NavigationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NavigationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2NavigationCompletedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2NavigationCompletedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2NavigationStartingEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2NavigationStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NavigationStartingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NavigationStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2NavigationStartingEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2NavigationStartingEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2NewWindowRequestedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2NewWindowRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NewWindowRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NewWindowRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2NewWindowRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2NewWindowRequestedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2PermissionRequestedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2PermissionRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2PermissionRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2PermissionRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2PermissionRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2PermissionRequestedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2PointerInfo
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2PointerInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2PointerInfo_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2PointerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2PointerInfo[] = L"Microsoft.Web.WebView2.Core.CoreWebView2PointerInfo";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2ProcessFailedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ProcessFailedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ProcessFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2ProcessFailedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogOpeningEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2ScriptDialogOpeningEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ScriptDialogOpeningEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ScriptDialogOpeningEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2ScriptDialogOpeningEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogOpeningEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2Settings
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2Settings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Settings_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Settings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2Settings[] = L"Microsoft.Web.WebView2.Core.CoreWebView2Settings";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2SourceChangedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2SourceChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2SourceChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2SourceChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2SourceChangedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2SourceChangedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebMessageReceivedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebMessageReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebMessageReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebMessageReceivedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequest
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequest_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequest[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequest";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequestedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequestedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponse
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponse ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponse_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponse[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponse";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseReceivedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseReceivedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseView
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseView ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseView_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseView[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseView";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WindowFeatures
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WindowFeatures ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WindowFeatures_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WindowFeatures_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WindowFeatures[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WindowFeatures";
#endif





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures;

#endif // ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController;

typedef struct __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionControllerVtbl;

interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ControllerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ControllerVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller;

typedef struct __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ControllerVtbl;

interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment;

typedef struct __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2EnvironmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2EnvironmentVtbl;

interface __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2EnvironmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment;

typedef struct __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2EnvironmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * This, /* [retval][out] */ __RPC__out __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2EnvironmentVtbl;

interface __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment
{
    CONST_VTBL struct __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2EnvironmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__




#if !defined(____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable;

typedef struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * sender,/* [in] */ __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectableVtbl;

interface __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;

interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;





typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;







#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreCursor __x_ABI_CWindows_CUI_CCore_CICoreCursor;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreCursor_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreWindow_FWD_DEFINED__






typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2BoundsMode __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2BoundsMode;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CapturePreviewImageFormat __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CapturePreviewImageFormat;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CookieSameSiteKind __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CookieSameSiteKind;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2HostResourceAccessKind __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2HostResourceAccessKind;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2KeyEventKind __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2KeyEventKind;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MouseEventKind __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MouseEventKind;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MouseEventVirtualKeys __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MouseEventVirtualKeys;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MoveFocusReason __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MoveFocusReason;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionKind __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionKind;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionState __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionState;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PointerEventKind __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PointerEventKind;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2ProcessFailedKind __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2ProcessFailedKind;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2ScriptDialogKind __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2ScriptDialogKind;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebErrorStatus __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebErrorStatus;


typedef enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebResourceContext __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebResourceContext;


typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PhysicalKeyStatus __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PhysicalKeyStatus;




















































































/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2BoundsMode
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2BoundsMode
{
    CoreWebView2BoundsMode_UseRawPixels = 0,
    CoreWebView2BoundsMode_UseRasterizationScale = 1,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2CapturePreviewImageFormat
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CapturePreviewImageFormat
{
    CoreWebView2CapturePreviewImageFormat_Png = 0,
    CoreWebView2CapturePreviewImageFormat_Jpeg = 1,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2CookieSameSiteKind
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CookieSameSiteKind
{
    CoreWebView2CookieSameSiteKind_None = 0,
    CoreWebView2CookieSameSiteKind_Lax = 1,
    CoreWebView2CookieSameSiteKind_Strict = 2,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2HostResourceAccessKind
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2HostResourceAccessKind
{
    CoreWebView2HostResourceAccessKind_Deny = 0,
    CoreWebView2HostResourceAccessKind_Allow = 1,
    CoreWebView2HostResourceAccessKind_DenyCors = 2,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2KeyEventKind
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2KeyEventKind
{
    CoreWebView2KeyEventKind_KeyDown = 0,
    CoreWebView2KeyEventKind_KeyUp = 1,
    CoreWebView2KeyEventKind_SystemKeyDown = 2,
    CoreWebView2KeyEventKind_SystemKeyUp = 3,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2MouseEventKind
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MouseEventKind
{
    CoreWebView2MouseEventKind_HorizontalWheel = 526,
    CoreWebView2MouseEventKind_LeftButtonDoubleClick = 515,
    CoreWebView2MouseEventKind_LeftButtonDown = 513,
    CoreWebView2MouseEventKind_LeftButtonUp = 514,
    CoreWebView2MouseEventKind_Leave = 675,
    CoreWebView2MouseEventKind_MiddleButtonDoubleClick = 521,
    CoreWebView2MouseEventKind_MiddleButtonDown = 519,
    CoreWebView2MouseEventKind_MiddleButtonUp = 520,
    CoreWebView2MouseEventKind_Move = 512,
    CoreWebView2MouseEventKind_RightButtonDoubleClick = 518,
    CoreWebView2MouseEventKind_RightButtonDown = 516,
    CoreWebView2MouseEventKind_RightButtonUp = 517,
    CoreWebView2MouseEventKind_Wheel = 522,
    CoreWebView2MouseEventKind_XButtonDoubleClick = 525,
    CoreWebView2MouseEventKind_XButtonDown = 523,
    CoreWebView2MouseEventKind_XButtonUp = 524,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2MouseEventVirtualKeys
 *
 */

/* [v1_enum, version, flags] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MouseEventVirtualKeys
{
    CoreWebView2MouseEventVirtualKeys_None = 0,
    CoreWebView2MouseEventVirtualKeys_LeftButton = 0x1,
    CoreWebView2MouseEventVirtualKeys_RightButton = 0x2,
    CoreWebView2MouseEventVirtualKeys_Shift = 0x4,
    CoreWebView2MouseEventVirtualKeys_Control = 0x8,
    CoreWebView2MouseEventVirtualKeys_MiddleButton = 0x10,
    CoreWebView2MouseEventVirtualKeys_XButton1 = 0x20,
    CoreWebView2MouseEventVirtualKeys_XButton2 = 0x40,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusReason
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MoveFocusReason
{
    CoreWebView2MoveFocusReason_Programmatic = 0,
    CoreWebView2MoveFocusReason_Next = 1,
    CoreWebView2MoveFocusReason_Previous = 2,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2PermissionKind
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionKind
{
    CoreWebView2PermissionKind_UnknownPermission = 0,
    CoreWebView2PermissionKind_Microphone = 1,
    CoreWebView2PermissionKind_Camera = 2,
    CoreWebView2PermissionKind_Geolocation = 3,
    CoreWebView2PermissionKind_Notifications = 4,
    CoreWebView2PermissionKind_OtherSensors = 5,
    CoreWebView2PermissionKind_ClipboardRead = 6,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2PermissionState
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionState
{
    CoreWebView2PermissionState_Default = 0,
    CoreWebView2PermissionState_Allow = 1,
    CoreWebView2PermissionState_Deny = 2,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2PointerEventKind
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PointerEventKind
{
    CoreWebView2PointerEventKind_Activate = 587,
    CoreWebView2PointerEventKind_Down = 582,
    CoreWebView2PointerEventKind_Enter = 585,
    CoreWebView2PointerEventKind_Leave = 586,
    CoreWebView2PointerEventKind_Up = 583,
    CoreWebView2PointerEventKind_Update = 581,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedKind
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2ProcessFailedKind
{
    CoreWebView2ProcessFailedKind_BrowserProcessExited = 0,
    CoreWebView2ProcessFailedKind_RenderProcessExited = 1,
    CoreWebView2ProcessFailedKind_RenderProcessUnresponsive = 2,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogKind
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2ScriptDialogKind
{
    CoreWebView2ScriptDialogKind_Alert = 0,
    CoreWebView2ScriptDialogKind_Confirm = 1,
    CoreWebView2ScriptDialogKind_Prompt = 2,
    CoreWebView2ScriptDialogKind_Beforeunload = 3,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2WebErrorStatus
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebErrorStatus
{
    CoreWebView2WebErrorStatus_Unknown = 0,
    CoreWebView2WebErrorStatus_CertificateCommonNameIsIncorrect = 1,
    CoreWebView2WebErrorStatus_CertificateExpired = 2,
    CoreWebView2WebErrorStatus_ClientCertificateContainsErrors = 3,
    CoreWebView2WebErrorStatus_CertificateRevoked = 4,
    CoreWebView2WebErrorStatus_CertificateIsInvalid = 5,
    CoreWebView2WebErrorStatus_ServerUnreachable = 6,
    CoreWebView2WebErrorStatus_Timeout = 7,
    CoreWebView2WebErrorStatus_ErrorHttpInvalidServerResponse = 8,
    CoreWebView2WebErrorStatus_ConnectionAborted = 9,
    CoreWebView2WebErrorStatus_ConnectionReset = 10,
    CoreWebView2WebErrorStatus_Disconnected = 11,
    CoreWebView2WebErrorStatus_CannotConnect = 12,
    CoreWebView2WebErrorStatus_HostNameNotResolved = 13,
    CoreWebView2WebErrorStatus_OperationCanceled = 14,
    CoreWebView2WebErrorStatus_RedirectFailed = 15,
    CoreWebView2WebErrorStatus_UnexpectedError = 16,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2WebResourceContext
 *
 */

/* [v1_enum, version] */
enum __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebResourceContext
{
    CoreWebView2WebResourceContext_All = 0,
    CoreWebView2WebResourceContext_Document = 1,
    CoreWebView2WebResourceContext_Stylesheet = 2,
    CoreWebView2WebResourceContext_Image = 3,
    CoreWebView2WebResourceContext_Media = 4,
    CoreWebView2WebResourceContext_Font = 5,
    CoreWebView2WebResourceContext_Script = 6,
    CoreWebView2WebResourceContext_XmlHttpRequest = 7,
    CoreWebView2WebResourceContext_Fetch = 8,
    CoreWebView2WebResourceContext_TextTrack = 9,
    CoreWebView2WebResourceContext_EventSource = 10,
    CoreWebView2WebResourceContext_Websocket = 11,
    CoreWebView2WebResourceContext_Manifest = 12,
    CoreWebView2WebResourceContext_SignedExchange = 13,
    CoreWebView2WebResourceContext_Ping = 14,
    CoreWebView2WebResourceContext_CspViolationReport = 15,
    CoreWebView2WebResourceContext_Other = 16,
};


/*
 *
 * Struct Microsoft.Web.WebView2.Core.CoreWebView2PhysicalKeyStatus
 *
 */

/* [version] */
struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PhysicalKeyStatus
{
    UINT32 RepeatCount;
    UINT32 ScanCode;
    INT32 IsExtendedKey;
    INT32 IsMenuKeyDown;
    INT32 WasKeyDown;
    INT32 IsKeyReleased;
};


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2";
/* [object, version, uuid("3E1AB759-8CB8-5581-8CF7-2E1966F52978"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Settings )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrowserProcessId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanGoBack )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanGoForward )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentTitle )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContainsFullScreenElement )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NavigationStarting )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NavigationStarting )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContentLoading )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ContentLoadingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContentLoading )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SourceChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2SourceChangedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SourceChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HistoryChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HistoryChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NavigationCompleted )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NavigationCompleted )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FrameNavigationStarting )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationStartingEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FrameNavigationStarting )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FrameNavigationCompleted )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NavigationCompletedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FrameNavigationCompleted )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ScriptDialogOpening )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ScriptDialogOpeningEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ScriptDialogOpening )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PermissionRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2PermissionRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PermissionRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ProcessFailed )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2ProcessFailedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ProcessFailed )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WebMessageReceived )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebMessageReceivedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WebMessageReceived )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NewWindowRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2NewWindowRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NewWindowRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DocumentTitleChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DocumentTitleChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContainsFullScreenElementChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContainsFullScreenElementChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WebResourceRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WebResourceRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WindowCloseRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WindowCloseRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Navigate )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING uri
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateToString )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING htmlContent
        );
    HRESULT ( STDMETHODCALLTYPE *AddScriptToExecuteOnDocumentCreatedAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING javaScript,
        /* [retval, out] */__FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveScriptToExecuteOnDocumentCreated )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING id
        );
    HRESULT ( STDMETHODCALLTYPE *ExecuteScriptAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING javaScript,
        /* [retval, out] */__FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CapturePreviewAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CapturePreviewImageFormat imageFormat,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * imageStream,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Reload )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *PostWebMessageAsJson )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING webMessageAsJson
        );
    HRESULT ( STDMETHODCALLTYPE *PostWebMessageAsString )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING webMessageAsString
        );
    HRESULT ( STDMETHODCALLTYPE *CallDevToolsProtocolMethodAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING methodName,
        /* [in] */HSTRING parametersAsJson,
        /* [retval, out] */__FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GoBack )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *GoForward )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDevToolsProtocolEventReceiver )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING eventName,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *AddHostObjectToScript )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING name,
        /* [in] */IInspectable * rawObject
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveHostObjectFromScript )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING name
        );
    HRESULT ( STDMETHODCALLTYPE *OpenDevToolsWindow )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *AddWebResourceRequestedFilter )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING uri,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebResourceContext ResourceContext
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveWebResourceRequestedFilter )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING uri,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebResourceContext ResourceContext
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CookieManager )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Environment )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WebResourceResponseReceived )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2WebResourceResponseReceivedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WebResourceResponseReceived )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DOMContentLoaded )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DOMContentLoadedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DOMContentLoaded )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateWithWebResourceRequest )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * Request
        );
    HRESULT ( STDMETHODCALLTYPE *SetVirtualHostNameToFolderMapping )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING hostName,
        /* [in] */HSTRING folderPath,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2HostResourceAccessKind accessKind
        );
    HRESULT ( STDMETHODCALLTYPE *ClearVirtualHostNameToFolderMapping )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * This,
        /* [in] */HSTRING hostName
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Vtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_Settings(This,value) \
    ( (This)->lpVtbl->get_Settings(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_BrowserProcessId(This,value) \
    ( (This)->lpVtbl->get_BrowserProcessId(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_CanGoBack(This,value) \
    ( (This)->lpVtbl->get_CanGoBack(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_CanGoForward(This,value) \
    ( (This)->lpVtbl->get_CanGoForward(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_DocumentTitle(This,value) \
    ( (This)->lpVtbl->get_DocumentTitle(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_ContainsFullScreenElement(This,value) \
    ( (This)->lpVtbl->get_ContainsFullScreenElement(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_NavigationStarting(This,handler,token) \
    ( (This)->lpVtbl->add_NavigationStarting(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_NavigationStarting(This,token) \
    ( (This)->lpVtbl->remove_NavigationStarting(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_ContentLoading(This,handler,token) \
    ( (This)->lpVtbl->add_ContentLoading(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_ContentLoading(This,token) \
    ( (This)->lpVtbl->remove_ContentLoading(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_SourceChanged(This,handler,token) \
    ( (This)->lpVtbl->add_SourceChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_SourceChanged(This,token) \
    ( (This)->lpVtbl->remove_SourceChanged(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_HistoryChanged(This,handler,token) \
    ( (This)->lpVtbl->add_HistoryChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_HistoryChanged(This,token) \
    ( (This)->lpVtbl->remove_HistoryChanged(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_NavigationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_NavigationCompleted(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_NavigationCompleted(This,token) \
    ( (This)->lpVtbl->remove_NavigationCompleted(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_FrameNavigationStarting(This,handler,token) \
    ( (This)->lpVtbl->add_FrameNavigationStarting(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_FrameNavigationStarting(This,token) \
    ( (This)->lpVtbl->remove_FrameNavigationStarting(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_FrameNavigationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_FrameNavigationCompleted(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_FrameNavigationCompleted(This,token) \
    ( (This)->lpVtbl->remove_FrameNavigationCompleted(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_ScriptDialogOpening(This,handler,token) \
    ( (This)->lpVtbl->add_ScriptDialogOpening(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_ScriptDialogOpening(This,token) \
    ( (This)->lpVtbl->remove_ScriptDialogOpening(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_PermissionRequested(This,handler,token) \
    ( (This)->lpVtbl->add_PermissionRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_PermissionRequested(This,token) \
    ( (This)->lpVtbl->remove_PermissionRequested(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_ProcessFailed(This,handler,token) \
    ( (This)->lpVtbl->add_ProcessFailed(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_ProcessFailed(This,token) \
    ( (This)->lpVtbl->remove_ProcessFailed(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_WebMessageReceived(This,handler,token) \
    ( (This)->lpVtbl->add_WebMessageReceived(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_WebMessageReceived(This,token) \
    ( (This)->lpVtbl->remove_WebMessageReceived(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_NewWindowRequested(This,handler,token) \
    ( (This)->lpVtbl->add_NewWindowRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_NewWindowRequested(This,token) \
    ( (This)->lpVtbl->remove_NewWindowRequested(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_DocumentTitleChanged(This,handler,token) \
    ( (This)->lpVtbl->add_DocumentTitleChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_DocumentTitleChanged(This,token) \
    ( (This)->lpVtbl->remove_DocumentTitleChanged(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_ContainsFullScreenElementChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ContainsFullScreenElementChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_ContainsFullScreenElementChanged(This,token) \
    ( (This)->lpVtbl->remove_ContainsFullScreenElementChanged(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_WebResourceRequested(This,handler,token) \
    ( (This)->lpVtbl->add_WebResourceRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_WebResourceRequested(This,token) \
    ( (This)->lpVtbl->remove_WebResourceRequested(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_WindowCloseRequested(This,handler,token) \
    ( (This)->lpVtbl->add_WindowCloseRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_WindowCloseRequested(This,token) \
    ( (This)->lpVtbl->remove_WindowCloseRequested(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_Navigate(This,uri) \
    ( (This)->lpVtbl->Navigate(This,uri) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_NavigateToString(This,htmlContent) \
    ( (This)->lpVtbl->NavigateToString(This,htmlContent) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_AddScriptToExecuteOnDocumentCreatedAsync(This,javaScript,operation) \
    ( (This)->lpVtbl->AddScriptToExecuteOnDocumentCreatedAsync(This,javaScript,operation) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_RemoveScriptToExecuteOnDocumentCreated(This,id) \
    ( (This)->lpVtbl->RemoveScriptToExecuteOnDocumentCreated(This,id) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_ExecuteScriptAsync(This,javaScript,operation) \
    ( (This)->lpVtbl->ExecuteScriptAsync(This,javaScript,operation) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_CapturePreviewAsync(This,imageFormat,imageStream,operation) \
    ( (This)->lpVtbl->CapturePreviewAsync(This,imageFormat,imageStream,operation) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_Reload(This) \
    ( (This)->lpVtbl->Reload(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_PostWebMessageAsJson(This,webMessageAsJson) \
    ( (This)->lpVtbl->PostWebMessageAsJson(This,webMessageAsJson) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_PostWebMessageAsString(This,webMessageAsString) \
    ( (This)->lpVtbl->PostWebMessageAsString(This,webMessageAsString) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_CallDevToolsProtocolMethodAsync(This,methodName,parametersAsJson,operation) \
    ( (This)->lpVtbl->CallDevToolsProtocolMethodAsync(This,methodName,parametersAsJson,operation) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_GoBack(This) \
    ( (This)->lpVtbl->GoBack(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_GoForward(This) \
    ( (This)->lpVtbl->GoForward(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_GetDevToolsProtocolEventReceiver(This,eventName,result) \
    ( (This)->lpVtbl->GetDevToolsProtocolEventReceiver(This,eventName,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_AddHostObjectToScript(This,name,rawObject) \
    ( (This)->lpVtbl->AddHostObjectToScript(This,name,rawObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_RemoveHostObjectFromScript(This,name) \
    ( (This)->lpVtbl->RemoveHostObjectFromScript(This,name) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_OpenDevToolsWindow(This) \
    ( (This)->lpVtbl->OpenDevToolsWindow(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_AddWebResourceRequestedFilter(This,uri,ResourceContext) \
    ( (This)->lpVtbl->AddWebResourceRequestedFilter(This,uri,ResourceContext) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_RemoveWebResourceRequestedFilter(This,uri,ResourceContext) \
    ( (This)->lpVtbl->RemoveWebResourceRequestedFilter(This,uri,ResourceContext) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_CookieManager(This,value) \
    ( (This)->lpVtbl->get_CookieManager(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_get_Environment(This,value) \
    ( (This)->lpVtbl->get_Environment(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_WebResourceResponseReceived(This,handler,token) \
    ( (This)->lpVtbl->add_WebResourceResponseReceived(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_WebResourceResponseReceived(This,token) \
    ( (This)->lpVtbl->remove_WebResourceResponseReceived(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_add_DOMContentLoaded(This,handler,token) \
    ( (This)->lpVtbl->add_DOMContentLoaded(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_remove_DOMContentLoaded(This,token) \
    ( (This)->lpVtbl->remove_DOMContentLoaded(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_NavigateWithWebResourceRequest(This,Request) \
    ( (This)->lpVtbl->NavigateWithWebResourceRequest(This,Request) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_SetVirtualHostNameToFolderMapping(This,hostName,folderPath,accessKind) \
    ( (This)->lpVtbl->SetVirtualHostNameToFolderMapping(This,hostName,folderPath,accessKind) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_ClearVirtualHostNameToFolderMapping(This,hostName) \
    ( (This)->lpVtbl->ClearVirtualHostNameToFolderMapping(This,hostName) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2AcceleratorKeyPressedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2AcceleratorKeyPressedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2AcceleratorKeyPressedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2AcceleratorKeyPressedEventArgs";
/* [object, version, uuid("41A56100-92A5-59D1-9E71-9222E33AE38B"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyEventKind )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2KeyEventKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VirtualKey )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyEventLParam )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
        /* [retval, out] */INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhysicalKeyStatus )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PhysicalKeyStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_get_KeyEventKind(This,value) \
    ( (This)->lpVtbl->get_KeyEventKind(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_get_VirtualKey(This,value) \
    ( (This)->lpVtbl->get_VirtualKey(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_get_KeyEventLParam(This,value) \
    ( (This)->lpVtbl->get_KeyEventLParam(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_get_PhysicalKeyStatus(This,value) \
    ( (This)->lpVtbl->get_PhysicalKeyStatus(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2AcceleratorKeyPressedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2CompositionController
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2CompositionController
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2CompositionController[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2CompositionController";
/* [object, version, uuid("D5BEC4E0-8967-5DE7-B6E0-B8D54AB5DD09"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DragEnter )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * dataObject,
        /* [in] */UINT32 keyState,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint point,
        /* [retval, out] */UINT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *DragLeave )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This
        );
    HRESULT ( STDMETHODCALLTYPE *DragOver )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */UINT32 keyState,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint point,
        /* [retval, out] */UINT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *Drop )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * dataObject,
        /* [in] */UINT32 keyState,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint point,
        /* [retval, out] */UINT32 * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UIAProvider )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [retval, out] */IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RootVisualTarget )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [retval, out] */IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RootVisualTarget )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */IInspectable * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CursorChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CursorChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SendMouseInput )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MouseEventKind eventKind,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MouseEventVirtualKeys virtualKeys,
        /* [in] */UINT32 mouseData,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint point
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2PointerInfoFromPointerId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */UINT32 PointerId,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * ParentWindow,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 transform,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SendPointerInput )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PointerEventKind eventKind,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * pointerInfo
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cursor )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CCore_CICoreCursor * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_DragEnter(This,dataObject,keyState,point,result) \
    ( (This)->lpVtbl->DragEnter(This,dataObject,keyState,point,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_DragLeave(This) \
    ( (This)->lpVtbl->DragLeave(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_DragOver(This,keyState,point,result) \
    ( (This)->lpVtbl->DragOver(This,keyState,point,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_Drop(This,dataObject,keyState,point,result) \
    ( (This)->lpVtbl->Drop(This,dataObject,keyState,point,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_get_UIAProvider(This,value) \
    ( (This)->lpVtbl->get_UIAProvider(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_get_RootVisualTarget(This,value) \
    ( (This)->lpVtbl->get_RootVisualTarget(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_put_RootVisualTarget(This,value) \
    ( (This)->lpVtbl->put_RootVisualTarget(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_add_CursorChanged(This,handler,token) \
    ( (This)->lpVtbl->add_CursorChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_remove_CursorChanged(This,token) \
    ( (This)->lpVtbl->remove_CursorChanged(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_SendMouseInput(This,eventKind,virtualKeys,mouseData,point) \
    ( (This)->lpVtbl->SendMouseInput(This,eventKind,virtualKeys,mouseData,point) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_CreateCoreWebView2PointerInfoFromPointerId(This,PointerId,ParentWindow,transform,result) \
    ( (This)->lpVtbl->CreateCoreWebView2PointerInfoFromPointerId(This,PointerId,ParentWindow,transform,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_SendPointerInput(This,eventKind,pointerInfo) \
    ( (This)->lpVtbl->SendPointerInput(This,eventKind,pointerInfo) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_get_Cursor(This,value) \
    ( (This)->lpVtbl->get_Cursor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionController_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2CompositionControllerInterop
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2CompositionControllerInterop
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2CompositionControllerInterop[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2CompositionControllerInterop";
/* [object, version, uuid("1B939775-5D57-5FA6-B8BC-CC944E3078B6"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInteropVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UIAProvider )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This,
        /* [retval, out] */IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RootVisualTarget )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This,
        /* [retval, out] */IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RootVisualTarget )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop * This,
        /* [in] */IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInteropVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInteropVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_get_UIAProvider(This,value) \
    ( (This)->lpVtbl->get_UIAProvider(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_get_RootVisualTarget(This,value) \
    ( (This)->lpVtbl->get_RootVisualTarget(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_put_RootVisualTarget(This,value) \
    ( (This)->lpVtbl->put_RootVisualTarget(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CompositionControllerInterop_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ContentLoadingEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ContentLoadingEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ContentLoadingEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ContentLoadingEventArgs";
/* [object, version, uuid("6CF95373-946C-5DAE-9B3E-0FE23D5AA29F"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsErrorPage )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavigationId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs * This,
        /* [retval, out] */UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_get_IsErrorPage(This,value) \
    ( (This)->lpVtbl->get_IsErrorPage(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_get_NavigationId(This,value) \
    ( (This)->lpVtbl->get_NavigationId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ContentLoadingEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2Controller
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Controller
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2Controller[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2Controller";
/* [object, version, uuid("C601C246-2CB0-56B4-8264-CA03EDA7FB7D"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsVisible )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bounds )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ZoomFactor )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ZoomFactor )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CoreWebView2 )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ZoomFactorChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ZoomFactorChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MoveFocusRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2MoveFocusRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MoveFocusRequested )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AcceleratorKeyPressed )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2AcceleratorKeyPressedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AcceleratorKeyPressed )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetBoundsAndZoomFactor )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect Bounds,
        /* [in] */DOUBLE ZoomFactor
        );
    HRESULT ( STDMETHODCALLTYPE *MoveFocus )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MoveFocusReason reason
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyParentWindowPositionChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RasterizationScale )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RasterizationScale )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShouldDetectMonitorScaleChanges )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShouldDetectMonitorScaleChanges )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundsMode )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2BoundsMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BoundsMode )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2BoundsMode value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RasterizationScaleChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RasterizationScaleChanged )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_get_IsVisible(This,value) \
    ( (This)->lpVtbl->get_IsVisible(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_put_IsVisible(This,value) \
    ( (This)->lpVtbl->put_IsVisible(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_get_Bounds(This,value) \
    ( (This)->lpVtbl->get_Bounds(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_put_Bounds(This,value) \
    ( (This)->lpVtbl->put_Bounds(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_get_ZoomFactor(This,value) \
    ( (This)->lpVtbl->get_ZoomFactor(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_put_ZoomFactor(This,value) \
    ( (This)->lpVtbl->put_ZoomFactor(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_get_ParentWindow(This,value) \
    ( (This)->lpVtbl->get_ParentWindow(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_put_ParentWindow(This,value) \
    ( (This)->lpVtbl->put_ParentWindow(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_get_CoreWebView2(This,value) \
    ( (This)->lpVtbl->get_CoreWebView2(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_add_ZoomFactorChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ZoomFactorChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_remove_ZoomFactorChanged(This,token) \
    ( (This)->lpVtbl->remove_ZoomFactorChanged(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_add_MoveFocusRequested(This,handler,token) \
    ( (This)->lpVtbl->add_MoveFocusRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_remove_MoveFocusRequested(This,token) \
    ( (This)->lpVtbl->remove_MoveFocusRequested(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_add_GotFocus(This,handler,token) \
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_remove_GotFocus(This,token) \
    ( (This)->lpVtbl->remove_GotFocus(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_add_LostFocus(This,handler,token) \
    ( (This)->lpVtbl->add_LostFocus(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_remove_LostFocus(This,token) \
    ( (This)->lpVtbl->remove_LostFocus(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_add_AcceleratorKeyPressed(This,handler,token) \
    ( (This)->lpVtbl->add_AcceleratorKeyPressed(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_remove_AcceleratorKeyPressed(This,token) \
    ( (This)->lpVtbl->remove_AcceleratorKeyPressed(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_SetBoundsAndZoomFactor(This,Bounds,ZoomFactor) \
    ( (This)->lpVtbl->SetBoundsAndZoomFactor(This,Bounds,ZoomFactor) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_MoveFocus(This,reason) \
    ( (This)->lpVtbl->MoveFocus(This,reason) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_NotifyParentWindowPositionChanged(This) \
    ( (This)->lpVtbl->NotifyParentWindowPositionChanged(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_Close(This) \
    ( (This)->lpVtbl->Close(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_get_RasterizationScale(This,value) \
    ( (This)->lpVtbl->get_RasterizationScale(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_put_RasterizationScale(This,value) \
    ( (This)->lpVtbl->put_RasterizationScale(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_get_ShouldDetectMonitorScaleChanges(This,value) \
    ( (This)->lpVtbl->get_ShouldDetectMonitorScaleChanges(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_put_ShouldDetectMonitorScaleChanges(This,value) \
    ( (This)->lpVtbl->put_ShouldDetectMonitorScaleChanges(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_get_BoundsMode(This,value) \
    ( (This)->lpVtbl->get_BoundsMode(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_put_BoundsMode(This,value) \
    ( (This)->lpVtbl->put_BoundsMode(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_add_RasterizationScaleChanged(This,handler,token) \
    ( (This)->lpVtbl->add_RasterizationScaleChanged(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_remove_RasterizationScaleChanged(This,token) \
    ( (This)->lpVtbl->remove_RasterizationScaleChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Controller_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ControllerFactory
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Controller
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ControllerFactory[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ControllerFactory";
/* [object, version, uuid("270B2C5B-C3A9-53D8-A5CA-262EA9EA62E8"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactoryVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerFactory_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReference
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ControllerWindowReference
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ControllerWindowReference[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReference";
/* [object, version, uuid("0FEDDAD4-48A3-5CC4-9F61-E7ADFD1E9C76"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowHandle )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * This,
        /* [retval, out] */UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CoreWindow )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CCore_CICoreWindow * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_get_WindowHandle(This,value) \
    ( (This)->lpVtbl->get_WindowHandle(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_get_CoreWindow(This,value) \
    ( (This)->lpVtbl->get_CoreWindow(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReferenceStatics
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ControllerWindowReference
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ControllerWindowReferenceStatics[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReferenceStatics";
/* [object, version, uuid("DDF6EBF1-EBC6-5A34-9008-661C3A2EB767"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromWindowHandle )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics * This,
        /* [in] */UINT64 windowHandle,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromCoreWindow )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CICoreWindow * coreWindow,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStaticsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_CreateFromWindowHandle(This,windowHandle,result) \
    ( (This)->lpVtbl->CreateFromWindowHandle(This,windowHandle,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_CreateFromCoreWindow(This,coreWindow,result) \
    ( (This)->lpVtbl->CreateFromCoreWindow(This,coreWindow,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReferenceStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2Cookie
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Cookie
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2Cookie[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2Cookie";
/* [object, version, uuid("52F670FE-8CA2-5AAD-AEDB-25F7903B7038"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Domain )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Expires )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Expires )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsHttpOnly )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsHttpOnly )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SameSite )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CookieSameSiteKind * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SameSite )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2CookieSameSiteKind value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSecure )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsSecure )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSession )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_Domain(This,value) \
    ( (This)->lpVtbl->get_Domain(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_Path(This,value) \
    ( (This)->lpVtbl->get_Path(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_Expires(This,value) \
    ( (This)->lpVtbl->get_Expires(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_put_Expires(This,value) \
    ( (This)->lpVtbl->put_Expires(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_IsHttpOnly(This,value) \
    ( (This)->lpVtbl->get_IsHttpOnly(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_put_IsHttpOnly(This,value) \
    ( (This)->lpVtbl->put_IsHttpOnly(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_SameSite(This,value) \
    ( (This)->lpVtbl->get_SameSite(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_put_SameSite(This,value) \
    ( (This)->lpVtbl->put_SameSite(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_IsSecure(This,value) \
    ( (This)->lpVtbl->get_IsSecure(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_put_IsSecure(This,value) \
    ( (This)->lpVtbl->put_IsSecure(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_get_IsSession(This,value) \
    ( (This)->lpVtbl->get_IsSession(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2CookieManager
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2CookieManager
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2CookieManager[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2CookieManager";
/* [object, version, uuid("E4736DAC-2241-5AB3-85EF-47E8A1077DEF"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCookie )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
        /* [in] */HSTRING name,
        /* [in] */HSTRING value,
        /* [in] */HSTRING Domain,
        /* [in] */HSTRING Path,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCookieWithCookie )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * cookieParam,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AddOrUpdateCookie )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * cookie
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteCookie )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Cookie * cookie
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteCookies )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
        /* [in] */HSTRING name,
        /* [in] */HSTRING uri
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteCookiesWithDomainAndPath )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This,
        /* [in] */HSTRING name,
        /* [in] */HSTRING Domain,
        /* [in] */HSTRING Path
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAllCookies )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager * This
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManagerVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_CreateCookie(This,name,value,Domain,Path,result) \
    ( (This)->lpVtbl->CreateCookie(This,name,value,Domain,Path,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_CreateCookieWithCookie(This,cookieParam,result) \
    ( (This)->lpVtbl->CreateCookieWithCookie(This,cookieParam,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_AddOrUpdateCookie(This,cookie) \
    ( (This)->lpVtbl->AddOrUpdateCookie(This,cookie) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_DeleteCookie(This,cookie) \
    ( (This)->lpVtbl->DeleteCookie(This,cookie) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_DeleteCookies(This,name,uri) \
    ( (This)->lpVtbl->DeleteCookies(This,name,uri) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_DeleteCookiesWithDomainAndPath(This,name,Domain,Path) \
    ( (This)->lpVtbl->DeleteCookiesWithDomainAndPath(This,name,Domain,Path) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_DeleteAllCookies(This) \
    ( (This)->lpVtbl->DeleteAllCookies(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2CookieManager_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2DOMContentLoadedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2DOMContentLoadedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2DOMContentLoadedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2DOMContentLoadedEventArgs";
/* [object, version, uuid("C474D0A3-24AC-59FC-B78B-DA7562A6A052"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavigationId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs * This,
        /* [retval, out] */UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_get_NavigationId(This,value) \
    ( (This)->lpVtbl->get_NavigationId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DOMContentLoadedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceivedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceivedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2DevToolsProtocolEventReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceivedEventArgs";
/* [object, version, uuid("B6A4B41D-FD18-59FA-923A-C57555D960CE"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ParameterObjectAsJson )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_get_ParameterObjectAsJson(This,value) \
    ( (This)->lpVtbl->get_ParameterObjectAsJson(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceivedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceiver
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceiver
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2DevToolsProtocolEventReceiver[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceiver";
/* [object, version, uuid("B2A2BE79-65FC-5537-8715-3D92BF31090B"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DevToolsProtocolEventReceived )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2DevToolsProtocolEventReceivedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DevToolsProtocolEventReceived )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiverVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_add_DevToolsProtocolEventReceived(This,handler,token) \
    ( (This)->lpVtbl->add_DevToolsProtocolEventReceived(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_remove_DevToolsProtocolEventReceived(This,token) \
    ( (This)->lpVtbl->remove_DevToolsProtocolEventReceived(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2DevToolsProtocolEventReceiver_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2Environment
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Environment
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2Environment[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2Environment";
/* [object, version, uuid("CE0D6036-A775-5A99-A9C0-5742F0B3AF9C"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrowserVersionString )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [retval, out] */HSTRING * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NewBrowserVersionAvailable )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment_IInspectable * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NewBrowserVersionAvailable )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2ControllerAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * ParentWindow,
        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Controller * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWebResourceResponse )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * Content,
        /* [in] */INT32 StatusCode,
        /* [in] */HSTRING ReasonPhrase,
        /* [in] */HSTRING Headers,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWebResourceRequest )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [in] */HSTRING uri,
        /* [in] */HSTRING Method,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * postData,
        /* [in] */HSTRING Headers,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2CompositionControllerAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * ParentWindow,
        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2CompositionController * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2PointerInfo )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetProviderForHwnd )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * hwnd,
        /* [retval, out] */IInspectable * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_get_BrowserVersionString(This,value) \
    ( (This)->lpVtbl->get_BrowserVersionString(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_add_NewBrowserVersionAvailable(This,handler,token) \
    ( (This)->lpVtbl->add_NewBrowserVersionAvailable(This,handler,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_remove_NewBrowserVersionAvailable(This,token) \
    ( (This)->lpVtbl->remove_NewBrowserVersionAvailable(This,token) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_CreateCoreWebView2ControllerAsync(This,ParentWindow,operation) \
    ( (This)->lpVtbl->CreateCoreWebView2ControllerAsync(This,ParentWindow,operation) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_CreateWebResourceResponse(This,Content,StatusCode,ReasonPhrase,Headers,result) \
    ( (This)->lpVtbl->CreateWebResourceResponse(This,Content,StatusCode,ReasonPhrase,Headers,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_CreateWebResourceRequest(This,uri,Method,postData,Headers,result) \
    ( (This)->lpVtbl->CreateWebResourceRequest(This,uri,Method,postData,Headers,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_CreateCoreWebView2CompositionControllerAsync(This,ParentWindow,operation) \
    ( (This)->lpVtbl->CreateCoreWebView2CompositionControllerAsync(This,ParentWindow,operation) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_CreateCoreWebView2PointerInfo(This,result) \
    ( (This)->lpVtbl->CreateCoreWebView2PointerInfo(This,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_GetProviderForHwnd(This,hwnd,result) \
    ( (This)->lpVtbl->GetProviderForHwnd(This,hwnd,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Environment_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentInterop
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentInterop
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2EnvironmentInterop[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentInterop";
/* [object, version, uuid("325CB998-B662-56D0-A6D5-3B90C1AEAD1D"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInteropVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetProviderForHwnd )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ControllerWindowReference * hwnd,
        /* [retval, out] */IInspectable * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInteropVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInteropVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_GetProviderForHwnd(This,hwnd,result) \
    ( (This)->lpVtbl->GetProviderForHwnd(This,hwnd,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentInterop_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentOptions
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentOptions
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2EnvironmentOptions[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentOptions";
/* [object, version, uuid("25D6DC39-0062-5735-8B09-A6F535F19E97"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdditionalBrowserArguments )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AdditionalBrowserArguments )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetCompatibleBrowserVersion )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TargetCompatibleBrowserVersion )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowSingleSignOnUsingOSPrimaryAccount )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowSingleSignOnUsingOSPrimaryAccount )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptionsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_get_AdditionalBrowserArguments(This,value) \
    ( (This)->lpVtbl->get_AdditionalBrowserArguments(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_put_AdditionalBrowserArguments(This,value) \
    ( (This)->lpVtbl->put_AdditionalBrowserArguments(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_get_Language(This,value) \
    ( (This)->lpVtbl->get_Language(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_put_Language(This,value) \
    ( (This)->lpVtbl->put_Language(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_get_TargetCompatibleBrowserVersion(This,value) \
    ( (This)->lpVtbl->get_TargetCompatibleBrowserVersion(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_put_TargetCompatibleBrowserVersion(This,value) \
    ( (This)->lpVtbl->put_TargetCompatibleBrowserVersion(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_get_AllowSingleSignOnUsingOSPrimaryAccount(This,value) \
    ( (This)->lpVtbl->get_AllowSingleSignOnUsingOSPrimaryAccount(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_put_AllowSingleSignOnUsingOSPrimaryAccount(This,value) \
    ( (This)->lpVtbl->put_AllowSingleSignOnUsingOSPrimaryAccount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentStatics
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Environment
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2EnvironmentStatics[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentStatics";
/* [object, version, uuid("0E33F804-F20B-5635-8491-162AAA27517B"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithOptionsAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
        /* [in] */HSTRING browserExecutableFolder,
        /* [in] */HSTRING userDataFolder,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentOptions * options,
        /* [retval, out] */__FIAsyncOperation_1_Microsoft__CWeb__CWebView2__CCore__CCoreWebView2Environment * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetAvailableBrowserVersionString )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
        /* [retval, out] */HSTRING * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetAvailableBrowserVersionString2 )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
        /* [in] */HSTRING browserExecutableFolder,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *CompareBrowserVersionString )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics * This,
        /* [in] */HSTRING browserVersionString1,
        /* [in] */HSTRING browserVersionString2,
        /* [retval, out] */INT32 * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStaticsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_CreateAsync(This,operation) \
    ( (This)->lpVtbl->CreateAsync(This,operation) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_CreateWithOptionsAsync(This,browserExecutableFolder,userDataFolder,options,operation) \
    ( (This)->lpVtbl->CreateWithOptionsAsync(This,browserExecutableFolder,userDataFolder,options,operation) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_GetAvailableBrowserVersionString(This,result) \
    ( (This)->lpVtbl->GetAvailableBrowserVersionString(This,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_GetAvailableBrowserVersionString2(This,browserExecutableFolder,result) \
    ( (This)->lpVtbl->GetAvailableBrowserVersionString2(This,browserExecutableFolder,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_CompareBrowserVersionString(This,browserVersionString1,browserVersionString2,result) \
    ( (This)->lpVtbl->CompareBrowserVersionString(This,browserVersionString1,browserVersionString2,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2EnvironmentStatics_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2HttpHeadersCollectionIterator
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2HttpHeadersCollectionIterator
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2HttpHeadersCollectionIterator[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2HttpHeadersCollectionIterator";
/* [object, version, uuid("ADF264EE-D980-5F48-A60E-8705DE046608"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIteratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIteratorVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIteratorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2HttpRequestHeaders
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2HttpRequestHeaders
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2HttpRequestHeaders[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2HttpRequestHeaders";
/* [object, version, uuid("DC2226C7-3515-55BB-BCB2-57B78F86B91D"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeadersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetHeader )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
        /* [in] */HSTRING name,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHeaders )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
        /* [in] */HSTRING name,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Contains )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
        /* [in] */HSTRING name,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetHeader )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
        /* [in] */HSTRING name,
        /* [in] */HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveHeader )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * This,
        /* [in] */HSTRING name
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeadersVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeadersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_GetHeader(This,name,result) \
    ( (This)->lpVtbl->GetHeader(This,name,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_GetHeaders(This,name,result) \
    ( (This)->lpVtbl->GetHeaders(This,name,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_Contains(This,name,result) \
    ( (This)->lpVtbl->Contains(This,name,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_SetHeader(This,name,value) \
    ( (This)->lpVtbl->SetHeader(This,name,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_RemoveHeader(This,name) \
    ( (This)->lpVtbl->RemoveHeader(This,name) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2HttpResponseHeaders
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2HttpResponseHeaders
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2HttpResponseHeaders[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2HttpResponseHeaders";
/* [object, version, uuid("F3D383E9-747F-5574-8662-9A6B920CECD4"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeadersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AppendHeader )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This,
        /* [in] */HSTRING name,
        /* [in] */HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *Contains )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This,
        /* [in] */HSTRING name,
        /* [retval, out] */boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHeader )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This,
        /* [in] */HSTRING name,
        /* [retval, out] */HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetHeaders )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * This,
        /* [in] */HSTRING name,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpHeadersCollectionIterator * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeadersVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeadersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_AppendHeader(This,name,value) \
    ( (This)->lpVtbl->AppendHeader(This,name,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_Contains(This,name,result) \
    ( (This)->lpVtbl->Contains(This,name,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_GetHeader(This,name,result) \
    ( (This)->lpVtbl->GetHeader(This,name,result) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_GetHeaders(This,name,result) \
    ( (This)->lpVtbl->GetHeaders(This,name,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2MoveFocusRequestedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusRequestedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2MoveFocusRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2MoveFocusRequestedEventArgs";
/* [object, version, uuid("2E29103B-ECDD-5C1D-B288-3F066D608919"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2MoveFocusReason * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2MoveFocusRequestedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2NavigationCompletedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2NavigationCompletedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2NavigationCompletedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2NavigationCompletedEventArgs";
/* [object, version, uuid("4865E238-036A-5664-95A3-447EC44CF498"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSuccess )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebErrorStatus )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebErrorStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavigationId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs * This,
        /* [retval, out] */UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_get_IsSuccess(This,value) \
    ( (This)->lpVtbl->get_IsSuccess(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_get_WebErrorStatus(This,value) \
    ( (This)->lpVtbl->get_WebErrorStatus(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_get_NavigationId(This,value) \
    ( (This)->lpVtbl->get_NavigationId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationCompletedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2NavigationStartingEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2NavigationStartingEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2NavigationStartingEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2NavigationStartingEventArgs";
/* [object, version, uuid("548D23D3-FEA3-5616-BD05-AE08066C86D3"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsUserInitiated )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRedirected )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestHeaders )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavigationId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs * This,
        /* [retval, out] */UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_get_IsUserInitiated(This,value) \
    ( (This)->lpVtbl->get_IsUserInitiated(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_get_IsRedirected(This,value) \
    ( (This)->lpVtbl->get_IsRedirected(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_get_RequestHeaders(This,value) \
    ( (This)->lpVtbl->get_RequestHeaders(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_get_Cancel(This,value) \
    ( (This)->lpVtbl->get_Cancel(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_put_Cancel(This,value) \
    ( (This)->lpVtbl->put_Cancel(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_get_NavigationId(This,value) \
    ( (This)->lpVtbl->get_NavigationId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NavigationStartingEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2NewWindowRequestedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2NewWindowRequestedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2NewWindowRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2NewWindowRequestedEventArgs";
/* [object, version, uuid("E6E013BA-AEC8-532E-9AC9-1590AF7B25EC"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewWindow )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NewWindow )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsUserInitiated )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowFeatures )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_get_NewWindow(This,value) \
    ( (This)->lpVtbl->get_NewWindow(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_put_NewWindow(This,value) \
    ( (This)->lpVtbl->put_NewWindow(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_get_IsUserInitiated(This,value) \
    ( (This)->lpVtbl->get_IsUserInitiated(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_get_WindowFeatures(This,value) \
    ( (This)->lpVtbl->get_WindowFeatures(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2NewWindowRequestedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2PermissionRequestedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2PermissionRequestedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2PermissionRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2PermissionRequestedEventArgs";
/* [object, version, uuid("118BDD9B-CEF1-5910-929E-C1A321328239"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PermissionKind )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsUserInitiated )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionState * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_State )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2PermissionState value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_get_PermissionKind(This,value) \
    ( (This)->lpVtbl->get_PermissionKind(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_get_IsUserInitiated(This,value) \
    ( (This)->lpVtbl->get_IsUserInitiated(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_put_State(This,value) \
    ( (This)->lpVtbl->put_State(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PermissionRequestedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2PointerInfo
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2PointerInfo
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2PointerInfo[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2PointerInfo";
/* [object, version, uuid("C3860E0D-C018-5A84-BC06-9F8F7B275DFF"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerKind )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerKind )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FrameId )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerFlags )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerFlags )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceRect )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerDeviceRect )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayRect )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayRect )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelLocation )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PixelLocation )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HimetricLocation )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HimetricLocation )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelLocationRaw )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PixelLocationRaw )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HimetricLocationRaw )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HimetricLocationRaw )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Time )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Time )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HistoryCount )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HistoryCount )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputData )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InputData )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStates )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyStates )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PerformanceCount )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT64 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PerformanceCount )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT64 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ButtonChangeKind )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ButtonChangeKind )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenFlags )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenFlags )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenMask )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenMask )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenPressure )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenPressure )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenRotation )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenRotation )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenTiltX )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenTiltX )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenTiltY )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenTiltY )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchFlags )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TouchFlags )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchMask )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TouchMask )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchContact )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TouchContact )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchContactRaw )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TouchContactRaw )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchOrientation )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TouchOrientation )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchPressure )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TouchPressure )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfoVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PointerKind(This,value) \
    ( (This)->lpVtbl->get_PointerKind(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PointerKind(This,value) \
    ( (This)->lpVtbl->put_PointerKind(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PointerId(This,value) \
    ( (This)->lpVtbl->get_PointerId(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PointerId(This,value) \
    ( (This)->lpVtbl->put_PointerId(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_FrameId(This,value) \
    ( (This)->lpVtbl->get_FrameId(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_FrameId(This,value) \
    ( (This)->lpVtbl->put_FrameId(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PointerFlags(This,value) \
    ( (This)->lpVtbl->get_PointerFlags(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PointerFlags(This,value) \
    ( (This)->lpVtbl->put_PointerFlags(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PointerDeviceRect(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceRect(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PointerDeviceRect(This,value) \
    ( (This)->lpVtbl->put_PointerDeviceRect(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_DisplayRect(This,value) \
    ( (This)->lpVtbl->get_DisplayRect(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_DisplayRect(This,value) \
    ( (This)->lpVtbl->put_DisplayRect(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PixelLocation(This,value) \
    ( (This)->lpVtbl->get_PixelLocation(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PixelLocation(This,value) \
    ( (This)->lpVtbl->put_PixelLocation(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_HimetricLocation(This,value) \
    ( (This)->lpVtbl->get_HimetricLocation(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_HimetricLocation(This,value) \
    ( (This)->lpVtbl->put_HimetricLocation(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PixelLocationRaw(This,value) \
    ( (This)->lpVtbl->get_PixelLocationRaw(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PixelLocationRaw(This,value) \
    ( (This)->lpVtbl->put_PixelLocationRaw(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_HimetricLocationRaw(This,value) \
    ( (This)->lpVtbl->get_HimetricLocationRaw(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_HimetricLocationRaw(This,value) \
    ( (This)->lpVtbl->put_HimetricLocationRaw(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_Time(This,value) \
    ( (This)->lpVtbl->get_Time(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_Time(This,value) \
    ( (This)->lpVtbl->put_Time(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_HistoryCount(This,value) \
    ( (This)->lpVtbl->get_HistoryCount(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_HistoryCount(This,value) \
    ( (This)->lpVtbl->put_HistoryCount(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_InputData(This,value) \
    ( (This)->lpVtbl->get_InputData(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_InputData(This,value) \
    ( (This)->lpVtbl->put_InputData(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_KeyStates(This,value) \
    ( (This)->lpVtbl->get_KeyStates(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_KeyStates(This,value) \
    ( (This)->lpVtbl->put_KeyStates(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PerformanceCount(This,value) \
    ( (This)->lpVtbl->get_PerformanceCount(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PerformanceCount(This,value) \
    ( (This)->lpVtbl->put_PerformanceCount(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_ButtonChangeKind(This,value) \
    ( (This)->lpVtbl->get_ButtonChangeKind(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_ButtonChangeKind(This,value) \
    ( (This)->lpVtbl->put_ButtonChangeKind(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PenFlags(This,value) \
    ( (This)->lpVtbl->get_PenFlags(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PenFlags(This,value) \
    ( (This)->lpVtbl->put_PenFlags(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PenMask(This,value) \
    ( (This)->lpVtbl->get_PenMask(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PenMask(This,value) \
    ( (This)->lpVtbl->put_PenMask(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PenPressure(This,value) \
    ( (This)->lpVtbl->get_PenPressure(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PenPressure(This,value) \
    ( (This)->lpVtbl->put_PenPressure(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PenRotation(This,value) \
    ( (This)->lpVtbl->get_PenRotation(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PenRotation(This,value) \
    ( (This)->lpVtbl->put_PenRotation(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PenTiltX(This,value) \
    ( (This)->lpVtbl->get_PenTiltX(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PenTiltX(This,value) \
    ( (This)->lpVtbl->put_PenTiltX(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_PenTiltY(This,value) \
    ( (This)->lpVtbl->get_PenTiltY(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_PenTiltY(This,value) \
    ( (This)->lpVtbl->put_PenTiltY(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_TouchFlags(This,value) \
    ( (This)->lpVtbl->get_TouchFlags(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_TouchFlags(This,value) \
    ( (This)->lpVtbl->put_TouchFlags(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_TouchMask(This,value) \
    ( (This)->lpVtbl->get_TouchMask(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_TouchMask(This,value) \
    ( (This)->lpVtbl->put_TouchMask(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_TouchContact(This,value) \
    ( (This)->lpVtbl->get_TouchContact(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_TouchContact(This,value) \
    ( (This)->lpVtbl->put_TouchContact(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_TouchContactRaw(This,value) \
    ( (This)->lpVtbl->get_TouchContactRaw(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_TouchContactRaw(This,value) \
    ( (This)->lpVtbl->put_TouchContactRaw(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_TouchOrientation(This,value) \
    ( (This)->lpVtbl->get_TouchOrientation(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_TouchOrientation(This,value) \
    ( (This)->lpVtbl->put_TouchOrientation(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_get_TouchPressure(This,value) \
    ( (This)->lpVtbl->get_TouchPressure(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_put_TouchPressure(This,value) \
    ( (This)->lpVtbl->put_TouchPressure(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2PointerInfo_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ProcessFailedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ProcessFailedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ProcessFailedEventArgs";
/* [object, version, uuid("25A8F8C9-D944-539D-AFA3-24172B48EF47"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProcessFailedKind )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2ProcessFailedKind * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_get_ProcessFailedKind(This,value) \
    ( (This)->lpVtbl->get_ProcessFailedKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ProcessFailedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2ScriptDialogOpeningEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogOpeningEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2ScriptDialogOpeningEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2ScriptDialogOpeningEventArgs";
/* [object, version, uuid("A4315212-C7EB-568A-86E4-C61E31BA6CDA"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2ScriptDialogKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultText )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResultText )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ResultText )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
        /* [in] */HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_get_DefaultText(This,value) \
    ( (This)->lpVtbl->get_DefaultText(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_get_ResultText(This,value) \
    ( (This)->lpVtbl->get_ResultText(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_put_ResultText(This,value) \
    ( (This)->lpVtbl->put_ResultText(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_Accept(This) \
    ( (This)->lpVtbl->Accept(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2ScriptDialogOpeningEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2Settings
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2Settings
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2Settings[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2Settings";
/* [object, version, uuid("003B325E-74CD-52DD-8024-EBB8BE38E48E"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsScriptEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsScriptEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsWebMessageEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsWebMessageEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreDefaultScriptDialogsEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreDefaultScriptDialogsEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsStatusBarEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsStatusBarEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreDevToolsEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreDevToolsEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreDefaultContextMenusEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreDefaultContextMenusEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreHostObjectsAllowed )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreHostObjectsAllowed )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsZoomControlEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsZoomControlEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBuiltInErrorPageEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsBuiltInErrorPageEnabled )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SettingsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_IsScriptEnabled(This,value) \
    ( (This)->lpVtbl->get_IsScriptEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_IsScriptEnabled(This,value) \
    ( (This)->lpVtbl->put_IsScriptEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_IsWebMessageEnabled(This,value) \
    ( (This)->lpVtbl->get_IsWebMessageEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_IsWebMessageEnabled(This,value) \
    ( (This)->lpVtbl->put_IsWebMessageEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_AreDefaultScriptDialogsEnabled(This,value) \
    ( (This)->lpVtbl->get_AreDefaultScriptDialogsEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_AreDefaultScriptDialogsEnabled(This,value) \
    ( (This)->lpVtbl->put_AreDefaultScriptDialogsEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_IsStatusBarEnabled(This,value) \
    ( (This)->lpVtbl->get_IsStatusBarEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_IsStatusBarEnabled(This,value) \
    ( (This)->lpVtbl->put_IsStatusBarEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_AreDevToolsEnabled(This,value) \
    ( (This)->lpVtbl->get_AreDevToolsEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_AreDevToolsEnabled(This,value) \
    ( (This)->lpVtbl->put_AreDevToolsEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_AreDefaultContextMenusEnabled(This,value) \
    ( (This)->lpVtbl->get_AreDefaultContextMenusEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_AreDefaultContextMenusEnabled(This,value) \
    ( (This)->lpVtbl->put_AreDefaultContextMenusEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_AreHostObjectsAllowed(This,value) \
    ( (This)->lpVtbl->get_AreHostObjectsAllowed(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_AreHostObjectsAllowed(This,value) \
    ( (This)->lpVtbl->put_AreHostObjectsAllowed(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_IsZoomControlEnabled(This,value) \
    ( (This)->lpVtbl->get_IsZoomControlEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_IsZoomControlEnabled(This,value) \
    ( (This)->lpVtbl->put_IsZoomControlEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_get_IsBuiltInErrorPageEnabled(This,value) \
    ( (This)->lpVtbl->get_IsBuiltInErrorPageEnabled(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_put_IsBuiltInErrorPageEnabled(This,value) \
    ( (This)->lpVtbl->put_IsBuiltInErrorPageEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2Settings_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2SourceChangedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2SourceChangedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2SourceChangedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2SourceChangedEventArgs";
/* [object, version, uuid("CA437B2C-6A18-5552-B749-B198F8CC34D9"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsNewDocument )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_get_IsNewDocument(This,value) \
    ( (This)->lpVtbl->get_IsNewDocument(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2SourceChangedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebMessageReceivedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebMessageReceivedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebMessageReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebMessageReceivedEventArgs";
/* [object, version, uuid("EB066159-B725-5D5B-ADC8-F5D7B9290304"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebMessageAsJson )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This,
        /* [retval, out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetWebMessageAsString )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs * This,
        /* [retval, out] */HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_get_WebMessageAsJson(This,value) \
    ( (This)->lpVtbl->get_WebMessageAsJson(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_TryGetWebMessageAsString(This,result) \
    ( (This)->lpVtbl->TryGetWebMessageAsString(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebMessageReceivedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequest
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequest
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceRequest[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequest";
/* [object, version, uuid("5C742259-67D2-5DF2-8382-0F201B4D7197"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Method )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Method )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
        /* [in] */HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpRequestHeaders * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_put_Uri(This,value) \
    ( (This)->lpVtbl->put_Uri(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_get_Method(This,value) \
    ( (This)->lpVtbl->get_Method(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_put_Method(This,value) \
    ( (This)->lpVtbl->put_Method(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_get_Headers(This,value) \
    ( (This)->lpVtbl->get_Headers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequestedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequestedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequestedEventArgs";
/* [object, version, uuid("577F1FC4-C943-54A9-9700-BD469B48BD41"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Response )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
        /* [in] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceContext )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CCoreWebView2WebResourceContext * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs * This,
        /* [retval, out] */__x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_get_Response(This,value) \
    ( (This)->lpVtbl->get_Response(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_put_Response(This,value) \
    ( (This)->lpVtbl->put_Response(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_get_ResourceContext(This,value) \
    ( (This)->lpVtbl->get_ResourceContext(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequestedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponse
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponse
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceResponse[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponse";
/* [object, version, uuid("14621923-E485-5F44-8F5D-BD4243BC398F"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
        /* [retval, out] */__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
        /* [in] */__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StatusCode )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReasonPhrase )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReasonPhrase )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse * This,
        /* [in] */HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_get_Headers(This,value) \
    ( (This)->lpVtbl->get_Headers(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_get_StatusCode(This,value) \
    ( (This)->lpVtbl->get_StatusCode(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_put_StatusCode(This,value) \
    ( (This)->lpVtbl->put_StatusCode(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_get_ReasonPhrase(This,value) \
    ( (This)->lpVtbl->get_ReasonPhrase(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_put_ReasonPhrase(This,value) \
    ( (This)->lpVtbl->put_ReasonPhrase(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponse_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseReceivedEventArgs
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseReceivedEventArgs
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceResponseReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseReceivedEventArgs";
/* [object, version, uuid("12424671-9711-54F4-BCDF-5F307ADD6EC2"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceRequest * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_get_Response(This,value) \
    ( (This)->lpVtbl->get_Response(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseReceivedEventArgs_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseView
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseView
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WebResourceResponseView[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseView";
/* [object, version, uuid("33EE060B-B578-5698-B541-FEF87FE7FE72"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2HttpResponseHeaders * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This,
        /* [retval, out] */INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReasonPhrase )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This,
        /* [retval, out] */HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContentAsync )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView * This,
        /* [retval, out] */__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream * * operation
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseViewVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_get_Headers(This,value) \
    ( (This)->lpVtbl->get_Headers(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_get_StatusCode(This,value) \
    ( (This)->lpVtbl->get_StatusCode(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_get_ReasonPhrase(This,value) \
    ( (This)->lpVtbl->get_ReasonPhrase(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_GetContentAsync(This,operation) \
    ( (This)->lpVtbl->GetContentAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WebResourceResponseView_INTERFACE_DEFINED__) */


/*
 *
 * Interface Microsoft.Web.WebView2.Core.ICoreWebView2WindowFeatures
 *
 * Interface is a part of the implementation of type Microsoft.Web.WebView2.Core.CoreWebView2WindowFeatures
 *
 *
 */
#if !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Web_WebView2_Core_ICoreWebView2WindowFeatures[] = L"Microsoft.Web.WebView2.Core.ICoreWebView2WindowFeatures";
/* [object, version, uuid("D8607388-260B-5EC4-845F-D90A3239D3E6"), exclusiveto] */
typedef struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeaturesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasPosition )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasSize )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Left )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Top )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShouldDisplayMenuBar )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShouldDisplayStatus )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShouldDisplayToolbar )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShouldDisplayScrollBars )(
        __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures * This,
        /* [retval, out] */INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeaturesVtbl;

interface __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeaturesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_HasPosition(This,value) \
    ( (This)->lpVtbl->get_HasPosition(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_HasSize(This,value) \
    ( (This)->lpVtbl->get_HasSize(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_Left(This,value) \
    ( (This)->lpVtbl->get_Left(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_Top(This,value) \
    ( (This)->lpVtbl->get_Top(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_Height(This,value) \
    ( (This)->lpVtbl->get_Height(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_Width(This,value) \
    ( (This)->lpVtbl->get_Width(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_ShouldDisplayMenuBar(This,value) \
    ( (This)->lpVtbl->get_ShouldDisplayMenuBar(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_ShouldDisplayStatus(This,value) \
    ( (This)->lpVtbl->get_ShouldDisplayStatus(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_ShouldDisplayToolbar(This,value) \
    ( (This)->lpVtbl->get_ShouldDisplayToolbar(This,value) )

#define __x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_get_ShouldDisplayScrollBars(This,value) \
    ( (This)->lpVtbl->get_ShouldDisplayScrollBars(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures;
#endif /* !defined(____x_ABI_CMicrosoft_CWeb_CWebView2_CCore_CICoreWebView2WindowFeatures_INTERFACE_DEFINED__) */


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2 ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2[] = L"Microsoft.Web.WebView2.Core.CoreWebView2";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2AcceleratorKeyPressedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2AcceleratorKeyPressedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2AcceleratorKeyPressedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2AcceleratorKeyPressedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2AcceleratorKeyPressedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2AcceleratorKeyPressedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2CompositionController
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2CompositionController ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CompositionController_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CompositionController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2CompositionController[] = L"Microsoft.Web.WebView2.Core.CoreWebView2CompositionController";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2CompositionControllerInterop
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2CompositionControllerInterop ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CompositionControllerInterop_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CompositionControllerInterop_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2CompositionControllerInterop[] = L"Microsoft.Web.WebView2.Core.CoreWebView2CompositionControllerInterop";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2ContentLoadingEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2ContentLoadingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ContentLoadingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ContentLoadingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2ContentLoadingEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2ContentLoadingEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2Controller
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2Controller ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Controller_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Controller_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2Controller[] = L"Microsoft.Web.WebView2.Core.CoreWebView2Controller";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2ControllerWindowReference
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2ControllerWindowReference ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ControllerWindowReference_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ControllerWindowReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2ControllerWindowReference[] = L"Microsoft.Web.WebView2.Core.CoreWebView2ControllerWindowReference";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2Cookie
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2Cookie ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Cookie_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Cookie_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2Cookie[] = L"Microsoft.Web.WebView2.Core.CoreWebView2Cookie";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2CookieManager
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2CookieManager ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CookieManager_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2CookieManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2CookieManager[] = L"Microsoft.Web.WebView2.Core.CoreWebView2CookieManager";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2DOMContentLoadedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2DOMContentLoadedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DOMContentLoadedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DOMContentLoadedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2DOMContentLoadedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2DOMContentLoadedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceivedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceivedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceiver
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2DevToolsProtocolEventReceiver ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceiver_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceiver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2DevToolsProtocolEventReceiver[] = L"Microsoft.Web.WebView2.Core.CoreWebView2DevToolsProtocolEventReceiver";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2Environment
 *
 * RuntimeClass contains static methods.
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2Environment ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Environment_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Environment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2Environment[] = L"Microsoft.Web.WebView2.Core.CoreWebView2Environment";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentInterop
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentInterop ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentInterop_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentInterop_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentInterop[] = L"Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentInterop";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentOptions
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2EnvironmentOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentOptions_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2EnvironmentOptions[] = L"Microsoft.Web.WebView2.Core.CoreWebView2EnvironmentOptions";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2HttpHeadersCollectionIterator
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2HttpHeadersCollectionIterator ** Default Interface **
 *    Windows.Foundation.Collections.IIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpHeadersCollectionIterator_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpHeadersCollectionIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2HttpHeadersCollectionIterator[] = L"Microsoft.Web.WebView2.Core.CoreWebView2HttpHeadersCollectionIterator";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2HttpRequestHeaders
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2HttpRequestHeaders ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpRequestHeaders_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpRequestHeaders_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2HttpRequestHeaders[] = L"Microsoft.Web.WebView2.Core.CoreWebView2HttpRequestHeaders";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2HttpResponseHeaders
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2HttpResponseHeaders ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpResponseHeaders_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2HttpResponseHeaders_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2HttpResponseHeaders[] = L"Microsoft.Web.WebView2.Core.CoreWebView2HttpResponseHeaders";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusRequestedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2MoveFocusRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2MoveFocusRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2MoveFocusRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2MoveFocusRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2MoveFocusRequestedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2NavigationCompletedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2NavigationCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NavigationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NavigationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2NavigationCompletedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2NavigationCompletedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2NavigationStartingEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2NavigationStartingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NavigationStartingEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NavigationStartingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2NavigationStartingEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2NavigationStartingEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2NewWindowRequestedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2NewWindowRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NewWindowRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2NewWindowRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2NewWindowRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2NewWindowRequestedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2PermissionRequestedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2PermissionRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2PermissionRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2PermissionRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2PermissionRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2PermissionRequestedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2PointerInfo
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2PointerInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2PointerInfo_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2PointerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2PointerInfo[] = L"Microsoft.Web.WebView2.Core.CoreWebView2PointerInfo";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2ProcessFailedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ProcessFailedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ProcessFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2ProcessFailedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2ProcessFailedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogOpeningEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2ScriptDialogOpeningEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ScriptDialogOpeningEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2ScriptDialogOpeningEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2ScriptDialogOpeningEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2ScriptDialogOpeningEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2Settings
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2Settings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Settings_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2Settings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2Settings[] = L"Microsoft.Web.WebView2.Core.CoreWebView2Settings";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2SourceChangedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2SourceChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2SourceChangedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2SourceChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2SourceChangedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2SourceChangedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebMessageReceivedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebMessageReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebMessageReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebMessageReceivedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequest
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequest_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequest[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequest";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequestedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceRequestedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceRequestedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponse
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponse ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponse_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponse[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponse";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseReceivedEventArgs
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseReceivedEventArgs[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseReceivedEventArgs";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseView
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WebResourceResponseView ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseView_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WebResourceResponseView[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WebResourceResponseView";
#endif


/*
 *
 * Class Microsoft.Web.WebView2.Core.CoreWebView2WindowFeatures
 *
 * Class implements the following interfaces:
 *    Microsoft.Web.WebView2.Core.ICoreWebView2WindowFeatures ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WindowFeatures_DEFINED
#define RUNTIMECLASS_Microsoft_Web_WebView2_Core_CoreWebView2WindowFeatures_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Web_WebView2_Core_CoreWebView2WindowFeatures[] = L"Microsoft.Web.WebView2.Core.CoreWebView2WindowFeatures";
#endif





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EWeb2EWebView22ECore_p_h__

#endif // __Microsoft2EWeb2EWebView22ECore_h__
