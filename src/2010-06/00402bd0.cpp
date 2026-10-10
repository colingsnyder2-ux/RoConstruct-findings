// from server: 72% by atomic.potato
typedef int (__cdecl *Fn)(void);

extern "C" int __cdecl Function_007a7c52();
extern "C" int __cdecl Function_007a7c58(int);

int Function_00402bd0(int value)
{
    if (value == (int)0x8007000e)
        value = Function_007a7c52();

    return Function_007a7c58(value);
}
