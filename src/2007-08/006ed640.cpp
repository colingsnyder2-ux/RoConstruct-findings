// from server: 57% by colin
extern "C" __declspec(dllimport) void* __stdcall GetModuleHandleA(const char*);
extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void*, const char*);

struct Sub
{
    void init();
};

struct Obj
{
    void ctor();
    char pad0[4];
    Sub s1;
    char pad1[0x50];
    Sub s2;
    char pad2[0x74];
    int f0xb0;
    int f0xb4;
    char pad3[0x10];
    int f0xc8;
    int f0xcc;
    char pad4[0x4];
    int f0xd0;
    char pad5[0x48];
    int f0x11c;
    int f0x120;
    int f0x124;
    int f0x128;
    int f0x12c;
    char pad6[0x10];
    int f0x140;
    int f0x144;
    int f0x148;
    int f0x14c;
    char pad7[0x18];
    int f0x168;
    int f0x16c;
    char pad8[0x18];
    int f0x188;
    int f0x18c;
    char pad9[0x1c];
    int f0x1ac;
};

void Obj::ctor()
{
    s1.init();
    s2.init();
    f0xd0 = 0;
    f0x16c = 0;
    f0xb4 = 0;
    f0xb0 = 0;
    f0x124 = 0;
    f0xc8 = 0;
    f0xcc = 0;
    f0x11c = 0;
    f0x120 = 0;
    f0x12c = 0;
    f0x140 = 0;
    f0x144 = 0;
    f0x148 = 1;
    f0x14c = 1;
    f0x168 = 0;
    f0x188 = -1;
    f0x18c = 0;
    f0x1ac = 0;

    void* h = GetModuleHandleA("USER32");
    if (h != 0)
    {
        f0x1ac = (int)GetProcAddress(h, "SetLayeredWindowAttributes");
    }
    f0x128 = 0;
}
