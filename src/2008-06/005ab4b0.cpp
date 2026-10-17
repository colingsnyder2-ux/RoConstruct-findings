// from server: 43% by colin
struct S {
    char pad0[0x104];
    int field104;
    char pad108[0xb0];
    double field1b8;
    double field1c0;
    char pad1c8[0x8];
    char field1d0[0x8];
    char field1d8[0x8];
    void f();
};

extern "C" void __stdcall ReleaseMutex(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

void sub_594ce0(void*);
void sub_594d00(void*);
void sub_594d20(void*, void*);
void sub_594d40(void*, void*);
void sub_5f1dd0(void*);
void sub_5f1df0(void*);
void sub_5f1ea0(void*, void*);
void sub_5a6b40(void*, int);
int sub_6a17f0(double);
double sub_508410();

extern double g_834558;
extern double g_81cde0;
extern void* g_802284;
extern void* g_8021b0;
extern char g_976b78;

void S::f() {
    double saved = field1b8;
    while (field104 != 0) {
        char* p1d0 = (char*)this + 0x1d0;
        char* p1d8 = (char*)this + 0x1d8;
        sub_594ce0(p1d0);
        double zero = 0.0;
        double v = saved;
        if (!(v <= zero)) {
            double scaled = v * g_834558;
            int n = sub_6a17f0(scaled);
            int use = n;
            if (n <= 1) {
                int one = 1;
                use = one;
            }
            int tmp[2];
            sub_5a6b40(tmp, 1);
            int q = (int)((long long)use * 0x10624dd3 >> 32);
            q = (q >> 6) + ((unsigned)q >> 31);
            int rem = use - q * 1000;
            int nanos = rem * 1000000;
            int* t = (int*)tmp;
            t[0] += q;
            t[1] += 0;
            t[2] += nanos;
            if (t[2] >= 1000000000) {
                t[0] += 1;
                t[1] += 0;
                t[2] -= 1000000000;
            }
            sub_5f1dd0(p1d8);
            char tmp2[8];
            sub_594d40(p1d0, tmp2);
            sub_5f1ea0(p1d8, tmp);
            sub_594d20(p1d0, tmp2);
        } else {
            sub_5f1dd0(p1d8);
            char tmp2[8];
            sub_594d40(p1d0, tmp2);
            sub_5f1df0(p1d8);
            sub_594d20(p1d0, tmp2);
        }
        sub_594d00(p1d0);
        sub_594ce0(p1d0);
        if (field1b8 != 0.0) {
            double now = sub_508410();
            double diff = field1c0 - now;
            if (diff > 0.0) {
                double arg = field1b8;
                int r = ((int (__stdcall*)(void*, int, double))g_802284)((char*)this + 0x1c8, 1, arg);
                if (r == 0) {
                    ((void (__stdcall*)(const char*))g_8021b0)(&g_976b78);
                }
            }
        } else {
            saved = g_81cde0;
        }
        sub_594d00(p1d0);
    }
}
