// from server: 100% by colin
// roc 2007-08 0069f2e0  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f2e0
//
// 0069f2e0  56                   push esi
// 0069f2e1  8bf1                 mov esi, ecx
// 0069f2e3  e8a81c0700           call 0x710f90
// 0069f2e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069f2ec  8b10                 mov edx, dword ptr [eax]
// 0069f2ee  8b5218               mov edx, dword ptr [edx + 0x18]
// 0069f2f1  51                   push ecx
// 0069f2f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069f2f6  56                   push esi
// 0069f2f7  51                   push ecx
// 0069f2f8  8bc8                 mov ecx, eax
// 0069f2fa  ffd2                 call edx
// 0069f2fc  5e                   pop esi
// 0069f2fd  c20800               ret 8

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
