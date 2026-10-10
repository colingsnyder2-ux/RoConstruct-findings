// from server: 61% by atomic.potato
extern "C" void G1_func_00709950();

void func_00709bb0(int a, int b, int c)
{
    if (c != 4)
    {
        G1_func_00709950();
        return;
    }

    *(int*)b = 0xc7f3f8;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
