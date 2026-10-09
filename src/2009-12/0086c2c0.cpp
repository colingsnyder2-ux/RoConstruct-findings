// roc 2009-12 0086c2c0  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c2c0
//
// 0086c2c0  56                   push esi
// 0086c2c1  8bf1                 mov esi, ecx
// 0086c2c3  e8a8550700           call 0x8e1870
// 0086c2c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086c2cc  8b10                 mov edx, dword ptr [eax]
// 0086c2ce  8b5210               mov edx, dword ptr [edx + 0x10]
// 0086c2d1  51                   push ecx
// 0086c2d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086c2d6  56                   push esi
// 0086c2d7  51                   push ecx
// 0086c2d8  8bc8                 mov ecx, eax
// 0086c2da  ffd2                 call edx
// 0086c2dc  5e                   pop esi
// 0086c2dd  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX00000d@@QAEXHH@Z)

namespace ns_ROCX00000d {
struct CSelectionCaption {
    void method(int, int);
};

extern "C" void* __cdecl sub_710f90();

void CSelectionCaption::method(int a, int b) {
    void* p = sub_710f90();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, int, void*, int) = (void (__thiscall *)(void*, int, void*, int))vtbl[4];
    fn(p, a, this, b);
}
}
