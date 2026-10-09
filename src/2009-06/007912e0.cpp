// roc 2009-06 007912e0  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007912e0
//
// 007912e0  56                   push esi
// 007912e1  8bf1                 mov esi, ecx
// 007912e3  e888feffff           call 0x791170
// 007912e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007912ec  8b10                 mov edx, dword ptr [eax]
// 007912ee  8b5218               mov edx, dword ptr [edx + 0x18]
// 007912f1  51                   push ecx
// 007912f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007912f6  56                   push esi
// 007912f7  51                   push ecx
// 007912f8  8bc8                 mov ecx, eax
// 007912fa  ffd2                 call edx
// 007912fc  5e                   pop esi
// 007912fd  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000001@@QAEXHH@Z)

namespace ns_ROCX000001 {
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
