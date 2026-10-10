// from server: 61% by atomic.potato
extern "C" void __cdecl sub_69ff70(int, int, int);

void f(int a, int b)
{
    if (b != 4)
    {
        sub_69ff70(a, a, b);
        return;
    }

    *(int *)a = 0x00b39730;
    *((unsigned char *)a + 4) = 0;
    *((unsigned char *)a + 5) = 0;
}
