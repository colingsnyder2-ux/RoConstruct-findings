// roc 2009-06 00405e10  unit: VCApp::?$IObjectSafetyRobloxImpl  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00405e10
//
// 00405e10  53                   push ebx
// 00405e11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00405e15  56                   push esi
// 00405e16  57                   push edi
// 00405e17  85db                 test ebx, ebx
// 00405e19  7405                 je 0x405e20
// 00405e1b  8d43fc               lea eax, [ebx - 4]
// 00405e1e  eb02                 jmp 0x405e22
// 00405e20  33c0                 xor eax, eax
// 00405e22  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00405e26  85ff                 test edi, edi
// 00405e28  7464                 je 0x405e8e
// 00405e2a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00405e2e  85f6                 test esi, esi
// 00405e30  745c                 je 0x405e8e
// 00405e32  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00405e35  55                   push ebp
// 00405e36  8d542414             lea edx, [esp + 0x14]
// 00405e3a  52                   push edx
// 00405e3b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00405e3f  83c014               add eax, 0x14
// 00405e42  52                   push edx
// 00405e43  50                   push eax
// 00405e44  8b01                 mov eax, dword ptr [ecx]
// 00405e46  ffd0                 call eax
// 00405e48  8be8                 mov ebp, eax
// 00405e4a  85ed                 test ebp, ebp
// 00405e4c  7c2b                 jl 0x405e79
// 00405e4e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00405e52  8b08                 mov ecx, dword ptr [eax]
// 00405e54  8b5108               mov edx, dword ptr [ecx + 8]
// 00405e57  50                   push eax
// 00405e58  ffd2                 call edx
// 00405e5a  8bcb                 mov ecx, ebx
// 00405e5c  e81ffeffff           call 0x405c80
// 00405e61  c70701000000         mov dword ptr [edi], 1
// 00405e67  85c0                 test eax, eax
// 00405e69  7514                 jne 0x405e7f
// 00405e6b  8b4304               mov eax, dword ptr [ebx + 4]
// 00405e6e  8906                 mov dword ptr [esi], eax
// 00405e70  8bc5                 mov eax, ebp
// 00405e72  5d                   pop ebp
// 00405e73  5f                   pop edi
// 00405e74  5e                   pop esi
// 00405e75  5b                   pop ebx
// 00405e76  c21000               ret 0x10
// 00405e79  c70700000000         mov dword ptr [edi], 0
// 00405e7f  8bc5                 mov eax, ebp
// 00405e81  5d                   pop ebp
// 00405e82  5f                   pop edi
// 00405e83  c70600000000         mov dword ptr [esi], 0
// 00405e89  5e                   pop esi
// 00405e8a  5b                   pop ebx
// 00405e8b  c21000               ret 0x10
// 00405e8e  5f                   pop edi
// 00405e8f  5e                   pop esi
// 00405e90  b803400080           mov eax, 0x80004003
// 00405e95  5b                   pop ebx
// 00405e96  c21000               ret 0x10
// copied from an identical function in another client (function ?GetInterfaceSafetyOptions@?$IObjectSafetyRobloxImpl@VApp@@@@UAGJPBXPAK1@Z)

// from server: 100% by EspClaude
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