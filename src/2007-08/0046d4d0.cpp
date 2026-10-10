// from server: 53% by colin
struct S_func_0046d4d0 {
    void f();
};

extern "C" {
    void __stdcall func_00502880();
    void __stdcall func_005028f0();
    void __stdcall func_00630d23(int);
    void __stdcall func_0077e698(void*, const char*);
    void __stdcall func_0077e6ac(void*);
    void __stdcall func_0077e938(int);
    void* __stdcall func_0077eba8(unsigned int);
    const char* __stdcall glGetString(unsigned int);
}

extern unsigned char byte_008bcfbc;
extern unsigned char byte_008bcf48;
extern unsigned char byte_008bcfb8;
extern void* dword_008980fc;
extern void* dword_008bcf9c;
extern unsigned char byte_008bcf9c;

void S_func_0046d4d0::f()
{
    if (byte_008bcfbc == 0 && byte_008bcf48 == 0)
    {
        func_00502880();
        if (dword_008980fc != 0)
        {
            char buf[32];
            func_0077e698(buf, "<$Xf");
            bool ok = false;
            if (((bool (__stdcall*)(void*, const char*, int, const char*, void*, int))dword_008980fc)(
                    buf, "Cannot call GLCaps::vendor before GLCaps::init().", 0x275,
                    ".\\glg3dcpp\\GLCaps.cpp", &byte_008bcfbc, 1))
            {
                ok = true;
            }
            func_0077e6ac(buf);
            if (ok)
            {
                func_0077e938(-1);
            }
        }
        func_005028f0();
    }

    void* p = func_0077eba8(0x1f00);
    if ((byte_008bcfb8 & 1) == 0)
    {
        byte_008bcfb8 |= 1;
        if (p == 0)
        {
            p = (void*)0x785954;
        }
        func_0077e698(&byte_008bcf9c, (const char*)p);
        func_00630d23(0x777f30);
    }
}
