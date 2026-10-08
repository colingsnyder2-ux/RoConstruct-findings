// from server: 100% by colin
// roc 2007-08 0057b4a0  unit: RBX::RootInstance  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b4a0
//
// 0057b4a0  8b817c020000         mov eax, dword ptr [ecx + 0x27c]
// 0057b4a6  8a4c2404             mov cl, byte ptr [esp + 4]
// 0057b4aa  884850               mov byte ptr [eax + 0x50], cl
// 0057b4ad  c20400               ret 4

struct Inner {
    char pad[0x50];
    unsigned char field;
};

struct Outer {
    char pad[0x27c];
    Inner* inner;
    void setField(unsigned char value);
};

void Outer::setField(unsigned char value) {
    inner->field = value;
}
