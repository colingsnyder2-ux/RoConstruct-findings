// from server: 51% by colin
extern "C" double __stdcall G1_func_004ffef0();
extern "C" void __stdcall G1_func_004796d0();

struct S {
    char pad[0x18];
    int refcount;
    char flag1c;
    char flag1d;
    char pad1e[2];
    double value20;
    double value28;
    char pad30[8];
    int count3c;
    double value40;
    double value48;
    void func_00479820();
};

void S::func_00479820()
{
    refcount--;
    G1_func_004796d0();
    flag1d = flag1c;
    double t = G1_func_004ffef0();
    double h = t - value20;
    double zero = 0.0;
    double one = 1.0;
    double a;
    if (zero == h) {
        a = *(double*)0x7986a0;
    } else {
        if (one < h) {
            if (zero < h) {
                a = one;
            } else {
                a = zero;
            }
        } else {
            a = *(double*)0x7986a8;
        }
    }
    double e = (double)count3c;
    double d = value28;
    double f = value48;
    double g = value40;
    value28 = d + (e / a - d) * t;
    value48 = f + (e / a - f) * t;
    value40 = g + (e - g) * t;
    if (!(*(int*)0x8bd108 & 1)) {
        *(int*)0x8bd108 |= 1;
        *(double*)0x8bd100 = **(double**)0x77e564;
    }
    if (*(double*)0x8bd100 != value28) {
        bool cl;
        bool al;
        if (value28 < one) {
            cl = true;
        } else {
            cl = false;
        }
        if (value28 > one) {
            al = true;
        } else {
            al = false;
        }
        if (cl || al) {
            if (value28 <= one) {
                value28 = value28;
            }
        } else {
            value28 = *(double*)0x798698;
        }
    }
    if (!(*(int*)0x8bd108 & 1)) {
        *(int*)0x8bd108 |= 1;
        *(double*)0x8bd100 = **(double**)0x77e564;
    }
    if (*(double*)0x8bd100 != value48) {
        bool cl;
        bool al;
        if (value48 < one) {
            cl = true;
        } else {
            cl = false;
        }
        if (value48 > one) {
            al = true;
        } else {
            al = false;
        }
        if (cl || al) {
            if (value48 <= one) {
                value48 = value48;
            }
        } else {
            value48 = *(double*)0x798690;
        }
    }
    if (!(*(int*)0x8bd108 & 1)) {
        *(int*)0x8bd108 |= 1;
        *(double*)0x8bd100 = **(double**)0x77e564;
    }
    if (*(double*)0x8bd100 != value40) {
        bool cl;
        bool al;
        if (value40 < one) {
            cl = true;
        } else {
            cl = false;
        }
        if (value40 > one) {
            al = true;
        } else {
            al = false;
        }
        if (cl || al) {
            if (value40 <= one) {
                value40 = value40;
            }
        } else {
            value40 = value48;
        }
    }
    value20 = t;
}
