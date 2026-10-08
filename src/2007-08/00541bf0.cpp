// from server: 37% by colin
// roc 2007-08 00541bf0  unit: RBX::VInstance  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541bf0

struct RBXString {
    void assign(const RBXString& other);
};

extern "C" int __stdcall sub_77E630(const RBXString* a, const RBXString* b);
extern "C" RBXString* __stdcall sub_77E690(RBXString* a, const RBXString* b);
extern "C" void __stdcall sub_444710(void* p);

extern char unk_8C14BC;

struct VInstance {
    char pad[0xC8];
    RBXString name;
    void setName(const RBXString& v);
};

void VInstance::setName(const RBXString& v)
{
    if (sub_77E630(&this->name, &v)) {
        sub_77E690(&this->name, &v);
        sub_444710(&unk_8C14BC);
    }
}
