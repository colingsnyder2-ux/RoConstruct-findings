// from server: 100% by colin
// roc 2007-08 005740b0  unit: RBX::PartInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005740b0
//
// 005740b0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 005740b6  d94078               fld dword ptr [eax + 0x78]
// 005740b9  c3                   ret 

struct Sub {
    char pad[0x78];
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
