// from server: 60% by colin
struct FactoryProduct {
    char pad[4];
    int field_4;
    int field_8;
    void sub_599700(int);
    void sub_599f20(int, int);
};

extern "C" int __cdecl sub_630D60(float);

extern float g_797b38;
extern float g_797b34;
extern float g_797988;
extern int g_8c4ee8;
extern int g_8c4eec;

void FactoryProduct::sub_599f20(int a, int b) {
    int old = field_4;
    field_4 = a;
    int ebx;
    if (!(g_8c4eec & 1)) {
        g_8c4eec |= 1;
        ebx = 10;
        g_8c4ee8 = ebx;
    } else {
        ebx = g_8c4ee8;
    }
    int ecx = field_8;
    int edi = field_4;
    if (edi > ecx) {
        if (ecx != 0) {
            field_8 = a;
            sub_599700(old);
            return;
        }
        if (edi >= ebx) {
            float f = g_797b38;
            unsigned int eax = (unsigned int)ecx * 4;
            if (eax > 0x61a80) {
                f = g_797b34;
            } else if (eax > 0xfa00) {
                f = g_797988;
            }
            int tmp = ecx;
            int r = sub_630D60(f * (float)tmp);
            r = r - ecx + edi;
            field_8 = r;
            int c = g_8c4ee8;
            if (r < c) {
                field_8 = c;
            }
            sub_599700(old);
            return;
        }
        field_8 = ebx;
        sub_599700(old);
        return;
    }
    int q = ecx / 3;
    if (edi <= q) {
        if (b != 0 && edi > ebx) {
            if (edi >= old) {
                edi = old;
            }
            sub_599700(edi);
        }
    }
}
