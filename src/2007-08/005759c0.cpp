// from server: 23% by colin
struct PropBase {
    char pad[0x18];
    void* field18;
};

struct Descriptor {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
};

struct Arg0 {
    char pad[0x0];
};

struct Arg1 {
    char pad[0x0];
};

struct Arg2 {
    char pad[0x0];
};

extern "C" {
    int __stdcall sub_475050(void* p);
    int __stdcall sub_55d8a0(void* p);
    int __stdcall sub_55d330(void* p, int a, int b);
    int __stdcall sub_55d710(void* p);
}

extern int g_8c2294;
extern int g_8c22e4;
extern int g_8c2274;
extern int g_8c22b0;
extern int g_8c22c8;
extern int g_8c2260;
extern int g_8c2284;
extern int g_8c22b4;
extern int g_8c22a8;
extern int g_8c2280;
extern int g_8c227c;
extern int g_8c2264;

struct VCoordinateFrame {
    void method(int a, int b, int c);
};

void VCoordinateFrame::method(int a, int b, int c)
{
    PropBase* self = (PropBase*)this;
    if (sub_55d8a0((void*)a)) {
        return;
    }

    char buf[0x30];
    sub_475050(buf);

    int tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c2294, (int)&tmp) + 0xc);
    float f1 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c22e4, (int)&tmp) + 0xc);
    float f2 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c2274, (int)&tmp) + 0xc);
    float f3 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c22b0, (int)&tmp) + 0xc);
    float f4 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c22c8, (int)&tmp) + 0xc);
    float f5 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c2260, (int)&tmp) + 0xc);
    float f6 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c2284, (int)&tmp) + 0xc);
    float f7 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c22b4, (int)&tmp) + 0xc);
    float f8 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c22a8, (int)&tmp) + 0xc);
    float f9 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c2280, (int)&tmp) + 0xc);
    float f10 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c227c, (int)&tmp) + 0xc);
    float f11 = *(float*)&tmp;

    sub_55d710((char*)sub_55d330((void*)a, g_8c2264, (int)&tmp) + 0xc);
    float f12 = *(float*)&tmp;

    Descriptor* d = (Descriptor*)self->field18;
    void (*fn)(void*, int) = *(void (**)(void*, int))(*(int*)d + 8);
    fn(d, (int)buf);
}
