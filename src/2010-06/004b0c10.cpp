// from server: 77% by atomic.potato
extern "C" void __cdecl sub_4aab50(int);

void f(void* a, int b)
{
    if (b != 4)
    {
        sub_4aab50(b);
        return;
    }

    *(int*)a = 0x00b88298;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
