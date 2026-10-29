// roc 2010-06 0046d130  unit: CPublishAsPlaceDialog  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d130
//
// 0046d130  b801000000           mov eax, 1
// 0046d135  8405f020c000         test byte ptr [0xc020f0], al
// 0046d13b  7515                 jne 0x46d152
// 0046d13d  0905f020c000         or dword ptr [0xc020f0], eax
// 0046d143  33c0                 xor eax, eax
// 0046d145  33c9                 xor ecx, ecx
// 0046d147  a3004eb800           mov dword ptr [0xb84e00], eax
// 0046d14c  890d044eb800         mov dword ptr [0xb84e04], ecx
// 0046d152  b8f44db800           mov eax, 0xb84df4
// 0046d157  c3                   ret 
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