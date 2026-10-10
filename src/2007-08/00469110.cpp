// from server: 31% by colin
struct LDraw2RobloxColorMap {
    int f(int, int, int, int, int, int, int);
};

extern "C" {
    void __stdcall std_string_ctor(void*, const char*);
    void __stdcall std_string_dtor(void*);
    int __cdecl sub_46C5A0(void*, void*);
}

int LDraw2RobloxColorMap::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char s1[28];
    char s2[28];
    int v;

    std_string_ctor(s1, "close");
    v = sub_46C5A0(s2, s1);
    std_string_dtor(s1);
    if (v == 0) {
        std_string_dtor(s2);
        return 0;
    }

    std_string_ctor(s1, "exact");
    v = sub_46C5A0(s2, s1);
    std_string_dtor(s1);
    std_string_dtor(s2);
    if (v == 0)
        return 1;
    return 2;
}
