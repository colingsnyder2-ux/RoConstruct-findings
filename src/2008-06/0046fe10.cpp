// from server: 42% by colin
extern "C" {
    void __cdecl G3D_Log_ctor();
    void __cdecl G3D_Log_dtor();
    void __stdcall std_string_ctor(void*, const char*);
    void __stdcall std_string_dtor(void*);
    void __cdecl exit(int);
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

    G3D_Log_ctor();

    bool result = false;
    if (GLCaps__assertHandler)
    {
        char buf[28];
        std_string_ctor(buf, "GLCaps has not been initialized.");
        result = ((bool (__stdcall *)(const char*, const char*, int, const char*, const char*))GLCaps__assertHandler)(
            "GLCaps has not been initialized.", ".\\glg3dcpp\\GLCaps.cpp", 0x237, "_initialized", 0);
        std_string_dtor(buf);
    }

    if (result)
        exit(-1);

    G3D_Log_dtor();

    return GLCaps__initialized;
}
