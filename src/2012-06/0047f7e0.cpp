// from server: 61% by atomic.potato
extern "C" void __cdecl G1_func_0047b090();

void func_0047f7e0(int a1, int a2, int a3)
{
    if (a3 != 4)
    {
        G1_func_0047b090();
        return;
    }

    *(int*)a2 = 0x00D6D9D0;
    ((char*)a2)[4] = 0;
    ((char*)a2)[5] = 0;
}
