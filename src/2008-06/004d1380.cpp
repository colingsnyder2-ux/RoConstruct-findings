// from server: 48% by tester
struct PhysicsSender {
    char pad[0x10];
    int field_0x10;
    int field_0x14;
    int field_0x18;
    char pad2[0x4];
    int field_0x20;
    char pad3[0x30];
    int field_0x50;
    char pad4[0x14];
    int field_0x68;
    int field_0x6c;
    int field_0x70;
    char pad5[0x4];
    int field_0x78;
    int field_0x7c;
    int field_0x80;
    char pad6[0x4];
    int field_0x88;
    int field_0x8c;
    int field_0x90;
    char pad7[0x4];
    int field_0x98;
    int field_0x9c;
    int field_0xa0;
    char pad8[0x4];
    int field_0xa4;
    int field_0xa8;
    char pad9[0x338];
    int field_0x3e0;
    int field_0x3e4;
    int field_0x3e8;
    int field_0x3ec;
    char pad10[0x38];
    int field_0x428;
    char pad11[0x18];
    int field_0x440;
    char pad12[0x50];
    int field_0x490;
    int field_0x494;
    double field_0x498;
    char pad13[0x4];
    unsigned char field_0x4a4;
    char pad14[0x4];
    int field_0x4a8;
    int field_0x4ac;
    int field_0x4b0;
    char pad15[0x20];
    int field_0x4d0;
    int field_0x4d4;
    char pad16[0x2c];
    unsigned char field_0x504;
    char pad17[0x4];
    int field_0x508;
    int field_0x50c;

    void func_004d1380();
};

void PhysicsSender::func_004d1380() {
    int eax = field_0x6c;
    int esi = field_0x68;
    int edx;
    if (esi <= eax) {
        edx = eax - esi;
    } else {
        edx = field_0x70 - esi + eax;
    }
    field_0x3e0 = edx;

    esi = field_0x7c;
    int edi = field_0x78;
    if (edi <= esi) {
        edx = esi - edi;
    } else {
        edx = field_0x80 - edi + esi;
    }
    field_0x3e4 = edx;

    esi = field_0x8c;
    edi = field_0x88;
    if (edi <= esi) {
        edx = esi - edi;
    } else {
        edx = field_0x90 - edi + esi;
    }
    field_0x3e8 = edx;

    esi = field_0x9c;
    edi = field_0x98;
    if (edi <= esi) {
        edx = esi - edi;
    } else {
        edx = field_0xa0 - edi + esi;
    }
    field_0x3ec = edx;

    edx = field_0x20;
    edi = field_0x4d4;
    int ebp = field_0x4d0;
    esi = field_0x4a8;
    field_0x428 = edx;
    edx = field_0x4ac;

    double d;
    if (edi > edx || (edi == edx && ebp > esi)) {
        int ebx = field_0x4b0;
        if (ebx > 0) {
            d = (double)ebx;
            if (ebx < 0) {
                d += *(double*)0x811240;
            }
            int lo = ebp - esi;
            int hi = edi - edx - (ebp < esi ? 1 : 0);
            long long diff = ((long long)hi << 32) | (unsigned int)lo;
            d = (double)diff * *(double*)0x826af0 / d;
        } else {
            d = 0.0;
        }
    } else {
        d = 0.0;
    }
    field_0x498 = d;

    edx = 0;
    field_0x490 = edx;
    if (field_0xa8 > 0) {
        esi = field_0xa4;
        do {
            int* p = *(int**)esi;
            field_0x490 += *(int*)((char*)p + 0xc);
            edx++;
            esi += 4;
        } while (edx < field_0xa8);
    }

    esi = field_0x14;
    int ebx = field_0x10;
    if (ebx <= esi) {
        edx = esi - ebx;
    } else {
        edx = field_0x18 - ebx + esi;
    }
    field_0x494 = edx;

    if (field_0x504 != 0) {
        ebp -= field_0x508;
        edi = edi - field_0x50c - (ebp < 0 ? 1 : 0);
        if (edi < 0) {
            edx = 0;
        } else if (edi > 0) {
            edx = 1;
        } else if (ebp > 0xf4240) {
            edx = 1;
        } else {
            edx = 0;
        }
    } else {
        edx = 0;
    }
    field_0x4a4 = (unsigned char)edx;

    edx = field_0x50;
    esi = 0;
    if (edx != 0) {
        do {
            esi += *(int*)((char*)edx + 4);
            edx = *(int*)((char*)edx + 0x108);
        } while (edx != 0);
    }
    field_0x440 = esi;
}
