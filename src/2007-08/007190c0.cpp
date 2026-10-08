// from server: 71% by colin
// roc 2007-08 007190c0  unit: CXTPRibbonGroupControlPopup  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007190c0
//
// 007190c0  56                   push esi
// 007190c1  8bf1                 mov esi, ecx
// 007190c3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007190c9  e872a9f2ff           call 0x643a40
// 007190ce  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007190d2  8b10                 mov edx, dword ptr [eax]
// 007190d4  8b923c010000         mov edx, dword ptr [edx + 0x13c]
// 007190da  6a00                 push 0
// 007190dc  56                   push esi
// 007190dd  8b742410             mov esi, dword ptr [esp + 0x10]
// 007190e1  51                   push ecx
// 007190e2  56                   push esi
// 007190e3  8bc8                 mov ecx, eax
// 007190e5  ffd2                 call edx
// 007190e7  8bc6                 mov eax, esi
// 007190e9  5e                   pop esi
// 007190ea  c20800               ret 8

struct CXTPRibbonGroupControlPopup
{
    char pad[0xfc];
    void* field_fc;
    void* func_007190c0(void* arg1, void* arg2);
};

extern "C" void* __stdcall func_00643a40(void* p);

void* CXTPRibbonGroupControlPopup::func_007190c0(void* arg1, void* arg2)
{
    void* p = func_00643a40(field_fc);
    void** vtbl = *(void***)p;
    void* (__stdcall *fn)(void*, void*, void*, void*, void*) = (void* (__stdcall *)(void*, void*, void*, void*, void*))vtbl[0x13c / 4];
    fn(p, arg1, arg2, this, 0);
    return arg1;
}
