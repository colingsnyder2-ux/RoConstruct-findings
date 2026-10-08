// from server: 100% by colin
// roc 2007-08 00573fc0  unit: RBX::PartInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573fc0
//
// 00573fc0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00573fc6  8b4864               mov ecx, dword ptr [eax + 0x64]
// 00573fc9  d9417c               fld dword ptr [ecx + 0x7c]
// 00573fcc  c3                   ret 

struct Inner2 {
    char pad0[0x7c];
    float value;
};

struct Inner1 {
    char pad0[0x64];
    Inner2* inner2;
};

struct S {
    char pad0[0x1d8];
    Inner1* inner1;
    float get() const;
};

float S::get() const {
    return inner1->inner2->value;
}
