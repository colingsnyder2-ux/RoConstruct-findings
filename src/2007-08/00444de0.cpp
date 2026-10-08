// from server: 80% by colin
// roc 2007-08 00444de0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444de0
//
// 00444de0  8b891c010000         mov ecx, dword ptr [ecx + 0x11c]
// 00444de6  8b442404             mov eax, dword ptr [esp + 4]
// 00444dea  8908                 mov dword ptr [eax], ecx
// 00444dec  c20400               ret 4

struct S {
    char pad[0x11c];
    int value;
    void getValue(int* out) const;
};

void S::getValue(int* out) const {
    *out = value;
}
