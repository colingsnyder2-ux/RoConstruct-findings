// roc 2009-06 0044f2e0  unit: VCWorkspace::?$CComObject  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044f2e0
//
// 0044f2e0  6aff                 push -1
// 0044f2e2  6898cb8400           push 0x84cb98
// 0044f2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0044f2ed  50                   push eax
// 0044f2ee  64892500000000       mov dword ptr fs:[0], esp
// 0044f2f5  83ec0c               sub esp, 0xc
// 0044f2f8  53                   push ebx
// 0044f2f9  33db                 xor ebx, ebx
// 0044f2fb  56                   push esi
// 0044f2fc  895c2408             mov dword ptr [esp + 8], ebx
// 0044f300  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0044f304  3bcb                 cmp ecx, ebx
// 0044f306  7405                 je 0x44f30d
// 0044f308  8d41f8               lea eax, [ecx - 8]
// 0044f30b  eb02                 jmp 0x44f30f
// 0044f30d  33c0                 xor eax, eax
// 0044f30f  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0044f312  8d542408             lea edx, [esp + 8]
// 0044f316  83c010               add eax, 0x10
// 0044f319  52                   push edx
// 0044f31a  6874cd8a00           push 0x8acd74
// 0044f31f  50                   push eax
// 0044f320  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0044f323  ffd0                 call eax
// 0044f325  8bf0                 mov esi, eax
// 0044f327  3bf3                 cmp esi, ebx
// 0044f329  7d2d                 jge 0x44f358
// 0044f32b  8b442408             mov eax, dword ptr [esp + 8]
// 0044f32f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0044f337  3bc3                 cmp eax, ebx
// 0044f339  7408                 je 0x44f343
// 0044f33b  8b08                 mov ecx, dword ptr [eax]
// 0044f33d  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f340  50                   push eax
// 0044f341  ffd2                 call edx
// 0044f343  8bc6                 mov eax, esi
// 0044f345  5e                   pop esi
// 0044f346  5b                   pop ebx
// 0044f347  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044f34b  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f352  83c418               add esp, 0x18
// 0044f355  c20800               ret 8
// 0044f358  57                   push edi
// 0044f359  895c2410             mov dword ptr [esp + 0x10], ebx
// 0044f35d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044f361  8b08                 mov ecx, dword ptr [eax]
// 0044f363  8d542410             lea edx, [esp + 0x10]
// 0044f367  52                   push edx
// 0044f368  68f0118f00           push 0x8f11f0
// 0044f36d  68e0118f00           push 0x8f11e0
// 0044f372  50                   push eax
// 0044f373  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0044f376  c644243001           mov byte ptr [esp + 0x30], 1
// 0044f37b  ffd0                 call eax
// 0044f37d  8bf8                 mov edi, eax
// 0044f37f  3bfb                 cmp edi, ebx
// 0044f381  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044f385  7c54                 jl 0x44f3db
// 0044f387  8b742428             mov esi, dword ptr [esp + 0x28]
// 0044f38b  8b08                 mov ecx, dword ptr [eax]
// 0044f38d  8b5178               mov edx, dword ptr [ecx + 0x78]
// 0044f390  56                   push esi
// 0044f391  50                   push eax
// 0044f392  ffd2                 call edx
// 0044f394  85c0                 test eax, eax
// 0044f396  7c3f                 jl 0x44f3d7
// 0044f398  895c2414             mov dword ptr [esp + 0x14], ebx
// 0044f39c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044f3a0  8b08                 mov ecx, dword ptr [eax]
// 0044f3a2  8d542414             lea edx, [esp + 0x14]
// 0044f3a6  52                   push edx
// 0044f3a7  68d0118f00           push 0x8f11d0
// 0044f3ac  68d0118f00           push 0x8f11d0
// 0044f3b1  50                   push eax
// 0044f3b2  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0044f3b5  c644243002           mov byte ptr [esp + 0x30], 2
// 0044f3ba  ffd0                 call eax
// 0044f3bc  8bf8                 mov edi, eax
// 0044f3be  3bfb                 cmp edi, ebx
// 0044f3c0  7d57                 jge 0x44f419
// 0044f3c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044f3c6  c644242001           mov byte ptr [esp + 0x20], 1
// 0044f3cb  3bc3                 cmp eax, ebx
// 0044f3cd  7408                 je 0x44f3d7
// 0044f3cf  8b08                 mov ecx, dword ptr [eax]
// 0044f3d1  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f3d4  50                   push eax
// 0044f3d5  ffd2                 call edx
// 0044f3d7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044f3db  885c2420             mov byte ptr [esp + 0x20], bl
// 0044f3df  3bc3                 cmp eax, ebx
// 0044f3e1  7408                 je 0x44f3eb
// 0044f3e3  8b08                 mov ecx, dword ptr [eax]
// 0044f3e5  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f3e8  50                   push eax
// 0044f3e9  ffd2                 call edx
// 0044f3eb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044f3ef  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0044f3f7  3bc3                 cmp eax, ebx
// 0044f3f9  7408                 je 0x44f403
// 0044f3fb  8b08                 mov ecx, dword ptr [eax]
// 0044f3fd  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f400  50                   push eax
// 0044f401  ffd2                 call edx
// 0044f403  8bc7                 mov eax, edi
// 0044f405  5f                   pop edi
// 0044f406  5e                   pop esi
// 0044f407  5b                   pop ebx
// 0044f408  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044f40c  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f413  83c418               add esp, 0x18
// 0044f416  c20800               ret 8
// 0044f419  8b06                 mov eax, dword ptr [esi]
// 0044f41b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044f41f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0044f423  8b11                 mov edx, dword ptr [ecx]
// 0044f425  53                   push ebx
// 0044f426  56                   push esi
// 0044f427  50                   push eax
// 0044f428  8b4214               mov eax, dword ptr [edx + 0x14]
// 0044f42b  51                   push ecx
// 0044f42c  ffd0                 call eax
// 0044f42e  8bf0                 mov esi, eax
// 0044f430  3bf3                 cmp esi, ebx
// 0044f432  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044f436  c644242001           mov byte ptr [esp + 0x20], 1
// 0044f43b  7d4e                 jge 0x44f48b
// 0044f43d  3bc3                 cmp eax, ebx
// 0044f43f  7408                 je 0x44f449
// 0044f441  8b08                 mov ecx, dword ptr [eax]
// 0044f443  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f446  50                   push eax
// 0044f447  ffd2                 call edx
// 0044f449  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044f44d  885c2420             mov byte ptr [esp + 0x20], bl
// 0044f451  3bc3                 cmp eax, ebx
// 0044f453  7408                 je 0x44f45d
// 0044f455  8b08                 mov ecx, dword ptr [eax]
// 0044f457  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f45a  50                   push eax
// 0044f45b  ffd2                 call edx
// 0044f45d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044f461  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0044f469  3bc3                 cmp eax, ebx
// 0044f46b  7408                 je 0x44f475
// 0044f46d  8b08                 mov ecx, dword ptr [eax]
// 0044f46f  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f472  50                   push eax
// 0044f473  ffd2                 call edx
// 0044f475  5f                   pop edi
// 0044f476  8bc6                 mov eax, esi
// 0044f478  5e                   pop esi
// 0044f479  5b                   pop ebx
// 0044f47a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044f47e  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f485  83c418               add esp, 0x18
// 0044f488  c20800               ret 8
// 0044f48b  3bc3                 cmp eax, ebx
// 0044f48d  7408                 je 0x44f497
// 0044f48f  8b08                 mov ecx, dword ptr [eax]
// 0044f491  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f494  50                   push eax
// 0044f495  ffd2                 call edx
// 0044f497  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044f49b  885c2420             mov byte ptr [esp + 0x20], bl
// 0044f49f  3bc3                 cmp eax, ebx
// 0044f4a1  7408                 je 0x44f4ab
// 0044f4a3  8b08                 mov ecx, dword ptr [eax]
// 0044f4a5  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f4a8  50                   push eax
// 0044f4a9  ffd2                 call edx
// 0044f4ab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044f4af  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0044f4b7  3bc3                 cmp eax, ebx
// 0044f4b9  7408                 je 0x44f4c3
// 0044f4bb  8b08                 mov ecx, dword ptr [eax]
// 0044f4bd  8b5108               mov edx, dword ptr [ecx + 8]
// 0044f4c0  50                   push eax
// 0044f4c1  ffd2                 call edx
// 0044f4c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0044f4c7  5f                   pop edi
// 0044f4c8  5e                   pop esi
// 0044f4c9  33c0                 xor eax, eax
// 0044f4cb  5b                   pop ebx
// 0044f4cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f4d3  83c418               add esp, 0x18
// 0044f4d6  c20800               ret 8
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