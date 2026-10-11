// from server: 53% by atomic.potato
extern "C" int __stdcall sub_686E50(int*, int*, int, int, int, int, int);
extern "C" int __stdcall sub_687040(int*, int, int, int, int, int, int);
extern "C" int (__stdcall *g_pubsync)(void*);

struct S {
    char pad0[0x10];
    int* p10;
    int* p14;
    char pad18[0x8];
    int* p20;
    int* p24;
    char pad28[0x8];
    int* p30;
    int* p34;
    char pad38[0x8];
    char buf40[0x60];
    int v_a0;
    int f(int, int, int, int);
};

int S::f(int a, int b, int c, int d)
{
    int* p20 = p20;
    int ecx = *p20;
    if (ecx != 0 && a == 1 && d == 1) {
        int* p10v = p10;
        int eax = *p10v - ecx;
        int edx = eax >> 31;
        if (!(p10v > (int*)b || (p10v == (int*)b && (unsigned)eax > (unsigned)c))) {
            int* p30v = p30;
            int eax2 = *p30v;
            int edx2 = eax2 >> 31;
            if (!(b > edx2 || (b == edx2 && (unsigned)c > (unsigned)eax2))) {
                *p30v = *p30v - c;
                *p20 = *p20 + c;
                sub_686E50((int*)buf40, &v_a0, v_a0, 0, 0, 1, 1);
            }
        }
    }
    if (*p24 != 0) {
        g_pubsync(this);
    }
    if (a == 1 && *p20 != 0) {
        int eax3 = *p30;
        int edx3 = eax3 >> 31;
        c = c - eax3;
        b = b - edx3 - (c > (unsigned)c ? 0 : 0);
    }
    *p10 = 0;
    *p20 = 0;
    *p30 = 0;
    *p14 = 0;
    *p24 = 0;
    *p34 = 0;
    sub_687040((int*)buf40, b, c, a, d, v_a0, v_a0);
    return 0;
}
