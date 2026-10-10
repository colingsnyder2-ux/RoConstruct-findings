// from server: 61% by atomic.potato
extern "C" void G1_func_0047b1e0();

void func_0047f880(void* a0, void* a1, int a2)
{
    if (a2 != 4)
    {
        G1_func_0047b1e0();
        return;
    }

    *(unsigned long*)a1 = 0x00d6db50;
    *((unsigned char*)a1 + 4) = 0;
    *((unsigned char*)a1 + 5) = 0;
}
