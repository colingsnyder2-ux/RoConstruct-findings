// from server: 100% by tester
// roc 2008-06 005eedf0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eedf0
//
// 005eedf0  8b01                 mov eax, dword ptr [ecx]
// 005eedf2  8b5018               mov edx, dword ptr [eax + 0x18]
// 005eedf5  ffd2                 call edx
// 005eedf7  32c0                 xor al, al
// 005eedf9  c20800               ret 8

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
