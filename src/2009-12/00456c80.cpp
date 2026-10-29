// roc 2009-12 00456c80  unit: VCWorkspace::?$CComObject  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00456c80
//
// 00456c80  6aff                 push -1
// 00456c82  6898bc9200           push 0x92bc98
// 00456c87  64a100000000         mov eax, dword ptr fs:[0]
// 00456c8d  50                   push eax
// 00456c8e  64892500000000       mov dword ptr fs:[0], esp
// 00456c95  83ec0c               sub esp, 0xc
// 00456c98  53                   push ebx
// 00456c99  33db                 xor ebx, ebx
// 00456c9b  56                   push esi
// 00456c9c  895c2408             mov dword ptr [esp + 8], ebx
// 00456ca0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00456ca4  3bcb                 cmp ecx, ebx
// 00456ca6  7405                 je 0x456cad
// 00456ca8  8d41f8               lea eax, [ecx - 8]
// 00456cab  eb02                 jmp 0x456caf
// 00456cad  33c0                 xor eax, eax
// 00456caf  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00456cb2  8d542408             lea edx, [esp + 8]
// 00456cb6  83c010               add eax, 0x10
// 00456cb9  52                   push edx
// 00456cba  68b4f89900           push 0x99f8b4
// 00456cbf  50                   push eax
// 00456cc0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00456cc3  ffd0                 call eax
// 00456cc5  8bf0                 mov esi, eax
// 00456cc7  3bf3                 cmp esi, ebx
// 00456cc9  7d2d                 jge 0x456cf8
// 00456ccb  8b442408             mov eax, dword ptr [esp + 8]
// 00456ccf  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00456cd7  3bc3                 cmp eax, ebx
// 00456cd9  7408                 je 0x456ce3
// 00456cdb  8b08                 mov ecx, dword ptr [eax]
// 00456cdd  8b5108               mov edx, dword ptr [ecx + 8]
// 00456ce0  50                   push eax
// 00456ce1  ffd2                 call edx
// 00456ce3  8bc6                 mov eax, esi
// 00456ce5  5e                   pop esi
// 00456ce6  5b                   pop ebx
// 00456ce7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00456ceb  64890d00000000       mov dword ptr fs:[0], ecx
// 00456cf2  83c418               add esp, 0x18
// 00456cf5  c20800               ret 8
// 00456cf8  57                   push edi
// 00456cf9  895c2410             mov dword ptr [esp + 0x10], ebx
// 00456cfd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00456d01  8b08                 mov ecx, dword ptr [eax]
// 00456d03  8d542410             lea edx, [esp + 0x10]
// 00456d07  52                   push edx
// 00456d08  68b0169f00           push 0x9f16b0
// 00456d0d  68a0169f00           push 0x9f16a0
// 00456d12  50                   push eax
// 00456d13  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00456d16  c644243001           mov byte ptr [esp + 0x30], 1
// 00456d1b  ffd0                 call eax
// 00456d1d  8bf8                 mov edi, eax
// 00456d1f  3bfb                 cmp edi, ebx
// 00456d21  8b442410             mov eax, dword ptr [esp + 0x10]
// 00456d25  7c54                 jl 0x456d7b
// 00456d27  8b742428             mov esi, dword ptr [esp + 0x28]
// 00456d2b  8b08                 mov ecx, dword ptr [eax]
// 00456d2d  8b5178               mov edx, dword ptr [ecx + 0x78]
// 00456d30  56                   push esi
// 00456d31  50                   push eax
// 00456d32  ffd2                 call edx
// 00456d34  85c0                 test eax, eax
// 00456d36  7c3f                 jl 0x456d77
// 00456d38  895c2414             mov dword ptr [esp + 0x14], ebx
// 00456d3c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00456d40  8b08                 mov ecx, dword ptr [eax]
// 00456d42  8d542414             lea edx, [esp + 0x14]
// 00456d46  52                   push edx
// 00456d47  6890169f00           push 0x9f1690
// 00456d4c  6890169f00           push 0x9f1690
// 00456d51  50                   push eax
// 00456d52  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00456d55  c644243002           mov byte ptr [esp + 0x30], 2
// 00456d5a  ffd0                 call eax
// 00456d5c  8bf8                 mov edi, eax
// 00456d5e  3bfb                 cmp edi, ebx
// 00456d60  7d57                 jge 0x456db9
// 00456d62  8b442414             mov eax, dword ptr [esp + 0x14]
// 00456d66  c644242001           mov byte ptr [esp + 0x20], 1
// 00456d6b  3bc3                 cmp eax, ebx
// 00456d6d  7408                 je 0x456d77
// 00456d6f  8b08                 mov ecx, dword ptr [eax]
// 00456d71  8b5108               mov edx, dword ptr [ecx + 8]
// 00456d74  50                   push eax
// 00456d75  ffd2                 call edx
// 00456d77  8b442410             mov eax, dword ptr [esp + 0x10]
// 00456d7b  885c2420             mov byte ptr [esp + 0x20], bl
// 00456d7f  3bc3                 cmp eax, ebx
// 00456d81  7408                 je 0x456d8b
// 00456d83  8b08                 mov ecx, dword ptr [eax]
// 00456d85  8b5108               mov edx, dword ptr [ecx + 8]
// 00456d88  50                   push eax
// 00456d89  ffd2                 call edx
// 00456d8b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00456d8f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00456d97  3bc3                 cmp eax, ebx
// 00456d99  7408                 je 0x456da3
// 00456d9b  8b08                 mov ecx, dword ptr [eax]
// 00456d9d  8b5108               mov edx, dword ptr [ecx + 8]
// 00456da0  50                   push eax
// 00456da1  ffd2                 call edx
// 00456da3  8bc7                 mov eax, edi
// 00456da5  5f                   pop edi
// 00456da6  5e                   pop esi
// 00456da7  5b                   pop ebx
// 00456da8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00456dac  64890d00000000       mov dword ptr fs:[0], ecx
// 00456db3  83c418               add esp, 0x18
// 00456db6  c20800               ret 8
// 00456db9  8b06                 mov eax, dword ptr [esi]
// 00456dbb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00456dbf  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00456dc3  8b11                 mov edx, dword ptr [ecx]
// 00456dc5  53                   push ebx
// 00456dc6  56                   push esi
// 00456dc7  50                   push eax
// 00456dc8  8b4214               mov eax, dword ptr [edx + 0x14]
// 00456dcb  51                   push ecx
// 00456dcc  ffd0                 call eax
// 00456dce  8bf0                 mov esi, eax
// 00456dd0  3bf3                 cmp esi, ebx
// 00456dd2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00456dd6  c644242001           mov byte ptr [esp + 0x20], 1
// 00456ddb  7d4e                 jge 0x456e2b
// 00456ddd  3bc3                 cmp eax, ebx
// 00456ddf  7408                 je 0x456de9
// 00456de1  8b08                 mov ecx, dword ptr [eax]
// 00456de3  8b5108               mov edx, dword ptr [ecx + 8]
// 00456de6  50                   push eax
// 00456de7  ffd2                 call edx
// 00456de9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00456ded  885c2420             mov byte ptr [esp + 0x20], bl
// 00456df1  3bc3                 cmp eax, ebx
// 00456df3  7408                 je 0x456dfd
// 00456df5  8b08                 mov ecx, dword ptr [eax]
// 00456df7  8b5108               mov edx, dword ptr [ecx + 8]
// 00456dfa  50                   push eax
// 00456dfb  ffd2                 call edx
// 00456dfd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00456e01  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00456e09  3bc3                 cmp eax, ebx
// 00456e0b  7408                 je 0x456e15
// 00456e0d  8b08                 mov ecx, dword ptr [eax]
// 00456e0f  8b5108               mov edx, dword ptr [ecx + 8]
// 00456e12  50                   push eax
// 00456e13  ffd2                 call edx
// 00456e15  5f                   pop edi
// 00456e16  8bc6                 mov eax, esi
// 00456e18  5e                   pop esi
// 00456e19  5b                   pop ebx
// 00456e1a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00456e1e  64890d00000000       mov dword ptr fs:[0], ecx
// 00456e25  83c418               add esp, 0x18
// 00456e28  c20800               ret 8
// 00456e2b  3bc3                 cmp eax, ebx
// 00456e2d  7408                 je 0x456e37
// 00456e2f  8b08                 mov ecx, dword ptr [eax]
// 00456e31  8b5108               mov edx, dword ptr [ecx + 8]
// 00456e34  50                   push eax
// 00456e35  ffd2                 call edx
// 00456e37  8b442410             mov eax, dword ptr [esp + 0x10]
// 00456e3b  885c2420             mov byte ptr [esp + 0x20], bl
// 00456e3f  3bc3                 cmp eax, ebx
// 00456e41  7408                 je 0x456e4b
// 00456e43  8b08                 mov ecx, dword ptr [eax]
// 00456e45  8b5108               mov edx, dword ptr [ecx + 8]
// 00456e48  50                   push eax
// 00456e49  ffd2                 call edx
// 00456e4b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00456e4f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00456e57  3bc3                 cmp eax, ebx
// 00456e59  7408                 je 0x456e63
// 00456e5b  8b08                 mov ecx, dword ptr [eax]
// 00456e5d  8b5108               mov edx, dword ptr [ecx + 8]
// 00456e60  50                   push eax
// 00456e61  ffd2                 call edx
// 00456e63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00456e67  5f                   pop edi
// 00456e68  5e                   pop esi
// 00456e69  33c0                 xor eax, eax
// 00456e6b  5b                   pop ebx
// 00456e6c  64890d00000000       mov dword ptr fs:[0], ecx
// 00456e73  83c418               add esp, 0x18
// 00456e76  c20800               ret 8
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