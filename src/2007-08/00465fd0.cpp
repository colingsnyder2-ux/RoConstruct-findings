// from server: 88% by colin
// roc 2007-08 00465fd0  unit: DxUserInput  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00465fd0
//
// 00465fd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00465fd4  ba80000000           mov edx, 0x80
// 00465fd9  33c0                 xor eax, eax
// 00465fdb  84512a               test byte ptr [ecx + 0x2a], dl
// 00465fde  7405                 je 0x465fe5
// 00465fe0  b801000000           mov eax, 1
// 00465fe5  845136               test byte ptr [ecx + 0x36], dl
// 00465fe8  7403                 je 0x465fed
// 00465fea  83c802               or eax, 2
// 00465fed  84511d               test byte ptr [ecx + 0x1d], dl
// 00465ff0  7403                 je 0x465ff5
// 00465ff2  83c840               or eax, 0x40
// 00465ff5  84919d000000         test byte ptr [ecx + 0x9d], dl
// 00465ffb  7402                 je 0x465fff
// 00465ffd  0bc2                 or eax, edx
// 00465fff  8a4938               mov cl, byte ptr [ecx + 0x38]
// 00466002  22ca                 and cl, dl
// 00466004  7405                 je 0x46600b
// 00466006  0d00010000           or eax, 0x100
// 0046600b  84c9                 test cl, cl
// 0046600d  7405                 je 0x466014
// 0046600f  0d00020000           or eax, 0x200
// 00466014  c3                   ret 

struct DxUserInput {
    unsigned char pad[0x1d];
    unsigned char field_1d;
    unsigned char pad2[0x2a - 0x1e];
    unsigned char field_2a;
    unsigned char pad3[0x36 - 0x2b];
    unsigned char field_36;
    unsigned char field_38;
    unsigned char pad4[0x9d - 0x39];
    unsigned char field_9d;
};

int getFlags(DxUserInput* p) {
    unsigned char mask = 0x80;
    int result = 0;
    if (p->field_2a & mask)
        result = 1;
    if (p->field_36 & mask)
        result |= 2;
    if (p->field_1d & mask)
        result |= 0x40;
    if (p->field_9d & mask)
        result |= mask;
    unsigned char c = p->field_38 & mask;
    if (c)
        result |= 0x100;
    if (c)
        result |= 0x200;
    return result;
}
