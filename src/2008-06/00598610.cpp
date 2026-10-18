// from server: 68% by colin
// roc 2008-06 00598610  unit: RBX::Decal  size: 126 bytes

struct RBXString {
    void assign(const RBXString& other);
    ~RBXString();
};

extern "C" int __stdcall sub_55BD60(void* a, void* b);
extern "C" void* __stdcall sub_80240C(void* a);
extern "C" void __stdcall sub_802468(void* a);

struct RBXDecal {
    char pad[0x144];
    RBXString name;
    void setProperty(const char* name, const RBXString& value);
    void construct(const RBXString& value);
};

void RBXDecal::construct(const RBXString& value) {
    RBXString temp;
    if (sub_55BD60(&this->name, &temp)) {
        sub_80240C(&temp);
        this->name.assign(value);
        this->setProperty((const char*)0x975f14, value);
    }
    sub_802468(&temp);
}
