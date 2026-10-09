// roc 2010-06 00820f90  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820f90
//
// 00820f90  56                   push esi
// 00820f91  8bf1                 mov esi, ecx
// 00820f93  e8c8feffff           call 0x820e60
// 00820f98  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00820f9c  8b10                 mov edx, dword ptr [eax]
// 00820f9e  8b5210               mov edx, dword ptr [edx + 0x10]
// 00820fa1  51                   push ecx
// 00820fa2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00820fa6  56                   push esi
// 00820fa7  51                   push ecx
// 00820fa8  8bc8                 mov ecx, eax
// 00820faa  ffd2                 call edx
// 00820fac  5e                   pop esi
// 00820fad  c20800               ret 8
// copied from an identical function in another client (function ?method@CSelectionCaption@ns_ROCX000009@@QAEXHH@Z)

namespace ns_ROCX000009 {
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
