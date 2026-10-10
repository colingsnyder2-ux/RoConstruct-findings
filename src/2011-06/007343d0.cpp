// from server: 48% by atomic.potato
extern "C" void __cdecl helper(int, int, int);

int Function(int a, int b)
{
    if (a == 4)
    {
        *(int*)b = 0x00c89128;
        *((char*)b + 4) = 0;
        *((char*)b + 5) = 0;
        return 0;
    }
    helper(0, b, a);
    return 0;
}
