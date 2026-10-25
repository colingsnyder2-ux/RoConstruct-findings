// from server: 100% by tester
// roc 2011-06 0071f990  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071f990
//
// 0071f990  8b01                 mov eax, dword ptr [ecx]
// 0071f992  8b5018               mov edx, dword ptr [eax + 0x18]
// 0071f995  ffd2                 call edx
// 0071f997  32c0                 xor al, al
// 0071f999  c20800               ret 8

struct S {
    bool f(int, int);
};

bool S::f(int, int)
{
    struct VTable {
        char pad[0x18];
        void (__thiscall *fn)(S*);
    };
    VTable* vt = *(VTable**)this;
    vt->fn(this);
    return false;
}
