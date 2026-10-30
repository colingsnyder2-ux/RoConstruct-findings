// roc 2010-06 00458570  unit: VCWorkspace::?$CComObject  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00458570
//
// 00458570  6aff                 push -1
// 00458572  6808da9700           push 0x97da08
// 00458577  64a100000000         mov eax, dword ptr fs:[0]
// 0045857d  50                   push eax
// 0045857e  64892500000000       mov dword ptr fs:[0], esp
// 00458585  83ec0c               sub esp, 0xc
// 00458588  53                   push ebx
// 00458589  33db                 xor ebx, ebx
// 0045858b  56                   push esi
// 0045858c  895c2408             mov dword ptr [esp + 8], ebx
// 00458590  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00458594  3bcb                 cmp ecx, ebx
// 00458596  7405                 je 0x45859d
// 00458598  8d41f8               lea eax, [ecx - 8]
// 0045859b  eb02                 jmp 0x45859f
// 0045859d  33c0                 xor eax, eax
// 0045859f  8b4810               mov ecx, dword ptr [eax + 0x10]
// 004585a2  8d542408             lea edx, [esp + 8]
// 004585a6  83c010               add eax, 0x10
// 004585a9  52                   push edx
// 004585aa  68b803a000           push 0xa003b8
// 004585af  50                   push eax
// 004585b0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004585b3  ffd0                 call eax
// 004585b5  8bf0                 mov esi, eax
// 004585b7  3bf3                 cmp esi, ebx
// 004585b9  7d2d                 jge 0x4585e8
// 004585bb  8b442408             mov eax, dword ptr [esp + 8]
// 004585bf  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004585c7  3bc3                 cmp eax, ebx
// 004585c9  7408                 je 0x4585d3
// 004585cb  8b08                 mov ecx, dword ptr [eax]
// 004585cd  8b5108               mov edx, dword ptr [ecx + 8]
// 004585d0  50                   push eax
// 004585d1  ffd2                 call edx
// 004585d3  8bc6                 mov eax, esi
// 004585d5  5e                   pop esi
// 004585d6  5b                   pop ebx
// 004585d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004585db  64890d00000000       mov dword ptr fs:[0], ecx
// 004585e2  83c418               add esp, 0x18
// 004585e5  c20800               ret 8
// 004585e8  57                   push edi
// 004585e9  895c2410             mov dword ptr [esp + 0x10], ebx
// 004585ed  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004585f1  8b08                 mov ecx, dword ptr [eax]
// 004585f3  8d542410             lea edx, [esp + 0x10]
// 004585f7  52                   push edx
// 004585f8  68b859a500           push 0xa559b8
// 004585fd  68a859a500           push 0xa559a8
// 00458602  50                   push eax
// 00458603  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00458606  c644243001           mov byte ptr [esp + 0x30], 1
// 0045860b  ffd0                 call eax
// 0045860d  8bf8                 mov edi, eax
// 0045860f  3bfb                 cmp edi, ebx
// 00458611  8b442410             mov eax, dword ptr [esp + 0x10]
// 00458615  7c54                 jl 0x45866b
// 00458617  8b742428             mov esi, dword ptr [esp + 0x28]
// 0045861b  8b08                 mov ecx, dword ptr [eax]
// 0045861d  8b5178               mov edx, dword ptr [ecx + 0x78]
// 00458620  56                   push esi
// 00458621  50                   push eax
// 00458622  ffd2                 call edx
// 00458624  85c0                 test eax, eax
// 00458626  7c3f                 jl 0x458667
// 00458628  895c2414             mov dword ptr [esp + 0x14], ebx
// 0045862c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00458630  8b08                 mov ecx, dword ptr [eax]
// 00458632  8d542414             lea edx, [esp + 0x14]
// 00458636  52                   push edx
// 00458637  689859a500           push 0xa55998
// 0045863c  689859a500           push 0xa55998
// 00458641  50                   push eax
// 00458642  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00458645  c644243002           mov byte ptr [esp + 0x30], 2
// 0045864a  ffd0                 call eax
// 0045864c  8bf8                 mov edi, eax
// 0045864e  3bfb                 cmp edi, ebx
// 00458650  7d57                 jge 0x4586a9
// 00458652  8b442414             mov eax, dword ptr [esp + 0x14]
// 00458656  c644242001           mov byte ptr [esp + 0x20], 1
// 0045865b  3bc3                 cmp eax, ebx
// 0045865d  7408                 je 0x458667
// 0045865f  8b08                 mov ecx, dword ptr [eax]
// 00458661  8b5108               mov edx, dword ptr [ecx + 8]
// 00458664  50                   push eax
// 00458665  ffd2                 call edx
// 00458667  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045866b  885c2420             mov byte ptr [esp + 0x20], bl
// 0045866f  3bc3                 cmp eax, ebx
// 00458671  7408                 je 0x45867b
// 00458673  8b08                 mov ecx, dword ptr [eax]
// 00458675  8b5108               mov edx, dword ptr [ecx + 8]
// 00458678  50                   push eax
// 00458679  ffd2                 call edx
// 0045867b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045867f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00458687  3bc3                 cmp eax, ebx
// 00458689  7408                 je 0x458693
// 0045868b  8b08                 mov ecx, dword ptr [eax]
// 0045868d  8b5108               mov edx, dword ptr [ecx + 8]
// 00458690  50                   push eax
// 00458691  ffd2                 call edx
// 00458693  8bc7                 mov eax, edi
// 00458695  5f                   pop edi
// 00458696  5e                   pop esi
// 00458697  5b                   pop ebx
// 00458698  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045869c  64890d00000000       mov dword ptr fs:[0], ecx
// 004586a3  83c418               add esp, 0x18
// 004586a6  c20800               ret 8
// 004586a9  8b06                 mov eax, dword ptr [esi]
// 004586ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004586af  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004586b3  8b11                 mov edx, dword ptr [ecx]
// 004586b5  53                   push ebx
// 004586b6  56                   push esi
// 004586b7  50                   push eax
// 004586b8  8b4214               mov eax, dword ptr [edx + 0x14]
// 004586bb  51                   push ecx
// 004586bc  ffd0                 call eax
// 004586be  8bf0                 mov esi, eax
// 004586c0  3bf3                 cmp esi, ebx
// 004586c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004586c6  c644242001           mov byte ptr [esp + 0x20], 1
// 004586cb  7d4e                 jge 0x45871b
// 004586cd  3bc3                 cmp eax, ebx
// 004586cf  7408                 je 0x4586d9
// 004586d1  8b08                 mov ecx, dword ptr [eax]
// 004586d3  8b5108               mov edx, dword ptr [ecx + 8]
// 004586d6  50                   push eax
// 004586d7  ffd2                 call edx
// 004586d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 004586dd  885c2420             mov byte ptr [esp + 0x20], bl
// 004586e1  3bc3                 cmp eax, ebx
// 004586e3  7408                 je 0x4586ed
// 004586e5  8b08                 mov ecx, dword ptr [eax]
// 004586e7  8b5108               mov edx, dword ptr [ecx + 8]
// 004586ea  50                   push eax
// 004586eb  ffd2                 call edx
// 004586ed  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004586f1  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004586f9  3bc3                 cmp eax, ebx
// 004586fb  7408                 je 0x458705
// 004586fd  8b08                 mov ecx, dword ptr [eax]
// 004586ff  8b5108               mov edx, dword ptr [ecx + 8]
// 00458702  50                   push eax
// 00458703  ffd2                 call edx
// 00458705  5f                   pop edi
// 00458706  8bc6                 mov eax, esi
// 00458708  5e                   pop esi
// 00458709  5b                   pop ebx
// 0045870a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045870e  64890d00000000       mov dword ptr fs:[0], ecx
// 00458715  83c418               add esp, 0x18
// 00458718  c20800               ret 8
// 0045871b  3bc3                 cmp eax, ebx
// 0045871d  7408                 je 0x458727
// 0045871f  8b08                 mov ecx, dword ptr [eax]
// 00458721  8b5108               mov edx, dword ptr [ecx + 8]
// 00458724  50                   push eax
// 00458725  ffd2                 call edx
// 00458727  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045872b  885c2420             mov byte ptr [esp + 0x20], bl
// 0045872f  3bc3                 cmp eax, ebx
// 00458731  7408                 je 0x45873b
// 00458733  8b08                 mov ecx, dword ptr [eax]
// 00458735  8b5108               mov edx, dword ptr [ecx + 8]
// 00458738  50                   push eax
// 00458739  ffd2                 call edx
// 0045873b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045873f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00458747  3bc3                 cmp eax, ebx
// 00458749  7408                 je 0x458753
// 0045874b  8b08                 mov ecx, dword ptr [eax]
// 0045874d  8b5108               mov edx, dword ptr [ecx + 8]
// 00458750  50                   push eax
// 00458751  ffd2                 call edx
// 00458753  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00458757  5f                   pop edi
// 00458758  5e                   pop esi
// 00458759  33c0                 xor eax, eax
// 0045875b  5b                   pop ebx
// 0045875c  64890d00000000       mov dword ptr fs:[0], ecx
// 00458763  83c418               add esp, 0x18
// 00458766  c20800               ret 8
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