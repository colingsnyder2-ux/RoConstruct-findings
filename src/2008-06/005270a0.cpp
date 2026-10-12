// from server: 45% by colin
extern "C" int __stdcall sprintf(char*, const char*, ...);
extern "C" void* __stdcall sub_0051dd80(void*, void*, int);
extern "C" void* __stdcall sub_0051dab0(void*, void*, int);
extern "C" void* __stdcall sub_00526420(void*, const char*, int);

typedef void* (__stdcall *fn_0051dd80)(void*, void*, int);
typedef void* (__stdcall *fn_0051dab0)(void*, void*, int);

struct S_005270a0 {
    void f(double a, char b, double c, void* d);
};

void S_005270a0::f(double a, char b, double c, void* d)
{
    char buf1[16];
    char buf2[16];
    char buf3[16];
    char buf4[16];
    char buf5[4];
    fn_0051dd80 p1 = (fn_0051dd80)0x0051dd80;
    fn_0051dab0 p2 = (fn_0051dab0)0x0051dab0;
    sprintf(buf1, "%12.12e", a);
    sprintf(buf2, "%12.12e", c);
    int n1 = 0;
    while (buf1[n1]) n1++;
    int n2 = 0;
    while (buf2[n2]) n2++;
    sub_00526420(d, "sCAL", n1 + n2 + 2);
    p1(d, buf1, 1);
    p2(d, buf1, 1);
    int n3 = 0;
    while (buf3[n3]) n3++;
    int n4 = n3 + 1;
    if (n4 > 0) {
        p1(d, buf3, n4);
        p2(d, buf3, n4);
    }
    int n5 = 0;
    while (buf4[n5]) n5++;
    if (n5 != 0) {
        p1(d, buf4, n5);
        p2(d, buf4, n5);
    }
    unsigned int v = *(unsigned int*)((char*)d + 0x110);
    buf5[0] = (char)(v >> 24);
    buf5[1] = (char)(v >> 16);
    buf5[2] = (char)(v >> 8);
    buf5[3] = (char)v;
    p2(d, buf5, 4);
}
