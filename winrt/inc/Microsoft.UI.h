/* Header file automatically generated from Microsoft.UI.idl */
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
#ifndef __Microsoft2EUI_h__
#define __Microsoft2EUI_h__
#ifndef __Microsoft2EUI_p_h__
#define __Microsoft2EUI_p_h__


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
#if !defined(MICROSOFT_GRAPHICS_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_GRAPHICS_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_GRAPHICS_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_SYSTEM_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_COMPOSITION_INTERACTIONS_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_INTERACTIONS_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_INTERACTIONS_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_COMPOSITION_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_LIFTEDCONTRACT_VERSION)
#define MICROSOFT_UI_LIFTEDCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_LIFTEDCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)
#define MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION)
#define MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION 0x10000
#endif // defined(MICROSOFT_UI_XAML_PRIVATEAPICONTRACT_VERSION)

#if !defined(MICROSOFT_UI_XAML_WINUICONTRACT_VERSION)
#define MICROSOFT_UI_XAML_WINUICONTRACT_VERSION 0x80000
#endif // defined(MICROSOFT_UI_XAML_WINUICONTRACT_VERSION)

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
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Microsoft.UI.Composition.h"
#include "Microsoft.UI.Xaml.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CIColorHelper_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColorHelper_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IColorHelper;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIColorHelper ABI::Microsoft::UI::IColorHelper

#endif // ____x_ABI_CMicrosoft_CUI_CIColorHelper_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IColorHelperStatics;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics ABI::Microsoft::UI::IColorHelperStatics

#endif // ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IColorHelperStatics2;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 ABI::Microsoft::UI::IColorHelperStatics2

#endif // ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIColors_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColors_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IColors;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIColors ABI::Microsoft::UI::IColors

#endif // ____x_ABI_CMicrosoft_CUI_CIColors_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIColorsStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColorsStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IColorsStatics;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIColorsStatics ABI::Microsoft::UI::IColorsStatics

#endif // ____x_ABI_CMicrosoft_CUI_CIColorsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIContentAutomation_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomation_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IContentAutomation;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIContentAutomation ABI::Microsoft::UI::IContentAutomation

#endif // ____x_ABI_CMicrosoft_CUI_CIContentAutomation_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IContentAutomationProviderRequestedEventArgs;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs ABI::Microsoft::UI::IContentAutomationProviderRequestedEventArgs

#endif // ____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IContentAutomationStatics;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics ABI::Microsoft::UI::IContentAutomationStatics

#endif // ____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIUIContentRoot_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRoot_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IUIContentRoot;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot ABI::Microsoft::UI::IUIContentRoot

#endif // ____x_ABI_CMicrosoft_CUI_CIUIContentRoot_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IUIContentRootFactory;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory ABI::Microsoft::UI::IUIContentRootFactory

#endif // ____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IUIContentRootPartner;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner ABI::Microsoft::UI::IUIContentRootPartner

#endif // ____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            interface IUIContentRoot_ContentAutomation;
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation ABI::Microsoft::UI::IUIContentRoot_ContentAutomation

#endif // ____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Microsoft {
        namespace UI {
            class ContentAutomation;
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            class ContentAutomationProviderRequestedEventArgs;
        } /* UI */
    } /* Microsoft */
} /* ABI */


#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef DEF___FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("77c4e6ab-d324-5ab0-9b46-d88366cf08fd"))
ITypedEventHandler<ABI::Microsoft::UI::ContentAutomation*,ABI::Microsoft::UI::ContentAutomationProviderRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::ContentAutomation*, ABI::Microsoft::UI::IContentAutomation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Microsoft::UI::ContentAutomationProviderRequestedEventArgs*, ABI::Microsoft::UI::IContentAutomationProviderRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Microsoft.UI.ContentAutomation, Microsoft.UI.ContentAutomationProviderRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Microsoft::UI::ContentAutomation*,ABI::Microsoft::UI::ContentAutomationProviderRequestedEventArgs*> __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_t;
#define __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::IContentAutomation*,ABI::Microsoft::UI::IContentAutomationProviderRequestedEventArgs*>
//#define __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::IContentAutomation*,ABI::Microsoft::UI::IContentAutomationProviderRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_USE */


#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                class CompositionIsland;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */

#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland_FWD_DEFINED__
namespace ABI {
    namespace Microsoft {
        namespace UI {
            namespace Composition {
                interface ICompositionIsland;
            } /* Composition */
        } /* UI */
    } /* Microsoft */
} /* ABI */
#define __x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland ABI::Microsoft::UI::Composition::ICompositionIsland

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland_FWD_DEFINED__









namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* UI */
    } /* Windows */
} /* ABI */
















namespace ABI {
    namespace Microsoft {
        namespace UI {
            class ColorHelper;
        } /* UI */
    } /* Microsoft */
} /* ABI */


namespace ABI {
    namespace Microsoft {
        namespace UI {
            class Colors;
        } /* UI */
    } /* Microsoft */
} /* ABI */




namespace ABI {
    namespace Microsoft {
        namespace UI {
            class UIContentRoot;
        } /* UI */
    } /* Microsoft */
} /* ABI */









/*
 *
 * Interface Microsoft.UI.IColorHelper
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.ColorHelper
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColorHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColorHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColorHelper[] = L"Microsoft.UI.IColorHelper";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("3ADDDCCD-3949-585B-A566-CCB8350DD221"), exclusiveto, contract] */
            MIDL_INTERFACE("3ADDDCCD-3949-585B-A566-CCB8350DD221")
            IColorHelper : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IColorHelper=_uuidof(IColorHelper);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColorHelper;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColorHelper_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IColorHelperStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.ColorHelper
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColorHelperStatics[] = L"Microsoft.UI.IColorHelperStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("1D1D85A1-EB63-538A-84F0-019210BC406B"), exclusiveto, contract] */
            MIDL_INTERFACE("1D1D85A1-EB63-538A-84F0-019210BC406B")
            IColorHelperStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE FromArgb(
                    /* [in] */BYTE a,
                    /* [in] */BYTE r,
                    /* [in] */BYTE g,
                    /* [in] */BYTE b,
                    /* [retval, out] */ABI::Windows::UI::Color * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IColorHelperStatics=_uuidof(IColorHelperStatics);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColorHelperStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IColorHelperStatics2
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.ColorHelper
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColorHelperStatics2[] = L"Microsoft.UI.IColorHelperStatics2";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("982A2D93-0EC4-56B7-9C20-0B5C77949066"), exclusiveto, contract] */
            MIDL_INTERFACE("982A2D93-0EC4-56B7-9C20-0B5C77949066")
            IColorHelperStatics2 : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE ToDisplayName(
                    /* [in] */ABI::Windows::UI::Color color,
                    /* [retval, out] */HSTRING * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IColorHelperStatics2=_uuidof(IColorHelperStatics2);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColorHelperStatics2;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Microsoft.UI.IColors
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Colors
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColors_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColors_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColors[] = L"Microsoft.UI.IColors";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("8CF15863-8411-5AFD-946C-328E04DA2F2F"), exclusiveto, contract] */
            MIDL_INTERFACE("8CF15863-8411-5AFD-946C-328E04DA2F2F")
            IColors : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IColors=_uuidof(IColors);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColors;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColors_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IColorsStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Colors
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColorsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColorsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColorsStatics[] = L"Microsoft.UI.IColorsStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("8620A5B0-015A-57AC-A3F3-895D0B1269AE"), exclusiveto, contract] */
            MIDL_INTERFACE("8620A5B0-015A-57AC-A3F3-895D0B1269AE")
            IColorsStatics : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AliceBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AntiqueWhite(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Aqua(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Aquamarine(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Azure(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Beige(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bisque(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Black(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlanchedAlmond(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Blue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueViolet(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Brown(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BurlyWood(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CadetBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Chartreuse(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Chocolate(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Coral(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CornflowerBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cornsilk(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Crimson(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cyan(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkCyan(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkGoldenrod(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkGray(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkKhaki(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkMagenta(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkOliveGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkOrange(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkOrchid(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkRed(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkSalmon(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkSeaGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkSlateBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkSlateGray(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkTurquoise(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkViolet(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeepPink(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeepSkyBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DimGray(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DodgerBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Firebrick(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FloralWhite(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForestGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Fuchsia(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gainsboro(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GhostWhite(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gold(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Goldenrod(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gray(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Green(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenYellow(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Honeydew(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HotPink(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IndianRed(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Indigo(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ivory(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Khaki(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Lavender(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LavenderBlush(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LawnGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LemonChiffon(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightCoral(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightCyan(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightGoldenrodYellow(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightGray(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightPink(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSalmon(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSeaGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSkyBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSlateGray(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSteelBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightYellow(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Lime(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LimeGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Linen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Magenta(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Maroon(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumAquamarine(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumOrchid(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumPurple(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumSeaGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumSlateBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumSpringGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumTurquoise(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumVioletRed(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MidnightBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MintCream(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MistyRose(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Moccasin(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavajoWhite(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Navy(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldLace(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Olive(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OliveDrab(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orange(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OrangeRed(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orchid(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaleGoldenrod(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaleGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaleTurquoise(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaleVioletRed(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PapayaWhip(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeachPuff(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Peru(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pink(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Plum(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowderBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Purple(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Red(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RosyBrown(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoyalBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SaddleBrown(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Salmon(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SandyBrown(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SeaGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SeaShell(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sienna(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Silver(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SkyBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SlateBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SlateGray(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Snow(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpringGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SteelBlue(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tan(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Teal(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thistle(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tomato(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Transparent(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Turquoise(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Violet(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wheat(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_White(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WhiteSmoke(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Yellow(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_YellowGreen(
                    /* [retval, out] */ABI::Windows::UI::Color * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IColorsStatics=_uuidof(IColorsStatics);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColorsStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColorsStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IContentAutomation
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.ContentAutomation
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomation_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IContentAutomation[] = L"Microsoft.UI.IContentAutomation";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("DFA2BDCA-CBE1-53B5-B486-079B9ABFE444"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("DFA2BDCA-CBE1-53B5-B486-079B9ABFE444")
            IContentAutomation : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationHostProvider(
                    /* [retval, out] */IInspectable * * value
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AutomationProviderRequested(
                    /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs * handler,
                    /* [retval, out] */EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AutomationProviderRequested(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IContentAutomation=_uuidof(IContentAutomation);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIContentAutomation;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomation_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IContentAutomationProviderRequestedEventArgs
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.ContentAutomationProviderRequestedEventArgs
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IContentAutomationProviderRequestedEventArgs[] = L"Microsoft.UI.IContentAutomationProviderRequestedEventArgs";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("E3546970-06AD-5095-9590-FEE5D5241E49"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("E3546970-06AD-5095-9590-FEE5D5241E49")
            IContentAutomationProviderRequestedEventArgs : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationProvider(
                    /* [retval, out] */IInspectable * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutomationProvider(
                    /* [in] */IInspectable * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                    /* [retval, out] */::boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                    /* [in] */::boolean value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IContentAutomationProviderRequestedEventArgs=_uuidof(IContentAutomationProviderRequestedEventArgs);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IContentAutomationStatics
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.ContentAutomation
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IContentAutomationStatics[] = L"Microsoft.UI.IContentAutomationStatics";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("5B520E50-FA18-5105-94FD-C9A8BCEE57F1"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("5B520E50-FA18-5105-94FD-C9A8BCEE57F1")
            IContentAutomationStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateForContent(
                    /* [in] */ABI::Microsoft::UI::IUIContentRoot * content,
                    /* [retval, out] */ABI::Microsoft::UI::IContentAutomation * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IContentAutomationStatics=_uuidof(IContentAutomationStatics);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIContentAutomationStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IUIContentRoot
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.UIContentRoot
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRoot_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRoot_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IUIContentRoot[] = L"Microsoft.UI.IUIContentRoot";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("F47C106F-C5DD-56D1-92C0-90861A2F7287"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("F47C106F-C5DD-56D1-92C0-90861A2F7287")
            IUIContentRoot : public IInspectable
            {
            public:
                
            };

            extern MIDL_CONST_ID IID & IID_IUIContentRoot=_uuidof(IUIContentRoot);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIUIContentRoot;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRoot_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IUIContentRootFactory
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.UIContentRoot
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IUIContentRootFactory[] = L"Microsoft.UI.IUIContentRootFactory";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("A9C562D7-4298-5DA9-8150-D777B532CC4D"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("A9C562D7-4298-5DA9-8150-D777B532CC4D")
            IUIContentRootFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                    /* [in] */ABI::Microsoft::UI::Composition::ICompositionIsland * island,
                    /* [in] */IInspectable * inputSite,
                    /* [retval, out] */ABI::Microsoft::UI::IUIContentRoot * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IUIContentRootFactory=_uuidof(IUIContentRootFactory);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIUIContentRootFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IUIContentRootPartner
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.UIContentRoot
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IUIContentRootPartner[] = L"Microsoft.UI.IUIContentRootPartner";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("1A77AE47-6810-52A8-95C4-F92F1F0758A7"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("1A77AE47-6810-52A8-95C4-F92F1F0758A7")
            IUIContentRootPartner : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputSite(
                    /* [retval, out] */IInspectable * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Island(
                    /* [retval, out] */ABI::Microsoft::UI::Composition::ICompositionIsland * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IUIContentRootPartner=_uuidof(IUIContentRootPartner);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIUIContentRootPartner;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IUIContentRoot_ContentAutomation
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.UIContentRoot
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IUIContentRoot_ContentAutomation[] = L"Microsoft.UI.IUIContentRoot_ContentAutomation";
namespace ABI {
    namespace Microsoft {
        namespace UI {
            /* [object, uuid("A78CEA0C-7CC5-592E-B628-E21F5111DEB2"), experimental, exclusiveto, contract] */
            MIDL_INTERFACE("A78CEA0C-7CC5-592E-B628-E21F5111DEB2")
            IUIContentRoot_ContentAutomation : public IInspectable
            {
            public:
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Automation(
                    /* [retval, out] */ABI::Microsoft::UI::IContentAutomation * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IUIContentRoot_ContentAutomation=_uuidof(IUIContentRoot_ContentAutomation);
            
        } /* UI */
    } /* Microsoft */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.ColorHelper
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.IColorHelperStatics2 interface starting with version 4.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *   Static Methods exist on the Microsoft.UI.IColorHelperStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IColorHelper ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_ColorHelper_DEFINED
#define RUNTIMECLASS_Microsoft_UI_ColorHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_ColorHelper[] = L"Microsoft.UI.ColorHelper";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Colors
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.IColorsStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IColors ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Colors_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Colors_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Colors[] = L"Microsoft.UI.Colors";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.ContentAutomation
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.IContentAutomationStatics interface starting with version 1.0 of the Microsoft.UI.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IContentAutomation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_ContentAutomation_DEFINED
#define RUNTIMECLASS_Microsoft_UI_ContentAutomation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_ContentAutomation[] = L"Microsoft.UI.ContentAutomation";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.ContentAutomationProviderRequestedEventArgs
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IContentAutomationProviderRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_ContentAutomationProviderRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_ContentAutomationProviderRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_ContentAutomationProviderRequestedEventArgs[] = L"Microsoft.UI.ContentAutomationProviderRequestedEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.UIContentRoot
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.IUIContentRootFactory interface starting with version 1.0 of the Microsoft.UI.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IUIContentRoot ** Default Interface **
 *    Microsoft.UI.IUIContentRootPartner
 *    Microsoft.UI.IUIContentRoot_ContentAutomation
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_UIContentRoot_DEFINED
#define RUNTIMECLASS_Microsoft_UI_UIContentRoot_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_UIContentRoot[] = L"Microsoft.UI.UIContentRoot";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CUI_CIColorHelper_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColorHelper_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIColorHelper __x_ABI_CMicrosoft_CUI_CIColorHelper;

#endif // ____x_ABI_CMicrosoft_CUI_CIColorHelper_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIColorHelperStatics __x_ABI_CMicrosoft_CUI_CIColorHelperStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2;

#endif // ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIColors_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColors_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIColors __x_ABI_CMicrosoft_CUI_CIColors;

#endif // ____x_ABI_CMicrosoft_CUI_CIColors_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIColorsStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIColorsStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIColorsStatics __x_ABI_CMicrosoft_CUI_CIColorsStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CIColorsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIContentAutomation_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomation_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIContentAutomation __x_ABI_CMicrosoft_CUI_CIContentAutomation;

#endif // ____x_ABI_CMicrosoft_CUI_CIContentAutomation_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs;

#endif // ____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics;

#endif // ____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIUIContentRoot_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRoot_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIUIContentRoot __x_ABI_CMicrosoft_CUI_CIUIContentRoot;

#endif // ____x_ABI_CMicrosoft_CUI_CIUIContentRoot_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory;

#endif // ____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner;

#endif // ____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation;

#endif // ____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CIContentAutomation * sender,/* [in] */ __RPC__in_opt __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__

#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland_FWD_DEFINED__
typedef interface __x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland __x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland;

#endif // ____x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland_FWD_DEFINED__










typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




























/*
 *
 * Interface Microsoft.UI.IColorHelper
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.ColorHelper
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColorHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColorHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColorHelper[] = L"Microsoft.UI.IColorHelper";
/* [object, uuid("3ADDDCCD-3949-585B-A566-CCB8350DD221"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIColorHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelper * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelper * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelper * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelper * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelper * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelper * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIColorHelperVtbl;

interface __x_ABI_CMicrosoft_CUI_CIColorHelper
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIColorHelperVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIColorHelper_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelper_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelper_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelper_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelper_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelper_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColorHelper;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColorHelper_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IColorHelperStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.ColorHelper
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColorHelperStatics[] = L"Microsoft.UI.IColorHelperStatics";
/* [object, uuid("1D1D85A1-EB63-538A-84F0-019210BC406B"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIColorHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromArgb )(
        __x_ABI_CMicrosoft_CUI_CIColorHelperStatics * This,
        /* [in] */BYTE a,
        /* [in] */BYTE r,
        /* [in] */BYTE g,
        /* [in] */BYTE b,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIColorHelperStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CIColorHelperStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIColorHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics_FromArgb(This,a,r,g,b,result) \
    ( (This)->lpVtbl->FromArgb(This,a,r,g,b,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColorHelperStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColorHelperStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IColorHelperStatics2
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.ColorHelper
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColorHelperStatics2[] = L"Microsoft.UI.IColorHelperStatics2";
/* [object, uuid("982A2D93-0EC4-56B7-9C20-0B5C77949066"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ToDisplayName )(
        __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor color,
        /* [retval, out] */HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2Vtbl;

interface __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_ToDisplayName(This,color,result) \
    ( (This)->lpVtbl->ToDisplayName(This,color,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColorHelperStatics2;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Microsoft.UI.IColors
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Colors
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColors_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColors_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColors[] = L"Microsoft.UI.IColors";
/* [object, uuid("8CF15863-8411-5AFD-946C-328E04DA2F2F"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIColorsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColors * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColors * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColors * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColors * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColors * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColors * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIColorsVtbl;

interface __x_ABI_CMicrosoft_CUI_CIColors
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIColorsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIColors_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIColors_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIColors_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIColors_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIColors_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIColors_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColors;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColors_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IColorsStatics
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Microsoft.UI.Colors
 *
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CMicrosoft_CUI_CIColorsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIColorsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IColorsStatics[] = L"Microsoft.UI.IColorsStatics";
/* [object, uuid("8620A5B0-015A-57AC-A3F3-895D0B1269AE"), exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIColorsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AliceBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AntiqueWhite )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Aqua )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Aquamarine )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Azure )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Beige )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bisque )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Black )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlanchedAlmond )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Blue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueViolet )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Brown )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BurlyWood )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CadetBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Chartreuse )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Chocolate )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Coral )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CornflowerBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cornsilk )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Crimson )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cyan )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkCyan )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkGoldenrod )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkGray )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkKhaki )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkMagenta )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkOliveGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkOrange )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkOrchid )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkRed )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkSalmon )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkSeaGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkSlateBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkSlateGray )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkTurquoise )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkViolet )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeepPink )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeepSkyBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DimGray )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DodgerBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Firebrick )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FloralWhite )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForestGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Fuchsia )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gainsboro )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GhostWhite )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gold )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Goldenrod )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gray )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Green )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenYellow )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Honeydew )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HotPink )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IndianRed )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Indigo )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ivory )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Khaki )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Lavender )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LavenderBlush )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LawnGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LemonChiffon )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightCoral )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightCyan )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightGoldenrodYellow )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightGray )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightPink )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSalmon )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSeaGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSkyBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSlateGray )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSteelBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightYellow )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Lime )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LimeGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Linen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Magenta )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Maroon )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumAquamarine )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumOrchid )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumPurple )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumSeaGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumSlateBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumSpringGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumTurquoise )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumVioletRed )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MidnightBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MintCream )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MistyRose )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Moccasin )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavajoWhite )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Navy )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldLace )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Olive )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OliveDrab )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orange )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OrangeRed )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orchid )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaleGoldenrod )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaleGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaleTurquoise )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaleVioletRed )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PapayaWhip )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeachPuff )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Peru )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pink )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Plum )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowderBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Purple )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Red )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RosyBrown )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoyalBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SaddleBrown )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Salmon )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SandyBrown )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SeaGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SeaShell )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sienna )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Silver )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SkyBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SlateBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SlateGray )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Snow )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpringGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SteelBlue )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tan )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Teal )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thistle )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tomato )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Transparent )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Turquoise )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Violet )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wheat )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_White )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WhiteSmoke )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Yellow )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_YellowGreen )(
        __x_ABI_CMicrosoft_CUI_CIColorsStatics * This,
        /* [retval, out] */__x_ABI_CWindows_CUI_CColor * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIColorsStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CIColorsStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIColorsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_AliceBlue(This,value) \
    ( (This)->lpVtbl->get_AliceBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_AntiqueWhite(This,value) \
    ( (This)->lpVtbl->get_AntiqueWhite(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Aqua(This,value) \
    ( (This)->lpVtbl->get_Aqua(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Aquamarine(This,value) \
    ( (This)->lpVtbl->get_Aquamarine(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Azure(This,value) \
    ( (This)->lpVtbl->get_Azure(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Beige(This,value) \
    ( (This)->lpVtbl->get_Beige(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Bisque(This,value) \
    ( (This)->lpVtbl->get_Bisque(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Black(This,value) \
    ( (This)->lpVtbl->get_Black(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_BlanchedAlmond(This,value) \
    ( (This)->lpVtbl->get_BlanchedAlmond(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Blue(This,value) \
    ( (This)->lpVtbl->get_Blue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_BlueViolet(This,value) \
    ( (This)->lpVtbl->get_BlueViolet(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Brown(This,value) \
    ( (This)->lpVtbl->get_Brown(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_BurlyWood(This,value) \
    ( (This)->lpVtbl->get_BurlyWood(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_CadetBlue(This,value) \
    ( (This)->lpVtbl->get_CadetBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Chartreuse(This,value) \
    ( (This)->lpVtbl->get_Chartreuse(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Chocolate(This,value) \
    ( (This)->lpVtbl->get_Chocolate(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Coral(This,value) \
    ( (This)->lpVtbl->get_Coral(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_CornflowerBlue(This,value) \
    ( (This)->lpVtbl->get_CornflowerBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Cornsilk(This,value) \
    ( (This)->lpVtbl->get_Cornsilk(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Crimson(This,value) \
    ( (This)->lpVtbl->get_Crimson(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Cyan(This,value) \
    ( (This)->lpVtbl->get_Cyan(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkBlue(This,value) \
    ( (This)->lpVtbl->get_DarkBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkCyan(This,value) \
    ( (This)->lpVtbl->get_DarkCyan(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkGoldenrod(This,value) \
    ( (This)->lpVtbl->get_DarkGoldenrod(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkGray(This,value) \
    ( (This)->lpVtbl->get_DarkGray(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkGreen(This,value) \
    ( (This)->lpVtbl->get_DarkGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkKhaki(This,value) \
    ( (This)->lpVtbl->get_DarkKhaki(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkMagenta(This,value) \
    ( (This)->lpVtbl->get_DarkMagenta(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkOliveGreen(This,value) \
    ( (This)->lpVtbl->get_DarkOliveGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkOrange(This,value) \
    ( (This)->lpVtbl->get_DarkOrange(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkOrchid(This,value) \
    ( (This)->lpVtbl->get_DarkOrchid(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkRed(This,value) \
    ( (This)->lpVtbl->get_DarkRed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkSalmon(This,value) \
    ( (This)->lpVtbl->get_DarkSalmon(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkSeaGreen(This,value) \
    ( (This)->lpVtbl->get_DarkSeaGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkSlateBlue(This,value) \
    ( (This)->lpVtbl->get_DarkSlateBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkSlateGray(This,value) \
    ( (This)->lpVtbl->get_DarkSlateGray(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkTurquoise(This,value) \
    ( (This)->lpVtbl->get_DarkTurquoise(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DarkViolet(This,value) \
    ( (This)->lpVtbl->get_DarkViolet(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DeepPink(This,value) \
    ( (This)->lpVtbl->get_DeepPink(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DeepSkyBlue(This,value) \
    ( (This)->lpVtbl->get_DeepSkyBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DimGray(This,value) \
    ( (This)->lpVtbl->get_DimGray(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_DodgerBlue(This,value) \
    ( (This)->lpVtbl->get_DodgerBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Firebrick(This,value) \
    ( (This)->lpVtbl->get_Firebrick(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_FloralWhite(This,value) \
    ( (This)->lpVtbl->get_FloralWhite(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_ForestGreen(This,value) \
    ( (This)->lpVtbl->get_ForestGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Fuchsia(This,value) \
    ( (This)->lpVtbl->get_Fuchsia(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Gainsboro(This,value) \
    ( (This)->lpVtbl->get_Gainsboro(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_GhostWhite(This,value) \
    ( (This)->lpVtbl->get_GhostWhite(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Gold(This,value) \
    ( (This)->lpVtbl->get_Gold(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Goldenrod(This,value) \
    ( (This)->lpVtbl->get_Goldenrod(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Gray(This,value) \
    ( (This)->lpVtbl->get_Gray(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Green(This,value) \
    ( (This)->lpVtbl->get_Green(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_GreenYellow(This,value) \
    ( (This)->lpVtbl->get_GreenYellow(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Honeydew(This,value) \
    ( (This)->lpVtbl->get_Honeydew(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_HotPink(This,value) \
    ( (This)->lpVtbl->get_HotPink(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_IndianRed(This,value) \
    ( (This)->lpVtbl->get_IndianRed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Indigo(This,value) \
    ( (This)->lpVtbl->get_Indigo(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Ivory(This,value) \
    ( (This)->lpVtbl->get_Ivory(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Khaki(This,value) \
    ( (This)->lpVtbl->get_Khaki(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Lavender(This,value) \
    ( (This)->lpVtbl->get_Lavender(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LavenderBlush(This,value) \
    ( (This)->lpVtbl->get_LavenderBlush(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LawnGreen(This,value) \
    ( (This)->lpVtbl->get_LawnGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LemonChiffon(This,value) \
    ( (This)->lpVtbl->get_LemonChiffon(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightBlue(This,value) \
    ( (This)->lpVtbl->get_LightBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightCoral(This,value) \
    ( (This)->lpVtbl->get_LightCoral(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightCyan(This,value) \
    ( (This)->lpVtbl->get_LightCyan(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightGoldenrodYellow(This,value) \
    ( (This)->lpVtbl->get_LightGoldenrodYellow(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightGreen(This,value) \
    ( (This)->lpVtbl->get_LightGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightGray(This,value) \
    ( (This)->lpVtbl->get_LightGray(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightPink(This,value) \
    ( (This)->lpVtbl->get_LightPink(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightSalmon(This,value) \
    ( (This)->lpVtbl->get_LightSalmon(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightSeaGreen(This,value) \
    ( (This)->lpVtbl->get_LightSeaGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightSkyBlue(This,value) \
    ( (This)->lpVtbl->get_LightSkyBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightSlateGray(This,value) \
    ( (This)->lpVtbl->get_LightSlateGray(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightSteelBlue(This,value) \
    ( (This)->lpVtbl->get_LightSteelBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LightYellow(This,value) \
    ( (This)->lpVtbl->get_LightYellow(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Lime(This,value) \
    ( (This)->lpVtbl->get_Lime(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_LimeGreen(This,value) \
    ( (This)->lpVtbl->get_LimeGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Linen(This,value) \
    ( (This)->lpVtbl->get_Linen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Magenta(This,value) \
    ( (This)->lpVtbl->get_Magenta(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Maroon(This,value) \
    ( (This)->lpVtbl->get_Maroon(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumAquamarine(This,value) \
    ( (This)->lpVtbl->get_MediumAquamarine(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumBlue(This,value) \
    ( (This)->lpVtbl->get_MediumBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumOrchid(This,value) \
    ( (This)->lpVtbl->get_MediumOrchid(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumPurple(This,value) \
    ( (This)->lpVtbl->get_MediumPurple(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumSeaGreen(This,value) \
    ( (This)->lpVtbl->get_MediumSeaGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumSlateBlue(This,value) \
    ( (This)->lpVtbl->get_MediumSlateBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumSpringGreen(This,value) \
    ( (This)->lpVtbl->get_MediumSpringGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumTurquoise(This,value) \
    ( (This)->lpVtbl->get_MediumTurquoise(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MediumVioletRed(This,value) \
    ( (This)->lpVtbl->get_MediumVioletRed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MidnightBlue(This,value) \
    ( (This)->lpVtbl->get_MidnightBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MintCream(This,value) \
    ( (This)->lpVtbl->get_MintCream(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_MistyRose(This,value) \
    ( (This)->lpVtbl->get_MistyRose(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Moccasin(This,value) \
    ( (This)->lpVtbl->get_Moccasin(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_NavajoWhite(This,value) \
    ( (This)->lpVtbl->get_NavajoWhite(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Navy(This,value) \
    ( (This)->lpVtbl->get_Navy(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_OldLace(This,value) \
    ( (This)->lpVtbl->get_OldLace(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Olive(This,value) \
    ( (This)->lpVtbl->get_Olive(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_OliveDrab(This,value) \
    ( (This)->lpVtbl->get_OliveDrab(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Orange(This,value) \
    ( (This)->lpVtbl->get_Orange(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_OrangeRed(This,value) \
    ( (This)->lpVtbl->get_OrangeRed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Orchid(This,value) \
    ( (This)->lpVtbl->get_Orchid(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_PaleGoldenrod(This,value) \
    ( (This)->lpVtbl->get_PaleGoldenrod(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_PaleGreen(This,value) \
    ( (This)->lpVtbl->get_PaleGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_PaleTurquoise(This,value) \
    ( (This)->lpVtbl->get_PaleTurquoise(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_PaleVioletRed(This,value) \
    ( (This)->lpVtbl->get_PaleVioletRed(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_PapayaWhip(This,value) \
    ( (This)->lpVtbl->get_PapayaWhip(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_PeachPuff(This,value) \
    ( (This)->lpVtbl->get_PeachPuff(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Peru(This,value) \
    ( (This)->lpVtbl->get_Peru(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Pink(This,value) \
    ( (This)->lpVtbl->get_Pink(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Plum(This,value) \
    ( (This)->lpVtbl->get_Plum(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_PowderBlue(This,value) \
    ( (This)->lpVtbl->get_PowderBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Purple(This,value) \
    ( (This)->lpVtbl->get_Purple(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Red(This,value) \
    ( (This)->lpVtbl->get_Red(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_RosyBrown(This,value) \
    ( (This)->lpVtbl->get_RosyBrown(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_RoyalBlue(This,value) \
    ( (This)->lpVtbl->get_RoyalBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SaddleBrown(This,value) \
    ( (This)->lpVtbl->get_SaddleBrown(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Salmon(This,value) \
    ( (This)->lpVtbl->get_Salmon(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SandyBrown(This,value) \
    ( (This)->lpVtbl->get_SandyBrown(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SeaGreen(This,value) \
    ( (This)->lpVtbl->get_SeaGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SeaShell(This,value) \
    ( (This)->lpVtbl->get_SeaShell(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Sienna(This,value) \
    ( (This)->lpVtbl->get_Sienna(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Silver(This,value) \
    ( (This)->lpVtbl->get_Silver(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SkyBlue(This,value) \
    ( (This)->lpVtbl->get_SkyBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SlateBlue(This,value) \
    ( (This)->lpVtbl->get_SlateBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SlateGray(This,value) \
    ( (This)->lpVtbl->get_SlateGray(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Snow(This,value) \
    ( (This)->lpVtbl->get_Snow(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SpringGreen(This,value) \
    ( (This)->lpVtbl->get_SpringGreen(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_SteelBlue(This,value) \
    ( (This)->lpVtbl->get_SteelBlue(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Tan(This,value) \
    ( (This)->lpVtbl->get_Tan(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Teal(This,value) \
    ( (This)->lpVtbl->get_Teal(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Thistle(This,value) \
    ( (This)->lpVtbl->get_Thistle(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Tomato(This,value) \
    ( (This)->lpVtbl->get_Tomato(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Transparent(This,value) \
    ( (This)->lpVtbl->get_Transparent(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Turquoise(This,value) \
    ( (This)->lpVtbl->get_Turquoise(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Violet(This,value) \
    ( (This)->lpVtbl->get_Violet(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Wheat(This,value) \
    ( (This)->lpVtbl->get_Wheat(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_White(This,value) \
    ( (This)->lpVtbl->get_White(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_WhiteSmoke(This,value) \
    ( (This)->lpVtbl->get_WhiteSmoke(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_Yellow(This,value) \
    ( (This)->lpVtbl->get_Yellow(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIColorsStatics_get_YellowGreen(This,value) \
    ( (This)->lpVtbl->get_YellowGreen(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIColorsStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIColorsStatics_INTERFACE_DEFINED__) */
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IContentAutomation
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.ContentAutomation
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomation_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IContentAutomation[] = L"Microsoft.UI.IContentAutomation";
/* [object, uuid("DFA2BDCA-CBE1-53B5-B486-079B9ABFE444"), experimental, exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIContentAutomationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationHostProvider )(
        __x_ABI_CMicrosoft_CUI_CIContentAutomation * This,
        /* [retval, out] */IInspectable * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AutomationProviderRequested )(
        __x_ABI_CMicrosoft_CUI_CIContentAutomation * This,
        /* [in] */__FITypedEventHandler_2_Microsoft__CUI__CContentAutomation_Microsoft__CUI__CContentAutomationProviderRequestedEventArgs * handler,
        /* [retval, out] */EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AutomationProviderRequested )(
        __x_ABI_CMicrosoft_CUI_CIContentAutomation * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIContentAutomationVtbl;

interface __x_ABI_CMicrosoft_CUI_CIContentAutomation
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIContentAutomationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_get_AutomationHostProvider(This,value) \
    ( (This)->lpVtbl->get_AutomationHostProvider(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_add_AutomationProviderRequested(This,handler,token) \
    ( (This)->lpVtbl->add_AutomationProviderRequested(This,handler,token) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomation_remove_AutomationProviderRequested(This,token) \
    ( (This)->lpVtbl->remove_AutomationProviderRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIContentAutomation;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomation_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IContentAutomationProviderRequestedEventArgs
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.ContentAutomationProviderRequestedEventArgs
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IContentAutomationProviderRequestedEventArgs[] = L"Microsoft.UI.IContentAutomationProviderRequestedEventArgs";
/* [object, uuid("E3546970-06AD-5095-9590-FEE5D5241E49"), experimental, exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationProvider )(
        __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This,
        /* [retval, out] */IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutomationProvider )(
        __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This,
        /* [in] */IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This,
        /* [retval, out] */boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgsVtbl;

interface __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_get_AutomationProvider(This,value) \
    ( (This)->lpVtbl->get_AutomationProvider(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_put_AutomationProvider(This,value) \
    ( (This)->lpVtbl->put_AutomationProvider(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomationProviderRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IContentAutomationStatics
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.ContentAutomation
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IContentAutomationStatics[] = L"Microsoft.UI.IContentAutomationStatics";
/* [object, uuid("5B520E50-FA18-5105-94FD-C9A8BCEE57F1"), experimental, exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIContentAutomationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForContent )(
        __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CIUIContentRoot * content,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CIContentAutomation * * result
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIContentAutomationStaticsVtbl;

interface __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIContentAutomationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_CreateForContent(This,content,result) \
    ( (This)->lpVtbl->CreateForContent(This,content,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIContentAutomationStatics;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIContentAutomationStatics_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IUIContentRoot
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.UIContentRoot
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRoot_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRoot_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IUIContentRoot[] = L"Microsoft.UI.IUIContentRoot";
/* [object, uuid("F47C106F-C5DD-56D1-92C0-90861A2F7287"), experimental, exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIUIContentRootVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIUIContentRootVtbl;

interface __x_ABI_CMicrosoft_CUI_CIUIContentRoot
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIUIContentRootVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIUIContentRoot;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRoot_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IUIContentRootFactory
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.UIContentRoot
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IUIContentRootFactory[] = L"Microsoft.UI.IUIContentRootFactory";
/* [object, uuid("A9C562D7-4298-5DA9-8150-D777B532CC4D"), experimental, exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIUIContentRootFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory * This,
        /* [in] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland * island,
        /* [in] */IInspectable * inputSite,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CIUIContentRoot * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIUIContentRootFactoryVtbl;

interface __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIUIContentRootFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_CreateInstance(This,island,inputSite,value) \
    ( (This)->lpVtbl->CreateInstance(This,island,inputSite,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIUIContentRootFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRootFactory_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IUIContentRootPartner
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.UIContentRoot
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IUIContentRootPartner[] = L"Microsoft.UI.IUIContentRootPartner";
/* [object, uuid("1A77AE47-6810-52A8-95C4-F92F1F0758A7"), experimental, exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIUIContentRootPartnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputSite )(
        __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner * This,
        /* [retval, out] */IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Island )(
        __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CComposition_CICompositionIsland * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIUIContentRootPartnerVtbl;

interface __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIUIContentRootPartnerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_get_InputSite(This,value) \
    ( (This)->lpVtbl->get_InputSite(This,value) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_get_Island(This,value) \
    ( (This)->lpVtbl->get_Island(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIUIContentRootPartner;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRootPartner_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Microsoft.UI.IUIContentRoot_ContentAutomation
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Microsoft.UI.UIContentRoot
 *
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_INTERFACE_DEFINED__)
#define ____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_UI_IUIContentRoot_ContentAutomation[] = L"Microsoft.UI.IUIContentRoot_ContentAutomation";
/* [object, uuid("A78CEA0C-7CC5-592E-B628-E21F5111DEB2"), experimental, exclusiveto, contract] */
typedef struct __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Automation )(
        __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation * This,
        /* [retval, out] */__x_ABI_CMicrosoft_CUI_CIContentAutomation * * value
        );
    END_INTERFACE
    
} __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomationVtbl;

interface __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_get_Automation(This,value) \
    ( (This)->lpVtbl->get_Automation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation;
#endif /* !defined(____x_ABI_CMicrosoft_CUI_CIUIContentRoot__ContentAutomation_INTERFACE_DEFINED__) */
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.ColorHelper
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.IColorHelperStatics2 interface starting with version 4.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *   Static Methods exist on the Microsoft.UI.IColorHelperStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IColorHelper ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_ColorHelper_DEFINED
#define RUNTIMECLASS_Microsoft_UI_ColorHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_ColorHelper[] = L"Microsoft.UI.ColorHelper";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.Colors
 *
 * Introduced to Microsoft.UI.Xaml.WinUIContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.IColorsStatics interface starting with version 1.0 of the Microsoft.UI.Xaml.WinUIContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IColors ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Microsoft_UI_Colors_DEFINED
#define RUNTIMECLASS_Microsoft_UI_Colors_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_Colors[] = L"Microsoft.UI.Colors";
#endif
#endif // MICROSOFT_UI_XAML_WINUICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.ContentAutomation
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Microsoft.UI.IContentAutomationStatics interface starting with version 1.0 of the Microsoft.UI.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IContentAutomation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_ContentAutomation_DEFINED
#define RUNTIMECLASS_Microsoft_UI_ContentAutomation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_ContentAutomation[] = L"Microsoft.UI.ContentAutomation";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.ContentAutomationProviderRequestedEventArgs
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IContentAutomationProviderRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_ContentAutomationProviderRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Microsoft_UI_ContentAutomationProviderRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_ContentAutomationProviderRequestedEventArgs[] = L"Microsoft.UI.ContentAutomationProviderRequestedEventArgs";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Microsoft.UI.UIContentRoot
 *
 * Introduced to Microsoft.UI.LiftedContract in version 1.0
 *
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Microsoft.UI.IUIContentRootFactory interface starting with version 1.0 of the Microsoft.UI.LiftedContract API contract
 *
 * Class implements the following interfaces:
 *    Microsoft.UI.IUIContentRoot ** Default Interface **
 *    Microsoft.UI.IUIContentRootPartner
 *    Microsoft.UI.IUIContentRoot_ContentAutomation
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

#ifndef RUNTIMECLASS_Microsoft_UI_UIContentRoot_DEFINED
#define RUNTIMECLASS_Microsoft_UI_UIContentRoot_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_UI_UIContentRoot[] = L"Microsoft.UI.UIContentRoot";
#endif
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#endif // MICROSOFT_UI_LIFTEDCONTRACT_VERSION >= 0x10000



#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __Microsoft2EUI_p_h__

#endif // __Microsoft2EUI_h__
