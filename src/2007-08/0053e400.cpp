// from server: 87% by colin
// roc 2007-08 0053e400  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e400
//
// 0053e400  8b442404             mov eax, dword ptr [esp + 4]
// 0053e404  85c0                 test eax, eax
// 0053e406  740a                 je 0x53e412
// 0053e408  8b4908               mov ecx, dword ptr [ecx + 8]
// 0053e40b  8a4408fc             mov al, byte ptr [eax + ecx - 4]
// 0053e40f  c20400               ret 4
// 0053e412  8b5108               mov edx, dword ptr [ecx + 8]
// 0053e415  33c0                 xor eax, eax
// 0053e417  8a0410               mov al, byte ptr [eax + edx]
// 0053e41a  c20400               ret 4

struct BoundPropGetSet {
    char pad[8];
    int member;
    char getValue(const void* object) const;
};

char BoundPropGetSet::getValue(const void* object) const {
    if (object)
        return *(const char*)((const char*)object + member - 4);
    return *(const char*)((const char*)0 + member);
}
