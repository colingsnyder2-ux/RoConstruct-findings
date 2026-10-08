// from server: 80% by colin
// roc 2007-08 005e6120  unit: RBX::NewNullTool  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e6120
//
// 005e6120  8b8940020000         mov ecx, dword ptr [ecx + 0x240]
// 005e6126  8b442404             mov eax, dword ptr [esp + 4]
// 005e612a  8908                 mov dword ptr [eax], ecx
// 005e612c  c20400               ret 4

struct S {
    char pad[0x240];
    int field;
    void get(int* out) const;
};

void S::get(int* out) const {
    *out = field;
}
