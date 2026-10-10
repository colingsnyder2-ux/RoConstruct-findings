// from server: 82% by atomic.potato
extern "C" void func_006f4880(int);

void func_006f5600(int, int *value, int type)
{
    if (type != 4)
    {
        func_006f4880(type);
        return;
    }

    *value = 0xb45cb8;
    ((char *)value)[4] = 0;
    ((char *)value)[5] = 0;
}
