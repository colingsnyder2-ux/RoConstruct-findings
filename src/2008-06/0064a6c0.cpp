// from server: 38% by colin




struct Vec3 { float x, y, z; };

struct Sub1 {
    char pad[0x1c];
    char* field1c;
};

struct Sub2 {
    char pad[0xa0];
    void* fielda0;
};

struct Sub3 {
    char pad[0x1c];
    Sub2* field1c;
};

struct Sub4 {
    char pad[0x24];
    Sub3* field24;
};

struct Inner {
    char pad[8];
    void method1(const Vec3* v);
    void method2(const Vec3* v, float f);
};

struct Outer {
    char pad[0x18];
    Inner* field18;
    char pad2[0x50 - 0x1c];
    float field50;
    char field54;
    char pad3[0x58 - 0x55];
    int field58;
    char pad4[0x60 - 0x5c];
    int field60;
    int field64;

    void method(Sub4* arg);
};

extern "C" void __stdcall sub_6144e0(void* out, void* in);
extern float g_827488;

void Outer::method(Sub4* arg) {
    Vec3 v;
    sub_6144e0(&v, arg->field24->field1c->fielda0);
    if (field54) {
        int ecx = field64 + field58;
        int (*fn)(int) = (int (*)(int))field60;
        float r = (float)fn(ecx);
        field50 = r;
        field54 = 0;
    }
    float f = field50;
    Inner* inner = field18;
    inner->method1(&v);
    inner->method2(&v, g_827488);
}
