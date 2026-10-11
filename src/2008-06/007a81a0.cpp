// from server: 76% by colin
struct S_func_007a81a0 {
    char pad0[0x18];
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
};

extern "C" int __stdcall func_007a8130(S_func_007a81a0* p);

int __stdcall func_007a81a0(S_func_007a81a0* self, int a2, int a3, const char* a4)
{
    if (a4 == 0)
        return -6;
    if (a4[0] != 0x31)
        return -6;
    if (a3 != 0x38)
        return -6;
    if (self == 0)
        return -2;

    self->field_18 = 0;
    if (self->field_20 == 0) {
        self->field_20 = 0x7a32b0;
        self->field_28 = 0;
    }
    if (self->field_24 == 0)
        self->field_24 = 0x530770;

    int r = ((int (__stdcall*)(int, int, int))self->field_20)(self->field_28, 1, 0x2530);
    if (r == 0)
        return -4;

    self->field_1c = r;
    int v = a2;
    if (v < 0) {
        *(int*)(r + 8) = 0;
        v = -v;
    } else {
        int d = v >> 4;
        d = d + 1;
        *(int*)(r + 8) = d;
        if (v < 0x30)
            v = v & 0xf;
    }

    int t = v - 8;
    if ((unsigned)t <= 7) {
        *(int*)(r + 0x24) = v;
        *(int*)(r + 0x34) = 0;
        func_007a8130(self);
        return 0;
    }

    ((void (__stdcall*)(int, int))self->field_24)(self->field_28, r);
    self->field_1c = 0;
    return -2;
}
