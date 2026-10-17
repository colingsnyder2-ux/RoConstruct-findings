// from server: 46% by colin
struct S
{
    char pad0[0x10];
    void* vtable10;
    char pad14[0x10];
    void* vtable24;
    char pad28[0x1c];
    void* vtable44;
    char pad48[0x1c];
    void* vtable64;
    char pad68[0x1c];
    void* vtable84;
    char pad88[0x1c];
    void* vtablea4;
    char pada8[0x1c];
    void* vtablec4;
    char padc8[0x68];
    void* vtable130;
    char pad134[0x1c];
    void* vtable150;
    char pad154[0x1c];
    int field170;
    int field174;
    int field178;
    unsigned char field17c;
    char pad17d[7];
    int field184;
    int field188;
    unsigned char field18c;
    char pad18d[3];
    unsigned char field190;
    char pad191[3];
    char field194[0x1c];
    unsigned char field1b0;
    unsigned char field1b1;
    char pad1b2[2];
    int field1b4;
    short field1b8;
    short field1ba;
    short field1bc;
    short field1be;
    short field1c0;
    short field1c2;
    short field1c4;
    short field1c6;
    short field1c8;
    short field1ca;
    short field1cc;
    short field1ce;
    double field1d0;

    S* construct();
};

struct Str
{
    char buf[0x1c];
    Str();
    Str(const char* s);
    ~Str();
};

struct Helper
{
    void init();
};

extern "C" void __stdcall sub_802460(void* p);
extern "C" void __stdcall sub_802458(void* p, const char* s);
extern "C" void __stdcall sub_802468(void* p);

void sub_4927a0(void* p);
void sub_5e9ec0(void* p);
void* sub_493760(const char* s, int n);
void sub_489810(void* p);
void sub_55af90(void* self, void* arg);
float* sub_509ba0();
void sub_5122d0(void* out, void* in);

S* S::construct()
{
    sub_4927a0(this);

    Helper* h1 = (Helper*)((char*)this + 0x130);
    h1->init();

    Helper* h2 = (Helper*)((char*)this + 0x150);
    h2->init();

    *(void**)this = (void*)0x82220c;
    *(void**)((char*)this + 0x10) = (void*)0x8221fc;
    *(void**)((char*)this + 0x14) = (void*)0x8221f4;
    *(void**)((char*)this + 0x20) = (void*)0x8221ec;
    *(void**)((char*)this + 0x24) = (void*)0x8221dc;
    *(void**)((char*)this + 0x44) = (void*)0x8221cc;
    *(void**)((char*)this + 0x64) = (void*)0x8221bc;
    *(void**)((char*)this + 0x84) = (void*)0x8221ac;
    *(void**)((char*)this + 0xa4) = (void*)0x82219c;
    *(void**)((char*)this + 0xc4) = (void*)0x82218c;
    *(void**)((char*)this + 0x130) = (void*)0x82217c;
    *(void**)((char*)this + 0x150) = (void*)0x82216c;

    field170 = 0;
    field174 = 0;
    field178 = 1;
    field17c = 1;
    field184 = 0;
    field188 = 0;
    field18c = 0;
    field190 = 0;

    sub_802460((char*)this + 0x194);

    field1b0 = 0;
    field1b1 = 0;
    field1b4 = 0;
    field1b8 = 0;
    field1ba = 0;
    field1bc = 0;
    field1be = 0;
    field1c0 = 0;
    field1c2 = 0;
    field1c4 = 0;
    field1c6 = 0;
    field1c8 = 0;
    field1ca = 0;
    field1cc = 0;
    field1ce = 0;
    field1d0 = 0.0;

    void* p1 = sub_493760((const char*)0x822158, 3);
    sub_489810(p1);

    Str s1;
    sub_802458(&s1, (const char*)0x934d38);

    void* p2 = sub_493760((const char*)0x821fa8, 3);
    sub_489810(p2);

    sub_55af90(this, &s1);

    sub_802468(&s1);

    float* v = sub_509ba0();
    float x = v[0];
    float y = v[1];
    float g = *(float*)0x819bac;

    float a = x + g;
    float b = y + g;
    float c = x - g;
    float d = y - g;

    float r1, r2, r3, r4;
    sub_5122d0(&r1, &a);
    field1b8 = *(short*)&r1;

    sub_5122d0(&r2, &b);
    field1bc = *(short*)&r2;

    sub_5122d0(&r3, &c);
    field1c0 = *(short*)&r3;

    sub_5122d0(&r4, &d);
    field1c4 = *(short*)&r4;

    float r5, r6;
    sub_5122d0(&r5, &a);
    field1c8 = *(short*)&r5;

    sub_5122d0(&r6, &b);
    field1cc = *(short*)&r6;

    return this;
}
