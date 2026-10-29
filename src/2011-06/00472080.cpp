// roc 2011-06 00472080  unit: VCRobloxDoc::?$VerbBinder  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00472080
//
// 00472080  6aff                 push -1
// 00472082  68c8d19c00           push 0x9cd1c8
// 00472087  64a100000000         mov eax, dword ptr fs:[0]
// 0047208d  50                   push eax
// 0047208e  64892500000000       mov dword ptr fs:[0], esp
// 00472095  83ec0c               sub esp, 0xc
// 00472098  53                   push ebx
// 00472099  33db                 xor ebx, ebx
// 0047209b  56                   push esi
// 0047209c  895c2408             mov dword ptr [esp + 8], ebx
// 004720a0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004720a4  3bcb                 cmp ecx, ebx
// 004720a6  7405                 je 0x4720ad
// 004720a8  8d41f8               lea eax, [ecx - 8]
// 004720ab  eb02                 jmp 0x4720af
// 004720ad  33c0                 xor eax, eax
// 004720af  8b4810               mov ecx, dword ptr [eax + 0x10]
// 004720b2  8d542408             lea edx, [esp + 8]
// 004720b6  83c010               add eax, 0x10
// 004720b9  52                   push edx
// 004720ba  681cbaa500           push 0xa5ba1c
// 004720bf  50                   push eax
// 004720c0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004720c3  ffd0                 call eax
// 004720c5  8bf0                 mov esi, eax
// 004720c7  3bf3                 cmp esi, ebx
// 004720c9  7d2d                 jge 0x4720f8
// 004720cb  8b442408             mov eax, dword ptr [esp + 8]
// 004720cf  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004720d7  3bc3                 cmp eax, ebx
// 004720d9  7408                 je 0x4720e3
// 004720db  8b08                 mov ecx, dword ptr [eax]
// 004720dd  8b5108               mov edx, dword ptr [ecx + 8]
// 004720e0  50                   push eax
// 004720e1  ffd2                 call edx
// 004720e3  8bc6                 mov eax, esi
// 004720e5  5e                   pop esi
// 004720e6  5b                   pop ebx
// 004720e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004720eb  64890d00000000       mov dword ptr fs:[0], ecx
// 004720f2  83c418               add esp, 0x18
// 004720f5  c20800               ret 8
// 004720f8  57                   push edi
// 004720f9  895c2410             mov dword ptr [esp + 0x10], ebx
// 004720fd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00472101  8b08                 mov ecx, dword ptr [eax]
// 00472103  8d542410             lea edx, [esp + 0x10]
// 00472107  52                   push edx
// 00472108  680816ac00           push 0xac1608
// 0047210d  68f815ac00           push 0xac15f8
// 00472112  50                   push eax
// 00472113  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00472116  c644243001           mov byte ptr [esp + 0x30], 1
// 0047211b  ffd0                 call eax
// 0047211d  8bf8                 mov edi, eax
// 0047211f  3bfb                 cmp edi, ebx
// 00472121  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472125  7c54                 jl 0x47217b
// 00472127  8b742428             mov esi, dword ptr [esp + 0x28]
// 0047212b  8b08                 mov ecx, dword ptr [eax]
// 0047212d  8b5178               mov edx, dword ptr [ecx + 0x78]
// 00472130  56                   push esi
// 00472131  50                   push eax
// 00472132  ffd2                 call edx
// 00472134  85c0                 test eax, eax
// 00472136  7c3f                 jl 0x472177
// 00472138  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047213c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00472140  8b08                 mov ecx, dword ptr [eax]
// 00472142  8d542414             lea edx, [esp + 0x14]
// 00472146  52                   push edx
// 00472147  68e815ac00           push 0xac15e8
// 0047214c  68e815ac00           push 0xac15e8
// 00472151  50                   push eax
// 00472152  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00472155  c644243002           mov byte ptr [esp + 0x30], 2
// 0047215a  ffd0                 call eax
// 0047215c  8bf8                 mov edi, eax
// 0047215e  3bfb                 cmp edi, ebx
// 00472160  7d57                 jge 0x4721b9
// 00472162  8b442414             mov eax, dword ptr [esp + 0x14]
// 00472166  c644242001           mov byte ptr [esp + 0x20], 1
// 0047216b  3bc3                 cmp eax, ebx
// 0047216d  7408                 je 0x472177
// 0047216f  8b08                 mov ecx, dword ptr [eax]
// 00472171  8b5108               mov edx, dword ptr [ecx + 8]
// 00472174  50                   push eax
// 00472175  ffd2                 call edx
// 00472177  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047217b  885c2420             mov byte ptr [esp + 0x20], bl
// 0047217f  3bc3                 cmp eax, ebx
// 00472181  7408                 je 0x47218b
// 00472183  8b08                 mov ecx, dword ptr [eax]
// 00472185  8b5108               mov edx, dword ptr [ecx + 8]
// 00472188  50                   push eax
// 00472189  ffd2                 call edx
// 0047218b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047218f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00472197  3bc3                 cmp eax, ebx
// 00472199  7408                 je 0x4721a3
// 0047219b  8b08                 mov ecx, dword ptr [eax]
// 0047219d  8b5108               mov edx, dword ptr [ecx + 8]
// 004721a0  50                   push eax
// 004721a1  ffd2                 call edx
// 004721a3  8bc7                 mov eax, edi
// 004721a5  5f                   pop edi
// 004721a6  5e                   pop esi
// 004721a7  5b                   pop ebx
// 004721a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004721ac  64890d00000000       mov dword ptr fs:[0], ecx
// 004721b3  83c418               add esp, 0x18
// 004721b6  c20800               ret 8
// 004721b9  8b06                 mov eax, dword ptr [esi]
// 004721bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004721bf  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004721c3  8b11                 mov edx, dword ptr [ecx]
// 004721c5  53                   push ebx
// 004721c6  56                   push esi
// 004721c7  50                   push eax
// 004721c8  8b4214               mov eax, dword ptr [edx + 0x14]
// 004721cb  51                   push ecx
// 004721cc  ffd0                 call eax
// 004721ce  8bf0                 mov esi, eax
// 004721d0  3bf3                 cmp esi, ebx
// 004721d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004721d6  c644242001           mov byte ptr [esp + 0x20], 1
// 004721db  7d4e                 jge 0x47222b
// 004721dd  3bc3                 cmp eax, ebx
// 004721df  7408                 je 0x4721e9
// 004721e1  8b08                 mov ecx, dword ptr [eax]
// 004721e3  8b5108               mov edx, dword ptr [ecx + 8]
// 004721e6  50                   push eax
// 004721e7  ffd2                 call edx
// 004721e9  8b442410             mov eax, dword ptr [esp + 0x10]
// 004721ed  885c2420             mov byte ptr [esp + 0x20], bl
// 004721f1  3bc3                 cmp eax, ebx
// 004721f3  7408                 je 0x4721fd
// 004721f5  8b08                 mov ecx, dword ptr [eax]
// 004721f7  8b5108               mov edx, dword ptr [ecx + 8]
// 004721fa  50                   push eax
// 004721fb  ffd2                 call edx
// 004721fd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00472201  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00472209  3bc3                 cmp eax, ebx
// 0047220b  7408                 je 0x472215
// 0047220d  8b08                 mov ecx, dword ptr [eax]
// 0047220f  8b5108               mov edx, dword ptr [ecx + 8]
// 00472212  50                   push eax
// 00472213  ffd2                 call edx
// 00472215  5f                   pop edi
// 00472216  8bc6                 mov eax, esi
// 00472218  5e                   pop esi
// 00472219  5b                   pop ebx
// 0047221a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047221e  64890d00000000       mov dword ptr fs:[0], ecx
// 00472225  83c418               add esp, 0x18
// 00472228  c20800               ret 8
// 0047222b  3bc3                 cmp eax, ebx
// 0047222d  7408                 je 0x472237
// 0047222f  8b08                 mov ecx, dword ptr [eax]
// 00472231  8b5108               mov edx, dword ptr [ecx + 8]
// 00472234  50                   push eax
// 00472235  ffd2                 call edx
// 00472237  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047223b  885c2420             mov byte ptr [esp + 0x20], bl
// 0047223f  3bc3                 cmp eax, ebx
// 00472241  7408                 je 0x47224b
// 00472243  8b08                 mov ecx, dword ptr [eax]
// 00472245  8b5108               mov edx, dword ptr [ecx + 8]
// 00472248  50                   push eax
// 00472249  ffd2                 call edx
// 0047224b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047224f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00472257  3bc3                 cmp eax, ebx
// 00472259  7408                 je 0x472263
// 0047225b  8b08                 mov ecx, dword ptr [eax]
// 0047225d  8b5108               mov edx, dword ptr [ecx + 8]
// 00472260  50                   push eax
// 00472261  ffd2                 call edx
// 00472263  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00472267  5f                   pop edi
// 00472268  5e                   pop esi
// 00472269  33c0                 xor eax, eax
// 0047226b  5b                   pop ebx
// 0047226c  64890d00000000       mov dword ptr fs:[0], ecx
// 00472273  83c418               add esp, 0x18
// 00472276  c20800               ret 8
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