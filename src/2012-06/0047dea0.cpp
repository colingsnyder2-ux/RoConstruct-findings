// roc 2012-06 0047dea0  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::?$basic_filesystem_error  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047dea0
//
// 0047dea0  6aff                 push -1
// 0047dea2  68c8a1a900           push 0xa9a1c8
// 0047dea7  64a100000000         mov eax, dword ptr fs:[0]
// 0047dead  50                   push eax
// 0047deae  64892500000000       mov dword ptr fs:[0], esp
// 0047deb5  83ec0c               sub esp, 0xc
// 0047deb8  53                   push ebx
// 0047deb9  33db                 xor ebx, ebx
// 0047debb  56                   push esi
// 0047debc  895c2408             mov dword ptr [esp + 8], ebx
// 0047dec0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0047dec4  3bcb                 cmp ecx, ebx
// 0047dec6  7405                 je 0x47decd
// 0047dec8  8d41f8               lea eax, [ecx - 8]
// 0047decb  eb02                 jmp 0x47decf
// 0047decd  33c0                 xor eax, eax
// 0047decf  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0047ded2  8d542408             lea edx, [esp + 8]
// 0047ded6  83c010               add eax, 0x10
// 0047ded9  52                   push edx
// 0047deda  68a837b400           push 0xb437a8
// 0047dedf  50                   push eax
// 0047dee0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0047dee3  ffd0                 call eax
// 0047dee5  8bf0                 mov esi, eax
// 0047dee7  3bf3                 cmp esi, ebx
// 0047dee9  7d2d                 jge 0x47df18
// 0047deeb  8b442408             mov eax, dword ptr [esp + 8]
// 0047deef  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0047def7  3bc3                 cmp eax, ebx
// 0047def9  7408                 je 0x47df03
// 0047defb  8b08                 mov ecx, dword ptr [eax]
// 0047defd  8b5108               mov edx, dword ptr [ecx + 8]
// 0047df00  50                   push eax
// 0047df01  ffd2                 call edx
// 0047df03  8bc6                 mov eax, esi
// 0047df05  5e                   pop esi
// 0047df06  5b                   pop ebx
// 0047df07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047df0b  64890d00000000       mov dword ptr fs:[0], ecx
// 0047df12  83c418               add esp, 0x18
// 0047df15  c20800               ret 8
// 0047df18  57                   push edi
// 0047df19  895c2410             mov dword ptr [esp + 0x10], ebx
// 0047df1d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047df21  8b08                 mov ecx, dword ptr [eax]
// 0047df23  8d542410             lea edx, [esp + 0x10]
// 0047df27  52                   push edx
// 0047df28  68e8ccc000           push 0xc0cce8
// 0047df2d  68d8ccc000           push 0xc0ccd8
// 0047df32  50                   push eax
// 0047df33  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047df36  c644243001           mov byte ptr [esp + 0x30], 1
// 0047df3b  ffd0                 call eax
// 0047df3d  8bf8                 mov edi, eax
// 0047df3f  3bfb                 cmp edi, ebx
// 0047df41  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047df45  7c54                 jl 0x47df9b
// 0047df47  8b742428             mov esi, dword ptr [esp + 0x28]
// 0047df4b  8b08                 mov ecx, dword ptr [eax]
// 0047df4d  8b5178               mov edx, dword ptr [ecx + 0x78]
// 0047df50  56                   push esi
// 0047df51  50                   push eax
// 0047df52  ffd2                 call edx
// 0047df54  85c0                 test eax, eax
// 0047df56  7c3f                 jl 0x47df97
// 0047df58  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047df5c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047df60  8b08                 mov ecx, dword ptr [eax]
// 0047df62  8d542414             lea edx, [esp + 0x14]
// 0047df66  52                   push edx
// 0047df67  68c8ccc000           push 0xc0ccc8
// 0047df6c  68c8ccc000           push 0xc0ccc8
// 0047df71  50                   push eax
// 0047df72  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047df75  c644243002           mov byte ptr [esp + 0x30], 2
// 0047df7a  ffd0                 call eax
// 0047df7c  8bf8                 mov edi, eax
// 0047df7e  3bfb                 cmp edi, ebx
// 0047df80  7d57                 jge 0x47dfd9
// 0047df82  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047df86  c644242001           mov byte ptr [esp + 0x20], 1
// 0047df8b  3bc3                 cmp eax, ebx
// 0047df8d  7408                 je 0x47df97
// 0047df8f  8b08                 mov ecx, dword ptr [eax]
// 0047df91  8b5108               mov edx, dword ptr [ecx + 8]
// 0047df94  50                   push eax
// 0047df95  ffd2                 call edx
// 0047df97  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047df9b  885c2420             mov byte ptr [esp + 0x20], bl
// 0047df9f  3bc3                 cmp eax, ebx
// 0047dfa1  7408                 je 0x47dfab
// 0047dfa3  8b08                 mov ecx, dword ptr [eax]
// 0047dfa5  8b5108               mov edx, dword ptr [ecx + 8]
// 0047dfa8  50                   push eax
// 0047dfa9  ffd2                 call edx
// 0047dfab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047dfaf  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0047dfb7  3bc3                 cmp eax, ebx
// 0047dfb9  7408                 je 0x47dfc3
// 0047dfbb  8b08                 mov ecx, dword ptr [eax]
// 0047dfbd  8b5108               mov edx, dword ptr [ecx + 8]
// 0047dfc0  50                   push eax
// 0047dfc1  ffd2                 call edx
// 0047dfc3  8bc7                 mov eax, edi
// 0047dfc5  5f                   pop edi
// 0047dfc6  5e                   pop esi
// 0047dfc7  5b                   pop ebx
// 0047dfc8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047dfcc  64890d00000000       mov dword ptr fs:[0], ecx
// 0047dfd3  83c418               add esp, 0x18
// 0047dfd6  c20800               ret 8
// 0047dfd9  8b06                 mov eax, dword ptr [esi]
// 0047dfdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047dfdf  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0047dfe3  8b11                 mov edx, dword ptr [ecx]
// 0047dfe5  53                   push ebx
// 0047dfe6  56                   push esi
// 0047dfe7  50                   push eax
// 0047dfe8  8b4214               mov eax, dword ptr [edx + 0x14]
// 0047dfeb  51                   push ecx
// 0047dfec  ffd0                 call eax
// 0047dfee  8bf0                 mov esi, eax
// 0047dff0  3bf3                 cmp esi, ebx
// 0047dff2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047dff6  c644242001           mov byte ptr [esp + 0x20], 1
// 0047dffb  7d4e                 jge 0x47e04b
// 0047dffd  3bc3                 cmp eax, ebx
// 0047dfff  7408                 je 0x47e009
// 0047e001  8b08                 mov ecx, dword ptr [eax]
// 0047e003  8b5108               mov edx, dword ptr [ecx + 8]
// 0047e006  50                   push eax
// 0047e007  ffd2                 call edx
// 0047e009  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047e00d  885c2420             mov byte ptr [esp + 0x20], bl
// 0047e011  3bc3                 cmp eax, ebx
// 0047e013  7408                 je 0x47e01d
// 0047e015  8b08                 mov ecx, dword ptr [eax]
// 0047e017  8b5108               mov edx, dword ptr [ecx + 8]
// 0047e01a  50                   push eax
// 0047e01b  ffd2                 call edx
// 0047e01d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047e021  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0047e029  3bc3                 cmp eax, ebx
// 0047e02b  7408                 je 0x47e035
// 0047e02d  8b08                 mov ecx, dword ptr [eax]
// 0047e02f  8b5108               mov edx, dword ptr [ecx + 8]
// 0047e032  50                   push eax
// 0047e033  ffd2                 call edx
// 0047e035  5f                   pop edi
// 0047e036  8bc6                 mov eax, esi
// 0047e038  5e                   pop esi
// 0047e039  5b                   pop ebx
// 0047e03a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047e03e  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e045  83c418               add esp, 0x18
// 0047e048  c20800               ret 8
// 0047e04b  3bc3                 cmp eax, ebx
// 0047e04d  7408                 je 0x47e057
// 0047e04f  8b08                 mov ecx, dword ptr [eax]
// 0047e051  8b5108               mov edx, dword ptr [ecx + 8]
// 0047e054  50                   push eax
// 0047e055  ffd2                 call edx
// 0047e057  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047e05b  885c2420             mov byte ptr [esp + 0x20], bl
// 0047e05f  3bc3                 cmp eax, ebx
// 0047e061  7408                 je 0x47e06b
// 0047e063  8b08                 mov ecx, dword ptr [eax]
// 0047e065  8b5108               mov edx, dword ptr [ecx + 8]
// 0047e068  50                   push eax
// 0047e069  ffd2                 call edx
// 0047e06b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047e06f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0047e077  3bc3                 cmp eax, ebx
// 0047e079  7408                 je 0x47e083
// 0047e07b  8b08                 mov ecx, dword ptr [eax]
// 0047e07d  8b5108               mov edx, dword ptr [ecx + 8]
// 0047e080  50                   push eax
// 0047e081  ffd2                 call edx
// 0047e083  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047e087  5f                   pop edi
// 0047e088  5e                   pop esi
// 0047e089  33c0                 xor eax, eax
// 0047e08b  5b                   pop ebx
// 0047e08c  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e093  83c418               add esp, 0x18
// 0047e096  c20800               ret 8
// copied from an identical function in another client (function ?GetOurUrl@?$CSiteLock@VCLauncher@@@@QAEJAAUCComBSTR@@AAK@Z)

// from server: 99% by colin
// roc 2008-06 00403210  unit: CSiteLock<CLauncher>::GetOurUrl  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403210
//
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD

typedef unsigned long DWORD;
typedef unsigned long ULONG;
typedef long HRESULT;
typedef wchar_t OLECHAR;
struct GUID { unsigned long a; unsigned short b, c; unsigned char d[8]; };
#define FAILED(hr) ((HRESULT)(hr) < 0)
#define S_OK 0

extern "C" const GUID IID_IServiceProvider;
extern "C" const GUID IID_IWebBrowser2;
extern "C" const GUID IID_IInternetSecurityManager;
extern "C" const GUID SID_SWebBrowserApp;
extern "C" const GUID SID_SInternetSecurityManager;

struct IUnknown {
    virtual HRESULT __stdcall QueryInterface(const GUID&, void**) = 0;
    virtual ULONG __stdcall AddRef() = 0;
    virtual ULONG __stdcall Release() = 0;
};

struct IServiceProvider : IUnknown {
    virtual HRESULT __stdcall QueryService(const GUID&, const GUID&, void**) = 0;
};

struct IWebBrowser2 : IUnknown {
    virtual void __stdcall s3() = 0; virtual void __stdcall s4() = 0; virtual void __stdcall s5() = 0;
    virtual void __stdcall s6() = 0; virtual void __stdcall s7() = 0; virtual void __stdcall s8() = 0;
    virtual void __stdcall s9() = 0; virtual void __stdcall s10() = 0; virtual void __stdcall s11() = 0;
    virtual void __stdcall s12() = 0; virtual void __stdcall s13() = 0; virtual void __stdcall s14() = 0;
    virtual void __stdcall s15() = 0; virtual void __stdcall s16() = 0; virtual void __stdcall s17() = 0;
    virtual void __stdcall s18() = 0; virtual void __stdcall s19() = 0; virtual void __stdcall s20() = 0;
    virtual void __stdcall s21() = 0; virtual void __stdcall s22() = 0; virtual void __stdcall s23() = 0;
    virtual void __stdcall s24() = 0; virtual void __stdcall s25() = 0; virtual void __stdcall s26() = 0;
    virtual void __stdcall s27() = 0; virtual void __stdcall s28() = 0; virtual void __stdcall s29() = 0;
    virtual HRESULT __stdcall get_LocationURL(OLECHAR**) = 0;
};

struct IInternetSecurityManager : IUnknown {
    virtual void __stdcall s3() = 0;
    virtual void __stdcall s4() = 0;
    virtual HRESULT __stdcall MapUrlToZone(const OLECHAR*, DWORD*, DWORD) = 0;
};

struct IObjectWithSite : IUnknown {
    virtual HRESULT __stdcall SetSite(IUnknown*) = 0;
    virtual HRESULT __stdcall GetSite(const GUID&, void**) = 0;
};

struct CComBSTR {
    OLECHAR* m_str;
    OLECHAR** operator&() { return &m_str; }
    operator OLECHAR*() const { return m_str; }
};

template <class T>
struct CComPtr {
    T* p;
    CComPtr() : p(0) {}
    ~CComPtr() { if (p) p->Release(); }
    T* operator->() const { return p; }
    T** operator&() { return &p; }
};

template <class T>
class CSiteLock {
public:
    virtual void lock0();
    void* reserved;
    HRESULT GetOurUrl(CComBSTR& bstrURL, DWORD& dwZone)
    {
        HRESULT hr = S_OK;
        CComPtr<IServiceProvider> spSrvProv;

        T* pT = static_cast<T*>(this);
        hr = pT->GetSite(IID_IServiceProvider, (void**)&spSrvProv);
        if (FAILED(hr))
            return hr;

        CComPtr<IWebBrowser2> spWebBrowser;
        hr = spSrvProv->QueryService(SID_SWebBrowserApp, IID_IWebBrowser2, (void**)&spWebBrowser);
        if (FAILED(hr))
            return hr;

        if (FAILED(spWebBrowser->get_LocationURL(&bstrURL)))
            return hr;

        CComPtr<IInternetSecurityManager> spInetSecMgr;
        hr = spSrvProv->QueryService(SID_SInternetSecurityManager, IID_IInternetSecurityManager, (void**)&spInetSecMgr);
        if (FAILED(hr))
            return hr;

        hr = spInetSecMgr->MapUrlToZone(bstrURL, &dwZone, 0);
        if (FAILED(hr))
            return hr;
        return S_OK;
    }
};

struct Root {
    virtual void root0();
    long m_dwRef;
};

class CLauncher : public Root, public CSiteLock<CLauncher>, public IObjectWithSite {
public:
    HRESULT __stdcall QueryInterface(const GUID&, void**);
    ULONG __stdcall AddRef();
    ULONG __stdcall Release();
    HRESULT __stdcall SetSite(IUnknown*);
    HRESULT __stdcall GetSite(const GUID&, void**);
};

template class CSiteLock<CLauncher>;