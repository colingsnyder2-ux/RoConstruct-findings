// from server: 41% by colin
extern "C" {
    void __stdcall G3D_Log_ctor(void*);
    void __stdcall G3D_Log_dtor(void*);
    void __stdcall G3D_Log_assert_fail(const char*, const char*, int, const char*, ...);
    void __stdcall G3D_Log_assert_fail2(const char*, const char*, int, const char*, ...);
    void __stdcall std_string_ctor(void*, const char*);
    void __stdcall std_string_dtor(void*);
    void __cdecl exit(int);
    void __stdcall G3D_Log_printf(const char*, ...);
}

extern bool GLCaps__initialized;
extern bool GLCaps__checkedForBugs;
extern bool GLCaps__loadedExtensions;
extern void* GLCaps__assertHandler;

bool GLCaps_init()
{
    if (GLCaps__initialized)
        return GLCaps__initialized;
    if (GLCaps__checkedForBugs)
        return GLCaps__initialized;

    G3D_Log_ctor(0);

    bool result = false;
    if (GLCaps__assertHandler)
    {
        char buf[28];
        std_string_ctor(buf, "GLCaps has not been initialized.");
        G3D_Log_assert_fail("GLCaps has not been initialized.", ".\\glg3dcpp\\GLCaps.cpp", 0x237, "_initialized");
        std_string_dtor(buf);
        result = true;
    }

    if (result)
        exit(-1);

    G3D_Log_dtor(0);

    return GLCaps__initialized;
}
