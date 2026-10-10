// from server: 43% by colin
struct S_func_0059e910 {
    char pad0[8];
    void f(const char*);
};

struct S_sub_59E2F0 {
    void g(void*);
};

extern "C" {
    void* __stdcall sub_77E558(void*, const char*);
    void* __stdcall sub_77E644(void*, const char*);
    void* __stdcall sub_77E69C(void*, void*);
    void* __stdcall sub_77E6AC(void*);
    void* __cdecl sub_5450B0(void*, void*);
}

void S_func_0059e910::f(const char* a1)
{
    char buf1[28];
    char buf2[28];
    char buf3[28];
    char buf4[28];
    void* p;

    sub_77E558(buf1, "Textures\\");
    sub_77E644(buf2, a1);
    p = sub_5450B0(buf3, buf2);
    sub_77E69C(buf4, p);
    sub_77E6AC(buf4);
    sub_77E6AC(buf3);
    sub_77E6AC(buf2);
    ((S_sub_59E2F0*)this)->g(buf4);
    sub_77E6AC(buf4);
}
