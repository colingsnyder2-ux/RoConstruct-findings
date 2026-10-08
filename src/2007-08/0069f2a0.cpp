// from server: 100% by colin
// roc 2007-08 0069f2a0  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f2a0
//
// 0069f2a0  56                   push esi
// 0069f2a1  8bf1                 mov esi, ecx
// 0069f2a3  e8e81c0700           call 0x710f90
// 0069f2a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069f2ac  8b10                 mov edx, dword ptr [eax]
// 0069f2ae  8b5210               mov edx, dword ptr [edx + 0x10]
// 0069f2b1  51                   push ecx
// 0069f2b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069f2b6  56                   push esi
// 0069f2b7  51                   push ecx
// 0069f2b8  8bc8                 mov ecx, eax
// 0069f2ba  ffd2                 call edx
// 0069f2bc  5e                   pop esi
// 0069f2bd  c20800               ret 8

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
