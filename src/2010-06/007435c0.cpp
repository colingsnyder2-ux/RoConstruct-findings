// from server: 63% by atomic.potato
extern "C" void __cdecl roc_7420d0(int, int, int);

void f(int a, int b)
{
    if (b != 4)
    {
        roc_7420d0(0, a, b);
        return;
    }

    *(int *)a = 0xbe2e98;
    *((char *)a + 4) = 0;
    *((char *)a + 5) = 0;
}
