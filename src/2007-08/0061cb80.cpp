// from server: 7% by colin
struct ChatOutput {
    char pad0[0x11c];
    int field_11c;
    int field_120;
    int field_124;
    int field_128;
    void func(int);
};

extern "C" {
    void __stdcall sub_5555b0(void*);
    void __stdcall sub_555530();
    void __stdcall sub_4e0180(void*, void*, void*);
    void __stdcall sub_50b200();
    void __stdcall sub_50b050();
    void __stdcall sub_736ed0(int, int, int);
    void __stdcall sub_77e6d8();
    void __stdcall sub_77e6ac(void*);
    void __stdcall sub_77e644(void*, const char*, void*);
    float __cdecl flt_786f70();
    float __cdecl flt_79b500();
    double __cdecl dbl_79f2d0();
    float __cdecl flt_79f2fc();
    float __cdecl flt_797988();
    float __cdecl flt_7c43bc();
}

void ChatOutput::func(int a) {
    float f1;
    sub_5555b0(&f1);
    float f2 = f1;
    int n = field_128;
    int i = 0;
    float f3 = f2 - *(float*)&n;
    while (i < n) {
        int idx = field_124 + i;
        int q = idx >> 2;
        int r = idx & 3;
        int* arr = (int*)field_11c;
        int v = arr[q];
        int* p = (int*)(v + r * 4);
        int val = *p;
        char buf[256];
        sub_77e644(buf, (const char*)(val + 0xc), (void*)0x78704c);
        sub_4e0180(buf, buf, buf);
        i++;
    }
}
