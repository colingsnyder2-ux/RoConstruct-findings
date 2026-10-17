// from server: 43% by colin
extern "C" {
    int __stdcall GetStartupInfoA(void*);
    int __stdcall InterlockedCompareExchange(int*, int, int);
    int __stdcall InterlockedExchange(int*, int);
    void __stdcall Sleep(unsigned int);
    void __cdecl __getmainargs(int*, char***, char***, int, void*);
    char** __cdecl _acmdln();
    void __cdecl _amsg_exit(int);
    int __cdecl _initterm_e(void*, void*);
    void __cdecl _initterm(void*, void*);
    int __cdecl _ismbblead(unsigned int);
    void __cdecl exit(int);
}

void f_6a17af(int);
void f_6a2162(int);
void f_6a1fbc(int, int);
int f_6a2250(void*);
int f_6a230e(void*, void*);
int f_6a2314(void*, void*);
int f_7bca00(int, int, int, int);

extern int g_97dcfc;
extern int g_97dcdc;
extern int g_97dcf8;
extern int g_97dccc;
extern int g_97dcd0;
extern int g_97dcc8;
extern int g_97dcd8;
extern int g_97dce4;
extern int g_97f6fc;
extern int g_97f6f8;
extern int g_97f704;
extern int g_97dce0;
extern int g_97dcd4;
extern int g_802688;
extern int g_8022c4;
extern int g_80227c;
extern int g_802260;
extern int g_802284;
extern int g_802678;
extern int g_8027f4;
extern int g_80280c;

void f_6a189b()
{
    f_6a17af(0x6a218e);
    g_97dcdc = g_97dcfc;
    int r = ((int (__stdcall*)(int, int*, int*, int*, int))g_802688)(g_97dcf8, &g_97dcc8, &g_97dcd0, &g_97dccc, (int)&g_97dcdc);
    g_97dcd8 = r;
    if (r < 0)
        f_6a2162(8);
}

void f_6a18e6()
{
    f_6a1fbc(0x58, 0x900b40);
    int ebx = 0;
    int local1c = 0;
    char buf[0x50];
    ((void (__stdcall*)(void*))g_8022c4)(buf);
    int esi = *(int*)(*(int*)(*(int*)0x18) + 4);
    int edi = (int)&g_97f6fc;
    for (;;) {
        int r = ((int (__stdcall*)(int, int, int))g_80227c)(edi, esi, 0);
        if (r == 0) {
            esi = 1;
            break;
        }
        if (r == esi) {
            esi = 1;
            ebx = 1;
            break;
        }
        ((void (__stdcall*)(int))g_802260)(1000);
    }
    if (g_97f6f8 == esi) {
        f_6a2162(0x1f);
    } else if (g_97f6f8 == 0) {
        g_97f6f8 = esi;
        if (f_6a2314((void*)0x80aa0c, (void*)0x80aa20)) {
            return;
        }
    } else {
        g_97dce4 = esi;
    }
    if (g_97f6f8 == esi) {
        f_6a230e((void*)0x804f74, (void*)0x80aa08);
        g_97f6f8 = 2;
    }
    if (ebx == 0) {
        ((void (__stdcall*)(int, int))g_802284)(edi, ebx);
    }
    if (g_97f704 != 0) {
        if (f_6a2250(&g_97f704)) {
            ((void (__stdcall*)(int, int, int))g_97f704)(0, 2, 0);
        }
    }
    char* p = *(char**)g_802678;
    int quoted = 0;
    for (;;) {
        char c = *p;
        if ((unsigned char)c <= 0x20 && (c != 0 || quoted == 0)) {
            while (*p != 0 && (unsigned char)*p <= 0x20)
                p++;
            int term = (buf[0x2c] & 1) ? *(unsigned short*)(buf + 0x30) : 10;
            g_97dce0 = f_7bca00(0x400000, 0, (int)p, term);
            if (g_97dcd4 == 0) {
                ((void (__stdcall*)(int))g_8027f4)(g_97dce0);
            }
        }
        if (c == '"') {
            quoted = (quoted == 0);
        }
        if (((int (__stdcall*)(int))g_80280c)((unsigned char)c))
            p++;
        p++;
    }
}
