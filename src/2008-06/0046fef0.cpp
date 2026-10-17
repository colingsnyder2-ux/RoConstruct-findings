// from server: 40% by colin
struct GLCaps {
    static bool _loadedExtensions;
    static bool _initialized;
    static bool _checkedForBugs;
    static bool checkForBugs();
};

bool GLCaps::_loadedExtensions = false;
bool GLCaps::_initialized = false;
bool GLCaps::_checkedForBugs = false;

extern "C" void __cdecl sub_50A940();
extern "C" void __cdecl sub_50A9B0();
extern "C" void __cdecl sub_8027F4(int);
extern "C" void __stdcall sub_802458(void*, const char*);
extern "C" void __stdcall sub_802468(void*);
extern "C" int __cdecl sub_94278C(const char*, const char*, int, const char*, int, void*, int);

bool GLCaps::checkForBugs()
{
    if (_loadedExtensions || _initialized)
        return _initialized;

    sub_50A940();

    bool result = false;
    if (sub_94278C != 0) {
        char buf[4];
        sub_802458(buf, "GLCaps has not been initialized.");
        result = sub_94278C("GLCaps has not been initialized.", ".\\glg3dcpp\\GLCaps.cpp", 0x23d, "_initialized", 1, buf, 1) != 0;
        sub_802468(buf);
    }

    if (result) {
        sub_8027F4(-1);
    }

    sub_50A9B0();
    return _initialized;
}
