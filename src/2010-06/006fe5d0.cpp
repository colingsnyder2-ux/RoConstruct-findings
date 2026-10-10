// from server: 61% by atomic.potato
extern "C" void G1_func_006fe220();

void func_006fe5d0(void* unused, void* a, unsigned int value)
{
    if (value != 4)
    {
        G1_func_006fe220();
        return;
    }

    *(unsigned int*)a = 0x00bdfeb0;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
