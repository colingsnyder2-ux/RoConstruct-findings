// roc 2009-12 00404e30  unit: VCApp::?$IObjectSafetyRobloxImpl  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00404e30
//
// 00404e30  53                   push ebx
// 00404e31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00404e35  56                   push esi
// 00404e36  57                   push edi
// 00404e37  85db                 test ebx, ebx
// 00404e39  7405                 je 0x404e40
// 00404e3b  8d43fc               lea eax, [ebx - 4]
// 00404e3e  eb02                 jmp 0x404e42
// 00404e40  33c0                 xor eax, eax
// 00404e42  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00404e46  85ff                 test edi, edi
// 00404e48  7464                 je 0x404eae
// 00404e4a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00404e4e  85f6                 test esi, esi
// 00404e50  745c                 je 0x404eae
// 00404e52  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00404e55  55                   push ebp
// 00404e56  8d542414             lea edx, [esp + 0x14]
// 00404e5a  52                   push edx
// 00404e5b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00404e5f  83c014               add eax, 0x14
// 00404e62  52                   push edx
// 00404e63  50                   push eax
// 00404e64  8b01                 mov eax, dword ptr [ecx]
// 00404e66  ffd0                 call eax
// 00404e68  8be8                 mov ebp, eax
// 00404e6a  85ed                 test ebp, ebp
// 00404e6c  7c2b                 jl 0x404e99
// 00404e6e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00404e72  8b08                 mov ecx, dword ptr [eax]
// 00404e74  8b5108               mov edx, dword ptr [ecx + 8]
// 00404e77  50                   push eax
// 00404e78  ffd2                 call edx
// 00404e7a  8bcb                 mov ecx, ebx
// 00404e7c  e81ffeffff           call 0x404ca0
// 00404e81  c70701000000         mov dword ptr [edi], 1
// 00404e87  85c0                 test eax, eax
// 00404e89  7514                 jne 0x404e9f
// 00404e8b  8b4304               mov eax, dword ptr [ebx + 4]
// 00404e8e  8906                 mov dword ptr [esi], eax
// 00404e90  8bc5                 mov eax, ebp
// 00404e92  5d                   pop ebp
// 00404e93  5f                   pop edi
// 00404e94  5e                   pop esi
// 00404e95  5b                   pop ebx
// 00404e96  c21000               ret 0x10
// 00404e99  c70700000000         mov dword ptr [edi], 0
// 00404e9f  8bc5                 mov eax, ebp
// 00404ea1  5d                   pop ebp
// 00404ea2  5f                   pop edi
// 00404ea3  c70600000000         mov dword ptr [esi], 0
// 00404ea9  5e                   pop esi
// 00404eaa  5b                   pop ebx
// 00404eab  c21000               ret 0x10
// 00404eae  5f                   pop edi
// 00404eaf  5e                   pop esi
// 00404eb0  b803400080           mov eax, 0x80004003
// 00404eb5  5b                   pop ebx
// 00404eb6  c21000               ret 0x10
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