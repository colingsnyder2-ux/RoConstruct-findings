// from server: 74% by atomic.potato
typedef void (__thiscall *FuncType)(void *, const char *, const char *, const char *, void *, int);
typedef void (__cdecl *RegisterType)(const char *);

FuncType g_func = (FuncType)0x70aef0;
RegisterType g_register = (RegisterType)0x7f4929;

void func_00978180()
{
    g_func((void *)0xb951a0, (const char *)0x476870,
           (const char *)0x9de260, (const char *)0x9de274, 0, 1);
    g_register((const char *)0x9878a0);
}
