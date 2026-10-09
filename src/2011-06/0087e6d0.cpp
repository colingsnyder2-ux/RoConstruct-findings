// roc 2011-06 0087e6d0  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e6d0
//
// 0087e6d0  56                   push esi
// 0087e6d1  8bf1                 mov esi, ecx
// 0087e6d3  e8383b0700           call 0x8f2210
// 0087e6d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087e6dc  8b10                 mov edx, dword ptr [eax]
// 0087e6de  8b5218               mov edx, dword ptr [edx + 0x18]
// 0087e6e1  51                   push ecx
// 0087e6e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087e6e6  56                   push esi
// 0087e6e7  51                   push ecx
// 0087e6e8  8bc8                 mov ecx, eax
// 0087e6ea  ffd2                 call edx
// 0087e6ec  5e                   pop esi
// 0087e6ed  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000003@@QAEXHH@Z)

namespace ns_ROCX000003 {
struct CSelectionCaption {
    void method(int a, int b);
};

extern "C" void* __cdecl sub_710f90();

void CSelectionCaption::method(int a, int b) {
    void* p = sub_710f90();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, int, void*, int) =
        (void (__thiscall *)(void*, int, void*, int))vtbl[6];
    fn(p, a, this, b);
}
}
