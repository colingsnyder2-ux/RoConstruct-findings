// from server: 78% by colin
// roc 2007-08 00653970  unit: CInstanceRecord::CNameItem  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653970
//
// 00653970  83794800             cmp dword ptr [ecx + 0x48], 0
// 00653974  740a                 je 0x653980
// 00653976  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 00653979  8b01                 mov eax, dword ptr [ecx]
// 0065397b  8b5058               mov edx, dword ptr [eax + 0x58]
// 0065397e  ffe2                 jmp edx
// 00653980  33c0                 xor eax, eax
// 00653982  c3                   ret 

struct CNameItem {
    char pad[0x48];
    CNameItem* field_0x48;
    int getValue();
};

int CNameItem::getValue() {
    if (field_0x48 != 0)
        return 0;
    return ((int (__thiscall*)(CNameItem*))((*(void***)field_0x48)[0x58 / 4]))(field_0x48);
}
