// from server: 99% by atomic.potato
extern "C" {
    extern unsigned char g_e580b3;
    extern unsigned int g_e182b0;
    extern int (__cdecl *g_e5809c)(int, int, int);
    extern unsigned int g_ba32bc;
    extern unsigned char g_e182e0;
    extern unsigned char g_b42f20;
    extern unsigned char g_b42f90;
    extern unsigned char g_b42fa8;

    void __cdecl sub_972290(unsigned int, void*);
    void __cdecl sub_4015a0(void*, void*);
    void __cdecl sub_67f480();
    void __cdecl sub_42ac40();
    void __cdecl sub_42b270();
}

void __cdecl func_42c1b0()
{
    if (g_e580b3 != 0 && g_e182b0 != 0x29a) {
        if (g_e5809c != 0) {
            if (g_e5809c(0xcf, (int)&g_b42f90, (int)&g_b42fa8) != 0)
                goto L_42c1fb;
        }
        sub_972290(g_e580b3, &g_b42f20);
    }
L_42c1fb:
    if (g_ba32bc == 0) {
        sub_67f480();
        return;
    }
    sub_4015a0(&g_e182e0, (void*)0x42b270);
    sub_42ac40();
}
