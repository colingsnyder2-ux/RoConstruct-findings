// from server: 73% by atomic.potato
typedef void (__cdecl *FunctionA)(int, const char *, const char *, int);
typedef void (__cdecl *FunctionB)(const char *);

void func_00978f90()
{
    FunctionA f = (FunctionA)0x7322b0;
    FunctionB g = (FunctionB)0x7f4929;
    f(0xa0, (const char *)0x9cc0b4, (const char *)0x9bb040, 1);
    g((const char *)0x988330);
}
