// from server: 66% by colin
extern "C" int __cdecl sub_5bf500(int, int, int);
extern "C" int __cdecl sub_5bf320(int, int);
extern "C" int __cdecl sub_5bd7e0(int, int);
extern "C" int __cdecl sub_5bd8d0(int, int);
extern "C" int __cdecl sub_5bdb70(int, double);
extern "C" int __cdecl sub_5bdb50(int);
extern "C" int __cdecl sub_5bf350(int, int, int);
extern "C" int __cdecl sub_5bf180(int, int, const char*);

extern "C" int (__stdcall *off_77e994)(const char*, char**, int);
extern "C" int (__stdcall *off_77e99c)(int);

extern "C" const char byte_7ba288[];
extern "C" const double dbl_78b130;

struct S {
    int f(int);
};

int S::f(int a)
{
    int result;
    int base;
    char* endptr;
    int val;
    int c;

    result = sub_5bf500(a, 2, 10);
    if (result == 10) {
        sub_5bf320(a, 1);
        if (sub_5bd7e0(a, 1)) {
            double d = (double)sub_5bd8d0(a, 1);
            sub_5bdb70(a, d);
            return 1;
        }
        sub_5bdb50(a);
        return 1;
    }

    base = sub_5bf350(a, 1, 0);
    if (result < 2 || result > 0x24) {
        sub_5bf180(a, 2, byte_7ba288);
    }

    val = off_77e994((const char*)base, &endptr, result);
    if ((char*)base == endptr) {
        sub_5bdb50(a);
        return 1;
    }

    c = (unsigned char)*endptr;
    while (off_77e99c(c)) {
        endptr++;
        c = (unsigned char)*endptr;
    }

    if (*endptr != 0) {
        sub_5bdb50(a);
        return 1;
    }

    {
        double d;
        if (val < 0) {
            d = (double)val + dbl_78b130;
        } else {
            d = (double)val;
        }
        sub_5bdb70(a, d);
    }
    return 1;
}
