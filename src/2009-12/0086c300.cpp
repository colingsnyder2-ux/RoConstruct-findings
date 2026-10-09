// roc 2009-12 0086c300  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c300
//
// 0086c300  56                   push esi
// 0086c301  8bf1                 mov esi, ecx
// 0086c303  e868550700           call 0x8e1870
// 0086c308  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086c30c  8b10                 mov edx, dword ptr [eax]
// 0086c30e  8b5218               mov edx, dword ptr [edx + 0x18]
// 0086c311  51                   push ecx
// 0086c312  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086c316  56                   push esi
// 0086c317  51                   push ecx
// 0086c318  8bc8                 mov ecx, eax
// 0086c31a  ffd2                 call edx
// 0086c31c  5e                   pop esi
// 0086c31d  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX00000f@@QAEXHH@Z)

namespace ns_ROCX00000f {
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
