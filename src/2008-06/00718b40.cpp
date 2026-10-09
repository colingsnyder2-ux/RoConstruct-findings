// roc 2008-06 00718b40  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718b40
//
// 00718b40  56                   push esi
// 00718b41  8bf1                 mov esi, ecx
// 00718b43  e8985b0700           call 0x78e6e0
// 00718b48  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00718b4c  8b10                 mov edx, dword ptr [eax]
// 00718b4e  8b5210               mov edx, dword ptr [edx + 0x10]
// 00718b51  51                   push ecx
// 00718b52  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00718b56  56                   push esi
// 00718b57  51                   push ecx
// 00718b58  8bc8                 mov ecx, eax
// 00718b5a  ffd2                 call edx
// 00718b5c  5e                   pop esi
// 00718b5d  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000006@@QAEXHH@Z)

namespace ns_ROCX000006 {
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
