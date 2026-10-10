// from server: 44% by tester
struct S {
    void f(char *a, char *b);
};

extern "C" {
    void __stdcall sub_5450B0(void *dst, const char *src, const char *ext);
    void __stdcall sub_600BD0(void *self, char *a, char *b);
}

void S::f(char *a, char *b) {
    char buf1[32];
    char buf2[32];
    char buf3[32];
    char buf4[32];
    char buf5[32];
    char buf6[32];

    sub_5450B0(buf1, "Textures\\", a);
    sub_5450B0(buf2, buf1, ".png");
    sub_5450B0(buf3, buf2, b);
    sub_5450B0(buf4, buf3, ".png");
    sub_5450B0(buf5, buf4, a);
    sub_5450B0(buf6, buf5, b);
    sub_600BD0(this, buf6, buf5);
}
