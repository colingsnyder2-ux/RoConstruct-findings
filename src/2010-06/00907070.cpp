// from server: 61% by atomic.potato
extern "C" void G1_func_009065d0();

void func_00907070(void* a, void* b, int c)
{
    if (c != 4)
    {
        G1_func_009065d0();
        return;
    }

    *(unsigned long*)b = 0x00bfe4b8;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
