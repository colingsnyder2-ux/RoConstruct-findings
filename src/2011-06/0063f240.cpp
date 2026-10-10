// from server: 77% by atomic.potato
extern "C" void __cdecl sub_63e120(int);

void f(void* a, int b)
{
    if (b != 4)
    {
        sub_63e120(b);
        return;
    }

    *(int*)a = 0x00C51738;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
