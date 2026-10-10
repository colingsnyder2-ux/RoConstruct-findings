// from server: 42% by colin
struct RootInstance {
    int field0;
    int field4;
    int field8;
    void sub_599700(int);
};

extern float g_797b38;
extern float g_797b34;
extern float g_797988;
extern int g_8c3038;
extern int g_8c303c;

extern "C" int __cdecl sub_630d60(float);

void RootInstance::sub_599700(int) {}

void RootInstance_setField(int* self, int value, char flag);

void RootInstance_setField(int* self, int value, char flag)
{
    int old = self[1];
    self[1] = value;
    int ebx;
    if (!(g_8c303c & 1)) {
        g_8c303c |= 1;
        ebx = 10;
        g_8c3038 = ebx;
    } else {
        ebx = g_8c3038;
    }
    int ecx = self[2];
    int edi = self[1];
    if (edi > ecx) {
        if (ecx == 0) {
            self[2] = value;
            ((RootInstance*)self)->sub_599700(old);
            return;
        }
        if (edi < ebx) {
            self[2] = ebx;
            ((RootInstance*)self)->sub_599700(old);
            return;
        }
        float f;
        if ((unsigned)(ecx * 4) > 0x61a80) {
            f = g_797b34;
        } else if ((unsigned)(ecx * 4) > 0xfa00) {
            f = g_797988;
        } else {
            f = g_797b38;
        }
        int tmp = ecx;
        float prod = f * (float)tmp;
        int r = sub_630d60(prod);
        r = r - tmp + edi;
        self[2] = r;
        int c = g_8c3038;
        if (r < c) {
            self[2] = c;
        }
        ((RootInstance*)self)->sub_599700(old);
        return;
    }
    int q = ecx / 3;
    if (edi > q) {
        return;
    }
    if (flag == 0) {
        return;
    }
    if (edi <= ebx) {
        return;
    }
    if (edi < old) {
        old = edi;
    }
    ((RootInstance*)self)->sub_599700(old);
}
