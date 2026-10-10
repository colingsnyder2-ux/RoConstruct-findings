// from server: 52% by colin
struct GLCaps {
    static bool supports_two_sided_stencil();
};

extern "C" {
    void __stdcall sub_502880();
    void __stdcall sub_5028F0();
    void __stdcall sub_77E698();
    void __stdcall sub_77E6AC();
    void __stdcall sub_77E938();
    void __stdcall sub_77E938_2();
}

extern "C" int (__stdcall *g_8980fc)(const char*, const char*, int, const char*, int, int);
extern "C" void (__stdcall *g_77e698)(void*);
extern "C" void (__stdcall *g_77e6ac)(void*);
extern "C" void (__stdcall *g_77e938)(int);

extern "C" char g_8bcf74;
extern "C" char g_8bcf49;
extern "C" char g_8bcf5b;

bool GLCaps::supports_two_sided_stencil()
{
    if (g_8bcf74 == 0 && g_8bcf49 == 0)
    {
        sub_502880();
        if (g_8980fc != 0)
        {
            char buf[28];
            g_77e698(buf);
            int r = g_8980fc("GLCaps has not been initialized.", ".\\glg3dcpp\\GLCaps.cpp", 0x23d, "L$(d", 1, 0);
            if ((*(unsigned char*)buf & 1) != 0)
                g_77e6ac(buf);
            if (r != 0)
            {
                g_77e938(-1);
            }
        }
        sub_5028F0();
    }
    return g_8bcf5b != 0;
}
