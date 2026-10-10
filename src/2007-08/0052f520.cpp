// from server: 51% by colin
struct Sub1 {
    char pad0[0x150];
    void ctor();
    void dtor();
};

struct Sub2 {
    char pad0[0x158];
    char b;
    void ctor();
    void dtor();
};

struct Sub3 {
    char pad0[0x18c];
    float f;
    int i;
    void ctor();
    void dtor();
};

struct Sub4 {
    char pad0[0x19c];
    void* p4;
    int i8;
    void ctor();
};

struct Sub5 {
    char pad0[0x1a8];
    int i;
    char b;
};

struct String {
    char pad0[0x1c];
    String(const char*);
    ~String();
};

struct RunService {
    char pad0[0xe8];
    int f_e8;
    char pad1[0x4];
    int f_f0;
    int f_f4;
    int f_f8;
    int f_fc;
    int f_100;
    char pad2[0x4];
    int f_108;
    int f_10c;
    int f_110;
    int f_114;
    int f_118;
    char pad3[0x4];
    int f_120;
    int f_124;
    int f_128;
    int f_12c;
    int f_130;
    char pad4[0x4];
    int f_138;
    int f_13c;
    int f_140;
    int f_144;
    char pad5[0x8];
    int f_14c;
    Sub1 s150;
    Sub2 s15c;
    Sub3 s174;
    Sub4 s194;
    Sub5 s1a8;

    RunService();
};

extern "C" void __stdcall sub_77e698(String*, const char*);
extern "C" void __stdcall sub_77e6ac(String*);
extern "C" void __stdcall sub_725700(Sub1*);
extern "C" void __stdcall sub_7267f0(Sub2*);
extern "C" void __stdcall sub_5835b0(Sub4*);
extern "C" void __stdcall sub_541bf0(RunService*, String*);
extern "C" void __stdcall sub_52f120(RunService*);

extern float g_7a4c40;

RunService::RunService()
{
    sub_52f120(this);
    f_e8 = 0x7a493c;
    f_f0 = 0;
    f_f4 = 0;
    f_f8 = 0;
    f_fc = 0;
    f_100 = 0x7a494c;
    f_108 = 0;
    f_10c = 0;
    f_110 = 0;
    f_114 = 0;
    f_118 = 0x7a495c;
    f_120 = 0;
    f_124 = 0;
    f_128 = 0;
    f_12c = 0;
    f_130 = 0x7a496c;
    f_138 = 0;
    f_13c = 0;
    f_140 = 0;
    f_144 = 0;
    f_14c = 0;
    *(int*)((char*)this + 0) = 0x7a4a2c;
    *(int*)((char*)this + 4) = 0x7a4a24;
    *(int*)((char*)this + 0x10) = 0x7a4a1c;
    *(int*)((char*)this + 0x14) = 0x7a4a0c;
    *(int*)((char*)this + 0x2c) = 0x7a49fc;
    *(int*)((char*)this + 0x44) = 0x7a49ec;
    *(int*)((char*)this + 0x5c) = 0x7a49dc;
    *(int*)((char*)this + 0x74) = 0x7a49cc;
    *(int*)((char*)this + 0x8c) = 0x7a49bc;
    f_e8 = 0x7a49ac;
    f_100 = 0x7a499c;
    f_118 = 0x7a498c;
    f_130 = 0x7a497c;
    sub_725700(&s150);
    s15c.b = 0;
    sub_7267f0(&s15c);
    sub_7267f0((Sub2*)((char*)this + 0x174));
    s174.f = g_7a4c40;
    s174.i = 0;
    sub_725700((Sub1*)((char*)this + 0x194));
    sub_5835b0(&s194);
    s194.i8 = 0;
    s1a8.i = 0;
    s1a8.b = 0;
    String str("Run Service");
    sub_541bf0(this, &str);
    str.~String();
}
