// from server: 59% by colin
extern "C" {
    int __cdecl sub_50A940();
    int __cdecl sub_50A9B0();
}

struct StdString {
    char buf[24];
    StdString(const char*);
    ~StdString();
};

extern void __stdcall sub_802458(StdString*, const char*);
extern void __stdcall sub_802468(StdString*);
extern void __stdcall sub_8027F4(int);
extern int (__stdcall *sub_94278C)(StdString*, int, const char*, int, const char*, int);

extern bool g_96EE8E;
extern bool g_96EE65;
extern bool g_96EE75;

struct GLCaps {
    static bool init();
};

bool GLCaps::init()
{
    if (g_96EE8E)
        return g_96EE75;
    if (g_96EE65)
        return g_96EE75;

    sub_50A940();

    bool result = false;
    if (sub_94278C != 0) {
        StdString s("GLCaps has not been initialized.");
        int r = sub_94278C(&s, 1, "GLCaps has not been initialized.", 0x231, ".\\glg3dcpp\\GLCaps.cpp", 1);
        if (r)
            result = true;
        sub_802468(&s);
    }

    if (result)
        sub_8027F4(-1);

    sub_50A9B0();
    return g_96EE75;
}
