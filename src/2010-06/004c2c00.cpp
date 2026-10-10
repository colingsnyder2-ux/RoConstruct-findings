// from server: 61% by atomic.potato
extern "C" void G1_func_004c0750();

void func_004c2c00(int a, int b, int c)
{
    if (c != 4)
    {
        G1_func_004c0750();
        return;
    }

    *(int*)b = 0x00b8d4d8;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
