// roc 2011-06 0087e690  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e690
//
// 0087e690  56                   push esi
// 0087e691  8bf1                 mov esi, ecx
// 0087e693  e8783b0700           call 0x8f2210
// 0087e698  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087e69c  8b10                 mov edx, dword ptr [eax]
// 0087e69e  8b5210               mov edx, dword ptr [edx + 0x10]
// 0087e6a1  51                   push ecx
// 0087e6a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087e6a6  56                   push esi
// 0087e6a7  51                   push ecx
// 0087e6a8  8bc8                 mov ecx, eax
// 0087e6aa  ffd2                 call edx
// 0087e6ac  5e                   pop esi
// 0087e6ad  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000001@@QAEXHH@Z)

namespace ns_ROCX000001 {
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
