// from server: 70% by atomic.potato
extern "C" int __cdecl Function0080A310();
extern "C" int __cdecl Function0080A316(int);

int Function004035A0(int value)
{
    if (value == (int)0x8007000e)
        Function0080A310();
    return Function0080A316(Function0080A310());
}
