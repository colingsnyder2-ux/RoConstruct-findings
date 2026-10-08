// from server: 78% by colin
// roc 2007-08 005a1930  unit: RBX::VShirt::?$BoundPropGetSet  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1930
//
// 005a1930  8b442408             mov eax, dword ptr [esp + 8]
// 005a1934  85c0                 test eax, eax
// 005a1936  7413                 je 0x5a194b
// 005a1938  8b4908               mov ecx, dword ptr [ecx + 8]
// 005a193b  8b5408fc             mov edx, dword ptr [eax + ecx - 4]
// 005a193f  83c0fc               add eax, -4
// 005a1942  8b442404             mov eax, dword ptr [esp + 4]
// 005a1946  8910                 mov dword ptr [eax], edx
// 005a1948  c20800               ret 8
// 005a194b  8b4908               mov ecx, dword ptr [ecx + 8]
// 005a194e  33c0                 xor eax, eax
// 005a1950  8b1408               mov edx, dword ptr [eax + ecx]
// 005a1953  8b442404             mov eax, dword ptr [esp + 4]
// 005a1957  8910                 mov dword ptr [eax], edx
// 005a1959  c20800               ret 8

struct BoundPropGetSet {
    void getValue(int* out, int object) const;
};

void BoundPropGetSet::getValue(int* out, int object) const {
    if (object != 0) {
        int offset = *(int*)((char*)this + 8);
        int value = *(int*)((char*)object + offset - 4);
        *out = value;
    } else {
        int offset = *(int*)((char*)this + 8);
        int value = *(int*)((char*)0 + offset);
        *out = value;
    }
}
