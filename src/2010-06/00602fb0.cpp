// from server: 61% by atomic.potato
extern "C" void __cdecl sub_601b10();

void f(unsigned char* a, unsigned char* b, int c)
{
    if (c != 4)
    {
        sub_601b10();
        return;
    }

    *(unsigned long*)b = 0x00BAEAC8;
    b[4] = 0;
    b[5] = 0;
}
