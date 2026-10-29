// roc 2009-12 006f2bf0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f2bf0
//
// 006f2bf0  8b01                 mov eax, dword ptr [ecx]
// 006f2bf2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006f2bf5  ffd2                 call edx
// 006f2bf7  32c0                 xor al, al
// 006f2bf9  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAE_NHH@Z)

namespace ns_ROCX000000 {
// from server: 100% by tester
struct S {
    bool f(int, int);
};

bool S::f(int, int)
{
    struct VTable {
        char pad[0x1c];
        void (__thiscall *fn)(S*);
    };
    VTable* vt = *(VTable**)this;
    vt->fn(this);
    return false;
}
}
