// from server: 38% by colin
struct CStatic {
    char pad0[0x54];
    unsigned int field54;
    char pad58[0x4];
    unsigned int field58;
    void func();
};

extern "C" void __stdcall sub_630490(void*);
extern "C" void __stdcall sub_680000(void*);
extern "C" void __stdcall sub_680060(void*, void*, void*);
extern "C" void __stdcall sub_6308b0(void*, void*);
extern "C" void __stdcall sub_7383ca(void*, int, int, int, int, int);
extern "C" void* __stdcall sub_668f70();
extern "C" void __stdcall sub_668770(void*, int);
extern "C" void __stdcall sub_6308aa(void*, void*, int, int);
extern "C" void __stdcall sub_680430(void*);
extern "C" void __stdcall sub_63048a(void*);
extern "C" void __stdcall sub_630a1e();
extern "C" void __stdcall InflateRect(void*, int, int);

void CStatic::func()
{
    char buf1[0x30];
    char buf2[0x30];
    char buf3[0x30];
    char buf4[0x30];
    int v1, v2, v3, v4;
    int w, h;

    sub_630490(buf1);
    sub_680000(buf2);
    sub_680060(buf1, buf2, buf3);

    if (field54 != 0xfffeff) {
        sub_6308b0(buf3, &field54);
    } else {
        v1 = *(int*)(buf3 + 0);
        v2 = *(int*)(buf3 + 4);
        v3 = *(int*)(buf3 + 8);
        v4 = *(int*)(buf3 + 12);
        sub_6308b0(buf3, (void*)0xffffff);
        w = (v4 - v2) / 2;
        h = (v3 - v1) / 2;
        sub_7383ca(buf4, v1, v2, w, h, 0xebebeb);
        sub_7383ca(buf4, v1 + w, v2 + h, v4 - v1 - w, v3 - v2 - h, 0xebebeb);
    }

    if (field58 == 0) {
        void* a = sub_668f70();
        sub_668770(a, 0x15);
        void* b = sub_668f70();
        sub_668770(b, 0x15);
        sub_6308aa(buf3, &field54, (int)a, (int)b);
    } else {
        sub_6308aa(buf3, &field54, 0, 0);
        InflateRect(buf3, -1, -1);
        sub_6308aa(buf3, &field54, 0xffffff, 0xffffff);
        InflateRect(buf3, -1, -1);
        sub_6308aa(buf3, &field54, 0, 0);
    }

    sub_680430(buf3);
    sub_63048a(buf1);
    sub_630a1e();
}
