// roc 2007-03 0054c710  unit: seg_00540000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054c710
//
// 0054c710  8a442404             mov al, byte ptr [esp + 4]
// 0054c714  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0054c717  f6d8                 neg al
// 0054c719  1bc0                 sbb eax, eax
// 0054c71b  83e010               and eax, 0x10
// 0054c71e  83e2ef               and edx, 0xffffffef
// 0054c721  0bc2                 or eax, edx
// 0054c723  89415c               mov dword ptr [ecx + 0x5c], eax
// 0054c726  c20400               ret 4
// copied from an identical function in another client (function ?setFlag@S@ns_ROCX00001a@@QAEX_N@Z)

namespace ns_ROCX00001a {
struct S {
    char pad[0x5c];
    int field_5c;
    void setFlag(bool value);
};

void S::setFlag(bool value) {
    field_5c = (field_5c & ~0x10) | (value ? 0x10 : 0);
}
}
