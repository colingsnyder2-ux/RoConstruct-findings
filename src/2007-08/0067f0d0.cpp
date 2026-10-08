// from server: 100% by colin
// roc 2007-08 0067f0d0  unit: CXTPControlSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f0d0
//
// 0067f0d0  56                   push esi
// 0067f0d1  57                   push edi
// 0067f0d2  8bf9                 mov edi, ecx
// 0067f0d4  e887ffffff           call 0x67f060
// 0067f0d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067f0dd  8bf0                 mov esi, eax
// 0067f0df  8b06                 mov eax, dword ptr [esi]
// 0067f0e1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067f0e7  51                   push ecx
// 0067f0e8  57                   push edi
// 0067f0e9  8bce                 mov ecx, esi
// 0067f0eb  ffd2                 call edx
// 0067f0ed  5f                   pop edi
// 0067f0ee  8bc6                 mov eax, esi
// 0067f0f0  5e                   pop esi
// 0067f0f1  c20400               ret 4

struct CXTPControlSelector {
    void* field0;
    void* func_0067f060();
    void* func_0067f0d0(void* arg);
};

void* CXTPControlSelector::func_0067f0d0(void* arg)
{
    void* p = func_0067f060();
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*, void*);
    Fn fn = (Fn)vtbl[0x38];
    fn(p, this, arg);
    return p;
}
