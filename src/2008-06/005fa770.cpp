// from server: 53% by colin
extern float G_0081e380;
extern float G_0081e37c;
extern float G_0081c434;
extern int G_0097b5c4;
extern unsigned char G_0097b5c8;

extern "C" int __cdecl func_006a17f0(float);

struct S {
    int field0;
    int field4;
    int field8;
    void sub_00502080(int);
    void func_005fa770(int, int);
};

void S::func_005fa770(int a, int b)
{
    int old = field4;
    field4 = a;
    int limit;
    if ((G_0097b5c8 & 1) == 0) {
        G_0097b5c8 |= 1;
        G_0097b5c4 = 10;
        limit = 10;
    } else {
        limit = G_0097b5c4;
    }
    int cur = field8;
    int f4 = field4;
    if (f4 > cur) {
        if (cur == 0) {
            field8 = a;
            sub_00502080(old);
            return;
        }
        if (f4 < limit) {
            field8 = limit;
            sub_00502080(old);
            return;
        }
        float scale = G_0081e380;
        unsigned int t = (unsigned int)cur;
        t = t + t;
        t = t + t;
        if (t > 0x61a80) {
            scale = G_0081e37c;
        } else if (t > 0xfa00) {
            scale = G_0081c434;
        }
        int tmp = cur;
        int prod = (int)(scale * (float)tmp);
        int r = func_006a17f0((float)tmp);
        r = r - tmp;
        r = r + f4;
        field8 = r;
        int lim = G_0097b5c4;
        if (r < lim) {
            field8 = lim;
        }
        sub_00502080(old);
        return;
    }
    int q = cur / 3;
    if (f4 > q) {
        return;
    }
    if (b == 0) {
        return;
    }
    if (f4 <= limit) {
        return;
    }
    int v = f4;
    if (v >= old) {
        v = old;
    }
    sub_00502080(v);
}
