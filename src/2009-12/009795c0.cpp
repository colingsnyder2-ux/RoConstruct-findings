// from server: 57% by atomic.potato
typedef void (__thiscall *Fn1)(const char *, const char *, int, int);
typedef void (__thiscall *Fn2)(const char *);

void f()
{
    ((Fn1)0x738640)((const char *)0x9e1c6c, (const char *)0x9e1c74, 0x194, 0xf);
    ((Fn2)0x7f4929)((const char *)0x9885f0);
}
