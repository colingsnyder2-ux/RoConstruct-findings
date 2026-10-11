// from server: 98% by atomic.potato
extern unsigned char g_e580b3;
extern unsigned int g_e37940;
extern char (__cdecl *g_e5809c)(const char*, const char*, unsigned int);
extern unsigned int g_be6104;
extern unsigned char g_e379e8;

extern "C" int __cdecl sub_00972290(const char*, unsigned char);
extern "C" void __cdecl sub_004015a0(void*, void*);
extern "C" void sub_0067f480();
extern "C" void sub_00766c90();

void sub_00768300()
{
    if (g_e580b3 != 0 && g_e37940 != 0x29a)
    {
        if (g_e5809c != 0)
        {
            if (g_e5809c((const char*)0xb42f90, (const char*)0xb42fa8, 0xcf))
                goto L_34b;
        }
        sub_00972290((const char*)0xb42f20, g_e580b3);
    }
L_34b:
    if (g_be6104 == 0)
    {
        sub_0067f480();
        return;
    }
    sub_004015a0((void*)0xe379e8, (void*)0x767f20);
    sub_00766c90();
}
