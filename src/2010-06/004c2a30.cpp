// from server: 61% by atomic.potato
extern "C" void G1_func_004c0600();

void func_004c2a30(int a, void* p, int code)
{
    if (code != 4)
    {
        G1_func_004c0600();
        return;
    }

    *(int*)p = 0x00b8d268;
    *((char*)p + 4) = 0;
    *((char*)p + 5) = 0;
}
