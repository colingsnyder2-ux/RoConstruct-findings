// from server: 45% by colin
extern "C" {
    void __cdecl sub_50A940();
    void __cdecl sub_50A9B0();
    void __stdcall sub_802458(void*, const char*);
    void __stdcall sub_802468(void*);
    void __cdecl sub_8027F4(int);
    void __cdecl sub_8027F4_exit(int);
}

extern bool GLCaps__initialized;
extern bool GLCaps__checkedForBugs;
extern void* GLCaps__assertHandler;

bool GLCaps_init()
{
    if (GLCaps__initialized)
        return GLCaps__initialized;
    if (GLCaps__checkedForBugs)
        return GLCaps__initialized;

    sub_50A940();

    bool result = false;
    if (GLCaps__assertHandler)
    {
        char buf[28];
        sub_802458(buf, "GLCaps has not been initialized.");
        result = ((bool (__stdcall *)(const char*, const char*, int, const char*, int))GLCaps__assertHandler)(
            "GLCaps has not been initialized.", ".\\glg3dcpp\\GLCaps.cpp", 0x237, "_initialized", 1);
        sub_802468(buf);
    }

    if (result)
        sub_8027F4(-1);

    sub_50A9B0();

    return GLCaps__initialized;
}
