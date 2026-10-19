// from server: 72% by colin
struct String {
    char storage[28];
    String(const char*);
    ~String();
};

struct Base {
    void construct();
};

struct Sub14c {
    void init(void*);
};

struct S : Base {
    char pad0[0x10];
    void* vtbl10;
    char pad1[0x10];
    void* vtbl24;
    char pad2[0x1c];
    void* vtbl44;
    char pad3[0x1c];
    void* vtbl64;
    char pad4[0x1c];
    void* vtbl84;
    char pad5[0x1c];
    void* vtbla4;
    char pad6[0x1c];
    void* vtblc4;
    char pad7[0x68];
    void* vtbl130;
    int field134;
    void* vtbl138;
    void* vtbl13c;
    int field140;
    int field144;
    int field148;
    Sub14c sub14c;
    void* vtbl150;
    char pad8[0x4c];
    void* vtbl1a0;
    void* vtbl1a4;
    float f1a8;
    float f1ac;
    float f1b0;
    int field1b4;
    int field1b8;
    int field1bc;
    int field1c0;
    float f1c4;
    float f1c8;
    float f1cc;
    float f1d0;
    float f1d4;
    float f1d8;
    float f1dc;
    float f1e0;
    float f1e4;
    unsigned char flags1e8;
    char pad9[3];
    int field1ec;
    int field1f0;
    int field1f4;
    int field1f8;
    int field1fc;
    int field200;
    int field204;
    int field208;
    int field20c;
    int field210;
    int field214;
    int field218;
    int field21c;
    int field220;

    S(int);
    void setValue(const String&);
};

extern float g_float8163a4;

S::S(int arg)
{
    if (arg != 0) {
        *(void**)((char*)this + 0x150) = (void*)0x83d7d8;
    }
    construct();
    int neg = -1;
    field134 = neg;
    *(void**)((char*)this + 0x130) = (void*)0x83d1f4;
    field140 = neg;
    field144 = neg;
    field148 = 0;
    *(void**)((char*)this + 0x14c) = 0;
    sub14c.init(0);
    float f = g_float8163a4;
    void* p150 = *(void**)((char*)this + 0x150);
    *(void**)this = (void*)0x83d47c;
    vtbl10 = (void*)0x83d46c;
    vtbl24 = (void*)0x83d464;
    *(void**)((char*)this + 0x20) = (void*)0x83d45c;
    *(void**)((char*)this + 0x24) = (void*)0x83d44c;
    vtbl44 = (void*)0x83d43c;
    vtbl64 = (void*)0x83d42c;
    vtbl84 = (void*)0x83d41c;
    vtbla4 = (void*)0x83d40c;
    vtblc4 = (void*)0x83d3fc;
    vtbl130 = (void*)0x83d3e0;
    vtbl138 = (void*)0x83d3d4;
    vtbl13c = (void*)0x83d3bc;
    *(void**)((char*)this + 0x14c) = (void*)0x83d388;
    vtbl1a0 = (void*)0x83d380;
    vtbl1a4 = (void*)0x83d374;
    {
        void* v = *(void**)((char*)p150 + 4);
        *(void**)((char*)v + (int)this + 0x150) = (void*)0x83d36c;
    }
    {
        void* p = *(void**)((char*)this + 0x150);
        void* v = *(void**)((char*)p + 4);
        void* adj = (char*)v - 0xd8;
        *(void**)((char*)v + (int)this + 0x14c) = adj;
    }
    f1a8 = f;
    f1ac = f;
    field1b4 = 0;
    f1b0 = 0.0f;
    field1b8 = 3;
    field1bc = 0;
    field1c0 = 0;
    f1c4 = 0.0f;
    f1c8 = 0.0f;
    f1cc = 0.0f;
    f1d0 = 0.0f;
    f1d4 = 0.0f;
    f1d8 = 0.0f;
    f1dc = 0.0f;
    f1e0 = 0.0f;
    f1e4 = 0.0f;
    flags1e8 &= 0xe0;
    field1ec = 0;
    field1f0 = 0;
    field1f4 = 0;
    field1f8 = 0;
    field1fc = 0;
    field200 = 0;
    field204 = 0;
    field208 = 0;
    field20c = 0;
    field210 = 0;
    field214 = 0;
    field218 = 0;
    field21c = 0;
    field220 = 0;
    {
        String s("Humanoid");
        setValue(s);
    }
}
