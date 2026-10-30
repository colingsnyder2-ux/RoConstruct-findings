// roc 2012-06 0048cef0  unit: CRobloxPlayerDlg  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048cef0
//
// 0048cef0  b801000000           mov eax, 1
// 0048cef5  84057ca6e100         test byte ptr [0xe1a67c], al
// 0048cefb  7515                 jne 0x48cf12
// 0048cefd  09057ca6e100         or dword ptr [0xe1a67c], eax
// 0048cf03  33c0                 xor eax, eax
// 0048cf05  33c9                 xor ecx, ecx
// 0048cf07  a32cf8d600           mov dword ptr [0xd6f82c], eax
// 0048cf0c  890d30f8d600         mov dword ptr [0xd6f830], ecx
// 0048cf12  b820f8d600           mov eax, 0xd6f820
// 0048cf17  c3                   ret 
// copied from an identical function in another client (function ?GetDHtmlEventMap@EmptyDHtmlEventMap@@MAEPBUDHtmlEventMapEntry@@XZ)

// from server: 100% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /Zp4
// roc-lang: cpp
// afxver_.h sets _AFX_PACKING=4; afxdhtml.h applies that SDK ABI. The fixed
// packing option preserves its genuine declarations without source pragmas.
// Consumed WinSDK declarations; all COM payloads are passed by pointer/ref.
typedef long HRESULT;typedef unsigned long ULONG;typedef unsigned int UINT;
typedef ULONG LCID;typedef long DISPID;typedef wchar_t OLECHAR;
typedef unsigned short WORD;typedef const char*LPCTSTR;
struct _GUID;typedef const _GUID&REFIID;
struct ITypeInfo;struct tagDISPPARAMS;typedef tagDISPPARAMS DISPPARAMS;
struct tagVARIANT;typedef tagVARIANT VARIANT;
struct tagEXCEPINFO;typedef tagEXCEPINFO EXCEPINFO;
#define NULL 0
// Genuine consumed MFC90 RTM afxdhtml.h declarations. Both empty bases are
// explicitly present in that SDK to give the event member-pointer its real
// multiple-inheritance representation; no placeholder virtual methods.
enum DHtmlEventMapEntryType {DHTMLEVENTMAPENTRY_NAME,DHTMLEVENTMAPENTRY_CLASS,
 DHTMLEVENTMAPENTRY_TAG,DHTMLEVENTMAPENTRY_ELEMENT,DHTMLEVENTMAPENTRY_CONTROL,DHTMLEVENTMAPENTRY_END};
struct DHtmlEventMapEntry;
class CDHtmlSinkHandlerBase1 {};
class CDHtmlSinkHandlerBase2 {};
class CDHtmlSinkHandler:public CDHtmlSinkHandlerBase1,public CDHtmlSinkHandlerBase2 {
public:
 virtual __declspec(nothrow) HRESULT __stdcall CDHtmlSinkHandlerQueryInterface(REFIID riid,void**ppvObject)=0;
 virtual ULONG __stdcall AddRef(void)=0;
 virtual ULONG __stdcall Release(void)=0;
 virtual __declspec(nothrow) HRESULT __stdcall GetTypeInfoCount(UINT*pctinfo)=0;
 virtual __declspec(nothrow) HRESULT __stdcall GetTypeInfo(UINT iTInfo,LCID lcid,ITypeInfo**ppTInfo)=0;
 virtual __declspec(nothrow) HRESULT __stdcall GetIDsOfNames(REFIID riid,OLECHAR**rgszNames,UINT cNames,LCID lcid,DISPID*rgDispId)=0;
 virtual __declspec(nothrow) HRESULT __stdcall Invoke(DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS*pDispParams,VARIANT*pVarResult,EXCEPINFO*pExcepInfo,UINT*puArgErr)=0;
 virtual const DHtmlEventMapEntry*GetDHtmlEventMap()=0;
};
struct DHtmlEventMapEntry {
 DHtmlEventMapEntryType nType;
 DISPID dispId;
 LPCTSTR szName;
 void(__stdcall CDHtmlSinkHandler::*pfnEventFunc)();
};
typedef void(__stdcall CDHtmlSinkHandler::*DHEVTFUNCCONTROL)();
// Only the borrowed event-sink interface is needed by this stateless getter.
// The complete containing dialog is neither allocated nor represented.
class EmptyDHtmlEventMap:public CDHtmlSinkHandler {
protected:virtual const DHtmlEventMapEntry*GetDHtmlEventMap();
};
const DHtmlEventMapEntry*EmptyDHtmlEventMap::GetDHtmlEventMap() {
 static const DHtmlEventMapEntry _dhtmlEventEntries[]={
  {DHTMLEVENTMAPENTRY_END,0,NULL,(DHEVTFUNCCONTROL)NULL}
 };
 return _dhtmlEventEntries;
}
typedef char NativeEventEntrySize[sizeof(DHtmlEventMapEntry)==20?1:-1];
typedef char NativeEventMemberSize[sizeof(DHEVTFUNCCONTROL)==8?1:-1];