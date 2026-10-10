// from server: 61% by atomic.potato
extern "C" void __stdcall G1_func_004c0520();

void func_004c29d0(void* a0, void* a1, int a2)
{
    if (a2 != 4)
    {
        G1_func_004c0520();
        return;
    }

    *(int*)a1 = 0x00b8d080;
    *((char*)a1 + 4) = 0;
    *((char*)a1 + 5) = 0;
}
