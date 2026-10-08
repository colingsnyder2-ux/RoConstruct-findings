// from server: 100% by colin
// roc 2007-08 005740a0  unit: RBX::PartInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005740a0
//
// 005740a0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 005740a6  d94074               fld dword ptr [eax + 0x74]
// 005740a9  c3                   ret 

struct Sub {
    char pad[0x74];
    float value;
};

struct PartInstance {
    char pad[0x1d8];
    Sub* sub;
    float get() const;
};

float PartInstance::get() const {
    return sub->value;
}
