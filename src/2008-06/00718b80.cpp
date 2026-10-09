// roc 2008-06 00718b80  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718b80
//
// 00718b80  56                   push esi
// 00718b81  8bf1                 mov esi, ecx
// 00718b83  e8585b0700           call 0x78e6e0
// 00718b88  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00718b8c  8b10                 mov edx, dword ptr [eax]
// 00718b8e  8b5218               mov edx, dword ptr [edx + 0x18]
// 00718b91  51                   push ecx
// 00718b92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00718b96  56                   push esi
// 00718b97  51                   push ecx
// 00718b98  8bc8                 mov ecx, eax
// 00718b9a  ffd2                 call edx
// 00718b9c  5e                   pop esi
// 00718b9d  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000000@@QAEXHH@Z)

namespace ns_ROCX000000 {
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
