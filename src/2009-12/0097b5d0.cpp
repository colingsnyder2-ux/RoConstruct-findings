// from server: 80% by atomic.potato
typedef void (__thiscall *Fn1)(int, const void *, const void *, const char *, int);
typedef void (__cdecl *Fn2)(const void *);

extern Fn1 g_func_00763c00;
extern Fn2 g_func_007f4929;

void func_0097b5d0()
{
    g_func_00763c00(0xb97d98, (const void *)0x5124d0,
                    (const void *)0x9e7b5c, (const char *)0x9bb19c, 1);
    g_func_007f4929((const void *)0x9899a0);
}
