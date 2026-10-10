// from server: 70% by colin
struct BoundFuncDesc {
    char pad[0xe8];
    int field_e8;
    void func(float a, float b);
};

extern "C" int __stdcall sub_570270(int);
extern "C" void __stdcall sub_52D2B0(int, int, int);
extern "C" void __stdcall sub_48D890(int, int, int);

void BoundFuncDesc::func(float a, float b) {
    int v1;
    int v2;
    float fa = a;
    float fb = b;
    v1 = *(int*)&fa;
    v2 = *(int*)&fb;
    sub_52D2B0((int)((char*)this + 0xe8), v1, v2);
    int p;
    if (this) {
        p = (int)((char*)this + 4);
    } else {
        p = 0;
    }
    int r = sub_570270(p);
    if (r) {
        float fc = a;
        int v4 = *(int*)&fc;
        sub_48D890(r + 0x10, (int)&v4, v4);
    }
}
