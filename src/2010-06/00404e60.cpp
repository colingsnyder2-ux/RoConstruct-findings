// roc 2010-06 00404e60  unit: VCApp::?$IObjectSafetyRobloxImpl  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00404e60
//
// 00404e60  53                   push ebx
// 00404e61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00404e65  56                   push esi
// 00404e66  57                   push edi
// 00404e67  85db                 test ebx, ebx
// 00404e69  7405                 je 0x404e70
// 00404e6b  8d43fc               lea eax, [ebx - 4]
// 00404e6e  eb02                 jmp 0x404e72
// 00404e70  33c0                 xor eax, eax
// 00404e72  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00404e76  85ff                 test edi, edi
// 00404e78  7464                 je 0x404ede
// 00404e7a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00404e7e  85f6                 test esi, esi
// 00404e80  745c                 je 0x404ede
// 00404e82  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00404e85  55                   push ebp
// 00404e86  8d542414             lea edx, [esp + 0x14]
// 00404e8a  52                   push edx
// 00404e8b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00404e8f  83c014               add eax, 0x14
// 00404e92  52                   push edx
// 00404e93  50                   push eax
// 00404e94  8b01                 mov eax, dword ptr [ecx]
// 00404e96  ffd0                 call eax
// 00404e98  8be8                 mov ebp, eax
// 00404e9a  85ed                 test ebp, ebp
// 00404e9c  7c2b                 jl 0x404ec9
// 00404e9e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00404ea2  8b08                 mov ecx, dword ptr [eax]
// 00404ea4  8b5108               mov edx, dword ptr [ecx + 8]
// 00404ea7  50                   push eax
// 00404ea8  ffd2                 call edx
// 00404eaa  8bcb                 mov ecx, ebx
// 00404eac  e81ffeffff           call 0x404cd0
// 00404eb1  c70701000000         mov dword ptr [edi], 1
// 00404eb7  85c0                 test eax, eax
// 00404eb9  7514                 jne 0x404ecf
// 00404ebb  8b4304               mov eax, dword ptr [ebx + 4]
// 00404ebe  8906                 mov dword ptr [esi], eax
// 00404ec0  8bc5                 mov eax, ebp
// 00404ec2  5d                   pop ebp
// 00404ec3  5f                   pop edi
// 00404ec4  5e                   pop esi
// 00404ec5  5b                   pop ebx
// 00404ec6  c21000               ret 0x10
// 00404ec9  c70700000000         mov dword ptr [edi], 0
// 00404ecf  8bc5                 mov eax, ebp
// 00404ed1  5d                   pop ebp
// 00404ed2  5f                   pop edi
// 00404ed3  c70600000000         mov dword ptr [esi], 0
// 00404ed9  5e                   pop esi
// 00404eda  5b                   pop ebx
// 00404edb  c21000               ret 0x10
// 00404ede  5f                   pop edi
// 00404edf  5e                   pop esi
// 00404ee0  b803400080           mov eax, 0x80004003
// 00404ee5  5b                   pop ebx
// 00404ee6  c21000               ret 0x10
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