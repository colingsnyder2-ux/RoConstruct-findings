// from server: 98% by colin
struct DxUserInput {
    unsigned char pad[0x1d];
    unsigned char field_1d;
    unsigned char pad2[0x2a - 0x1e];
    unsigned char field_2a;
    unsigned char pad3[0x36 - 0x2b];
    unsigned char field_36;
    unsigned char field_37;
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
    if (c & mask)
        result |= 0x200;
    return result;
}
