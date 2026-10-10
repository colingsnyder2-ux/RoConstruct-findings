// from server: 50% by colin
struct CStatic {
    char pad[0x990];
    int field990;
    char pad2[0xa58 - 0x994];
    int fielda58;
    int fielda5c;
    void sub_6f1700(int);
    void sub_6f0c00(int, int, int);
    void func(int);
};

extern "C" int __stdcall sub_648600(int);
extern "C" int __stdcall sub_648620(int);
extern "C" int __stdcall sub_648630(int);
extern "C" int __stdcall sub_64b2c0(int, int);
extern "C" int __stdcall sub_649a10(int);
extern "C" int __stdcall sub_62fef6(int);
extern "C" int __stdcall sub_630238(int, int);
extern "C" int __stdcall sub_4605a0(int);
extern "C" int __stdcall sub_7383e2(int);
extern "C" int __stdcall sub_7383d0(int, int);
extern "C" int __stdcall sub_7383ca(int, int, int, int, int, int);
extern "C" int __stdcall sub_7383dc(int);
extern "C" int __stdcall sub_7384a2(int, int);
extern "C" int __stdcall sub_77d148(int);
extern "C" int __stdcall sub_77ee78(int, int, int, int, int, int, int, int, int, int);

void CStatic::func(int param) {
    if (sub_648600(param) != 0)
        return;

    int local14[2];
    sub_64b2c0(param, (int)local14);
    fielda58 = local14[0];
    fielda5c = local14[1];

    if (sub_648620(param) != 0) {
        int* p = (int*)sub_62fef6(0xc);
        int* obj = 0;
        if (p != 0) {
            p[1] = 0;
            p[0] = 0x7db274;
            p[2] = 1;
            obj = p;
        }
        int r = sub_648630(param);
        int r2 = sub_649a10(r);
        sub_630238((int)obj, r2);
        sub_6f1700((int)obj);
        field990 = (int)obj;
        return;
    }

    int* p = (int*)sub_62fef6(0xc);
    int* obj = 0;
    if (p != 0) {
        p[1] = 0;
        p[0] = 0x7db274;
        p[2] = 0;
        obj = p;
    }

    int local1c;
    sub_7383e2((int)&local1c);

    int hdc = sub_77d148(0);
    int local20;
    sub_7383d0((int)&local20, hdc);

    sub_6f0c00((int)obj, fielda58, fielda5c);

    int v;
    if (obj == 0)
        v = 0;
    else
        v = obj[1];

    int r = sub_7384a2(local20, v);

    int local30;
    sub_7383ca((int)&local30, 0, 0, fielda58, fielda5c, 0xfffeff);

    int r2 = sub_4605a0(param);

    sub_77ee78(local20, 0, 0, r2, 0, 0, 0, 0, 0, 3);

    int v2 = 0;
    if (r != 0)
        v2 = *(int*)(r + 4);

    sub_7384a2(local20, v2);

    field990 = (int)obj;
    sub_7383dc((int)&local1c);
}
