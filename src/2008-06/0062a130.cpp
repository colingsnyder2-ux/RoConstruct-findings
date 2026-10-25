// from server: 100% by king_originala
// roc 2008-06 0062a130  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a130
//
// 0062a130  8b442404             mov eax, dword ptr [esp + 4]
// 0062a134  85c0                 test eax, eax
// 0062a136  740a                 je 0x62a142
// 0062a138  8b4908               mov ecx, dword ptr [ecx + 8]
// 0062a13b  d94408ec             fld dword ptr [eax + ecx - 0x14]
// 0062a13f  c20400               ret 4
// 0062a142  8b5108               mov edx, dword ptr [ecx + 8]
// 0062a145  33c0                 xor eax, eax
// 0062a147  d90410               fld dword ptr [eax + edx]
// 0062a14a  c20400               ret 4

struct S {
    int reserved[2];
    int offset;
    float get(void* object);
};

float S::get(void* object) {
    char* base = object ? (char*)object - 20 : 0;
    return *(float*)(base + offset);
}
