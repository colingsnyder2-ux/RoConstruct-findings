// roc 2011-06 004066b0  unit: VCApp::?$IObjectSafetyRobloxImpl  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004066b0
//
// 004066b0  53                   push ebx
// 004066b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004066b5  56                   push esi
// 004066b6  57                   push edi
// 004066b7  85db                 test ebx, ebx
// 004066b9  7405                 je 0x4066c0
// 004066bb  8d43fc               lea eax, [ebx - 4]
// 004066be  eb02                 jmp 0x4066c2
// 004066c0  33c0                 xor eax, eax
// 004066c2  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004066c6  85ff                 test edi, edi
// 004066c8  7464                 je 0x40672e
// 004066ca  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004066ce  85f6                 test esi, esi
// 004066d0  745c                 je 0x40672e
// 004066d2  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004066d5  55                   push ebp
// 004066d6  8d542414             lea edx, [esp + 0x14]
// 004066da  52                   push edx
// 004066db  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004066df  83c014               add eax, 0x14
// 004066e2  52                   push edx
// 004066e3  50                   push eax
// 004066e4  8b01                 mov eax, dword ptr [ecx]
// 004066e6  ffd0                 call eax
// 004066e8  8be8                 mov ebp, eax
// 004066ea  85ed                 test ebp, ebp
// 004066ec  7c2b                 jl 0x406719
// 004066ee  8b442414             mov eax, dword ptr [esp + 0x14]
// 004066f2  8b08                 mov ecx, dword ptr [eax]
// 004066f4  8b5108               mov edx, dword ptr [ecx + 8]
// 004066f7  50                   push eax
// 004066f8  ffd2                 call edx
// 004066fa  8bcb                 mov ecx, ebx
// 004066fc  e81ffeffff           call 0x406520
// 00406701  c70701000000         mov dword ptr [edi], 1
// 00406707  85c0                 test eax, eax
// 00406709  7514                 jne 0x40671f
// 0040670b  8b4304               mov eax, dword ptr [ebx + 4]
// 0040670e  8906                 mov dword ptr [esi], eax
// 00406710  8bc5                 mov eax, ebp
// 00406712  5d                   pop ebp
// 00406713  5f                   pop edi
// 00406714  5e                   pop esi
// 00406715  5b                   pop ebx
// 00406716  c21000               ret 0x10
// 00406719  c70700000000         mov dword ptr [edi], 0
// 0040671f  8bc5                 mov eax, ebp
// 00406721  5d                   pop ebp
// 00406722  5f                   pop edi
// 00406723  c70600000000         mov dword ptr [esi], 0
// 00406729  5e                   pop esi
// 0040672a  5b                   pop ebx
// 0040672b  c21000               ret 0x10
// 0040672e  5f                   pop edi
// 0040672f  5e                   pop esi
// 00406730  b803400080           mov eax, 0x80004003
// 00406735  5b                   pop ebx
// 00406736  c21000               ret 0x10
// copied from an identical function in another client (function ?GetInterfaceSafetyOptions@?$IObjectSafetyRobloxImpl@VApp@@@@UAGJPBXPAK1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct IUnk {
    virtual long __stdcall QueryInterface(const void *riid, void **ppv) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct First { virtual void f0(); };

template <class T>
class IObjectSafetyRobloxImpl {
public:
    virtual long __stdcall GetInterfaceSafetyOptions(const void *riid, unsigned long *pdwSupportedOptions, unsigned long *pdwEnabledOptions);
    unsigned long m_dwCurrentSafety;
    int check();
};

struct Mid { virtual void m0(); int x; };
class App : public First, public IObjectSafetyRobloxImpl<App>, public Mid, public IUnk {
public:
    IUnk *GetUnknown() { return (IUnk *)((int)this + 0x14); }
};

template <class T>
long __stdcall IObjectSafetyRobloxImpl<T>::GetInterfaceSafetyOptions(const void *riid, unsigned long *pdwSupportedOptions, unsigned long *pdwEnabledOptions)
{
    T *pT = static_cast<T *>(this);
    if (pdwSupportedOptions == 0 || pdwEnabledOptions == 0)
        return (long)0x80004003L;
    long hr;
    IUnk *pUnk;
    hr = pT->GetUnknown()->QueryInterface(riid, (void **)&pUnk);
    if (hr >= 0) {
        pUnk->Release();
        if (check()) {
            *pdwSupportedOptions = 1;
            *pdwEnabledOptions = 0;
        } else {
            *pdwSupportedOptions = 1;
            *pdwEnabledOptions = m_dwCurrentSafety;
        }
    } else {
        *pdwSupportedOptions = 0;
        *pdwEnabledOptions = 0;
    }
    return hr;
}

template class IObjectSafetyRobloxImpl<App>;