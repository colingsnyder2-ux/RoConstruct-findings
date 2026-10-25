// from server: 100% by king_originala
// roc 2008-06 005d80e0  unit: RBX::Humanoid  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d80e0
//
// 005d80e0  83b9ec00000000       cmp dword ptr [ecx + 0xec], 0
// 005d80e7  7415                 je 0x5d80fe
// 005d80e9  8b89f0000000         mov ecx, dword ptr [ecx + 0xf0]
// 005d80ef  d9442404             fld dword ptr [esp + 4]
// 005d80f3  8b01                 mov eax, dword ptr [ecx]
// 005d80f5  8b5020               mov edx, dword ptr [eax + 0x20]
// 005d80f8  51                   push ecx
// 005d80f9  d91c24               fstp dword ptr [esp]
// 005d80fc  ffd2                 call edx
// 005d80fe  c20800               ret 8

struct Target;

struct VTable {
    void* reserved[8];
    void (__thiscall* invoke)(Target*, float);
};

struct Target {
    VTable* vtable;
};

struct S {
    char reserved[0xec];
    int enabled;
    Target* target;
    void f(float value, int unused);
};

void S::f(float value, int unused) {
    if (enabled)
        target->vtable->invoke(target, value);
}
