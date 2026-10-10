// from server: 72% by atomic.potato
extern "C" int __cdecl Function_007f3b12();
extern "C" int __cdecl Function_007f3b18(int);

int Function_00402b80(int value)
{
    if (value == 0x8007000e)
        value = Function_007f3b12();
    return Function_007f3b18(value);
}
