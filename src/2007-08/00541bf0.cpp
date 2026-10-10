// from server: 87% by colin
// roc 2007-08 00541bf0  unit: RBX::VInstance  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541bf0

struct RBXString {
    void assign(const RBXString& other);
};

extern "C" bool (__stdcall *RBXStringCompare)(const RBXString* a, const RBXString* b);
extern "C" void (__stdcall *RBXStringAssign)(RBXString* a, const RBXString* b);

struct VInstance {
    char pad[0xc8];
    RBXString name;
    void setName(const RBXString& value);
    void unknown_444710(const char* s);
};

void VInstance::setName(const RBXString& value)
{
    if (RBXStringCompare(&this->name, &value)) {
        RBXStringAssign(&this->name, &value);
        this->unknown_444710("tLSW");
    }
}
