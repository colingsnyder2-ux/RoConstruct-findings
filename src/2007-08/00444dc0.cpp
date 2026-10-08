// from server: 80% by colin
// roc 2007-08 00444dc0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444dc0
//
// 00444dc0  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 00444dc6  8b442404             mov eax, dword ptr [esp + 4]
// 00444dca  8908                 mov dword ptr [eax], ecx
// 00444dcc  c20400               ret 4

struct S {
    char pad[0x118];
    int value;
    void get(int* out);
};

void S::get(int* out) {
    *out = this->value;
}
