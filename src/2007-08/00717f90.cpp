// from server: 91% by colin
// roc 2007-08 00717f90  unit: CXTPRibbonControlTab  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717f90
//
// 00717f90  56                   push esi
// 00717f91  57                   push edi
// 00717f92  8bf9                 mov edi, ecx
// 00717f94  e887ffffff           call 0x717f20
// 00717f99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00717f9d  8bf0                 mov esi, eax
// 00717f9f  8b06                 mov eax, dword ptr [esi]
// 00717fa1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00717fa7  51                   push ecx
// 00717fa8  57                   push edi
// 00717fa9  8bce                 mov ecx, esi
// 00717fab  ffd2                 call edx
// 00717fad  5f                   pop edi
// 00717fae  8bc6                 mov eax, esi
// 00717fb0  5e                   pop esi
// 00717fb1  c20400               ret 4

struct CXTPRibbonControlTab {
    void* getSite();
    void OnTabChanged(int);
    void* f(int);
};

void* CXTPRibbonControlTab::f(int arg)
{
    void* p = getSite();
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vtbl[0xe0 / 4];
    fn(p, this, arg);
    return p;
}
