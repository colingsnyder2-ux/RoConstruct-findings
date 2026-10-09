// roc 2009-06 007912a0  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007912a0
//
// 007912a0  56                   push esi
// 007912a1  8bf1                 mov esi, ecx
// 007912a3  e8c8feffff           call 0x791170
// 007912a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007912ac  8b10                 mov edx, dword ptr [eax]
// 007912ae  8b5210               mov edx, dword ptr [edx + 0x10]
// 007912b1  51                   push ecx
// 007912b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007912b6  56                   push esi
// 007912b7  51                   push ecx
// 007912b8  8bc8                 mov ecx, eax
// 007912ba  ffd2                 call edx
// 007912bc  5e                   pop esi
// 007912bd  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000007@@QAEXHH@Z)

namespace ns_ROCX000007 {
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
