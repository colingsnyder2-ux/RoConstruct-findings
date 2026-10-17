// from server: 43% by colin
struct GLCaps {
    static bool _initialized;
    static bool _loadedExtensions;
    static bool _checkedForBugs;
};

bool GLCaps::_initialized = false;
bool GLCaps::_loadedExtensions = false;
bool GLCaps::_checkedForBugs = false;

struct String {
    char padding[20];
};

extern "C" void __cdecl sub_50A940();
extern "C" void __cdecl sub_50A9B0();
extern "C" void __stdcall sub_802458(String*, const char*);
extern "C" void __stdcall sub_802468(String*);
extern "C" void __stdcall sub_8027F4(int);
extern "C" int (__cdecl *sub_94278C)(const char*, const char*, int, const char*, const char*, int);

extern "C" void __cdecl exit(int);

struct GLCapsInit {
    void check();
};

void GLCapsInit::check()
{
    if (GLCaps::_initialized)
        return;
    if (GLCaps::_loadedExtensions)
        return;

    sub_50A940();

    bool ok = false;
    if (sub_94278C != 0) {
        String s;
        sub_802458(&s, "GLCaps has not been initialized.");
        ok = sub_94278C("GLCaps has not been initialized.", ".\\glg3dcpp\\GLCaps.cpp", 0x22b, "_initialized", (const char*)&s, 1) != 0;
        sub_802468(&s);
    }

    if (ok)
        sub_8027F4(-1);

    sub_50A9B0();
}
