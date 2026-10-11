// from server: 55% by atomic.potato
typedef void (__thiscall *Fn1)(const char *, const char *, unsigned int, unsigned int);
typedef void (__cdecl *Fn2)(const char *);

void f()
{
    Fn1 a = (Fn1)0x006c66a0;
    Fn2 b = (Fn2)0x007f4929;
    a((const char *)0x009d7408, (const char *)0x009ad820, 0xa1, 0x0f);
    b((const char *)0x00985be0);
}
