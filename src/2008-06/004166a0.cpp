// from server: 45% by colin
struct VCContent_CComObject {
    int ProcessUrl(int a, int b);
};

extern "C" int __cdecl sub_41DCD0(int);
extern "C" int __cdecl sub_429330(int, int, int);
extern "C" int __cdecl sub_6A0968();
extern "C" int __cdecl sub_6A0962(int, int);
extern "C" int __cdecl sub_6A095C(int, int);
extern "C" int __cdecl sub_409750(int);
extern "C" int __cdecl sub_569A40(int, int, int, int);
extern "C" int __cdecl sub_5DF620(int);

struct Str {
    char buf[0x20];
    Str();
    ~Str();
};

struct Str2 {
    char buf[0x38];
    Str2();
    ~Str2();
};

extern "C" void __stdcall mfc_1087(void*);
extern "C" int __stdcall mfc_1117(void*, int);
extern "C" int __stdcall mfc_2539(void*, int, int, int);
extern "C" int __stdcall mfc_306(void*, int);
extern "C" int __stdcall mfc_316(void*, int);
extern "C" int __stdcall mfc_321(void*);
extern "C" int __stdcall mfc_601(void*, int);
extern "C" int __stdcall mfc_910(void*);

int VCContent_CComObject::ProcessUrl(int a, int b) {
    Str s1;
    int r = sub_41DCD0(b);
    if (r == 0) {
        Str2 s2;
        int p = mfc_316(&a, b);
        int q = sub_409750(p);
        sub_569A40(q, a + 8, 1, (int)&s2);
        sub_5DF620((int)&s2);
        mfc_321(&a);
        mfc_910(&s2);
        return 0;
    }
    mfc_1087(&a);
    int p1 = mfc_306(&a, b);
    int p2 = mfc_1117(&a, 0x80EA80);
    mfc_2539(&a, p2, p1, 0);
    mfc_321(&a);
    int p3 = mfc_601(&a, r);
    int res = sub_429330(0x816518, p3, 0);
    mfc_321(&a);
    return res;
}
