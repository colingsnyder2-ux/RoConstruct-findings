// from server: 100% by colin
// roc 2008-06 00404d20  unit: VCWorkspace::?$CComObject  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00404d20
//
// 00404d20  53                   push ebx
// 00404d21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00404d25  56                   push esi
// 00404d26  57                   push edi
// 00404d27  85db                 test ebx, ebx
// 00404d29  7405                 je 0x404d30
// 00404d2b  8d43f8               lea eax, [ebx - 8]
// 00404d2e  eb02                 jmp 0x404d32
// 00404d30  33c0                 xor eax, eax
// 00404d32  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00404d36  85ff                 test edi, edi
// 00404d38  7460                 je 0x404d9a
// 00404d3a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00404d3e  85f6                 test esi, esi
// 00404d40  7458                 je 0x404d9a
// 00404d42  8b08                 mov ecx, dword ptr [eax]
// 00404d44  55                   push ebp
// 00404d45  8d542414             lea edx, [esp + 0x14]
// 00404d49  52                   push edx
// 00404d4a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00404d4e  52                   push edx
// 00404d4f  50                   push eax
// 00404d50  8b01                 mov eax, dword ptr [ecx]
// 00404d52  ffd0                 call eax
// 00404d54  8be8                 mov ebp, eax
// 00404d56  85ed                 test ebp, ebp
// 00404d58  7c2b                 jl 0x404d85
// 00404d5a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00404d5e  8b08                 mov ecx, dword ptr [eax]
// 00404d60  8b5108               mov edx, dword ptr [ecx + 8]
// 00404d63  50                   push eax
// 00404d64  ffd2                 call edx
// 00404d66  8bcb                 mov ecx, ebx
// 00404d68  e8f3edffff           call 0x403b60
// 00404d6d  c70701000000         mov dword ptr [edi], 1
// 00404d73  85c0                 test eax, eax
// 00404d75  7514                 jne 0x404d8b
// 00404d77  8b4304               mov eax, dword ptr [ebx + 4]
// 00404d7a  8906                 mov dword ptr [esi], eax
// 00404d7c  8bc5                 mov eax, ebp
// 00404d7e  5d                   pop ebp
// 00404d7f  5f                   pop edi
// 00404d80  5e                   pop esi
// 00404d81  5b                   pop ebx
// 00404d82  c21000               ret 0x10
// 00404d85  c70700000000         mov dword ptr [edi], 0
// 00404d8b  8bc5                 mov eax, ebp
// 00404d8d  5d                   pop ebp
// 00404d8e  5f                   pop edi
// 00404d8f  c70600000000         mov dword ptr [esi], 0
// 00404d95  5e                   pop esi
// 00404d96  5b                   pop ebx
// 00404d97  c21000               ret 0x10
// 00404d9a  5f                   pop edi
// 00404d9b  5e                   pop esi
// 00404d9c  b803400080           mov eax, 0x80004003
// 00404da1  5b                   pop ebx
// 00404da2  c21000               ret 0x10

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
class App : public IUnk, public First, public IObjectSafetyRobloxImpl<App>, public Mid {
public:
    IUnk *GetUnknown() { return static_cast<IUnk *>(this); }
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
