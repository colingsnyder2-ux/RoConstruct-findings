// from server: 23% by colin
struct GLCaps {
    static bool _initialized;
    static bool _loadedExtensions;
    static bool _checkedForBugs;
};

bool GLCaps::_initialized = false;
bool GLCaps::_loadedExtensions = false;
bool GLCaps::_checkedForBugs = false;

extern "C" void __cdecl sub_50A940();
extern "C" void __cdecl sub_50A9B0();
extern "C" void __cdecl sub_802458();
extern "C" void __cdecl sub_802468();
extern "C" void __cdecl sub_8027F4();
extern "C" void __cdecl sub_94278C();

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
        sub_802458();
        sub_94278C();
        ok = true;
    }

    if (ok)
        sub_8027F4();

    sub_50A9B0();
}
