// from server: 40% by colin
struct S {
    void f();
};

extern "C" void __stdcall sub_502880();
extern "C" void __stdcall sub_5028F0();
extern "C" void __stdcall sub_630D23(void*);
extern "C" void __stdcall sub_46D980(void*);
extern "C" void* __stdcall sub_77E698(void*, const char*);
extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_77E938(int);

extern unsigned char byte_8BD024;
extern unsigned char byte_8BCF48;
extern unsigned int dword_8980FC;
extern unsigned int dword_8BD020;
extern unsigned char byte_8BD004;

void S::f()
{
    if (byte_8BD024 == 0 && byte_8BCF48 == 0)
    {
        sub_502880();
        if (dword_8980FC != 0)
        {
            char buf[16];
            sub_77E698(buf, "Cannot call GLCaps::driverVersion before GLCaps::init().");
            sub_77E938(-1);
            sub_5028F0();
        }
    }
    if ((dword_8BD020 & 1) == 0)
    {
        dword_8BD020 |= 1;
        char buf2[16];
        sub_46D980(buf2);
        sub_77E698(&byte_8BD004, buf2);
        sub_77E6AC(buf2);
        sub_630D23((void*)0x777F20);
    }
}
