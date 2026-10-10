// from server: 82% by atomic.potato
extern "C" void func_0067ade0(int);

void func_0067ca40(void* a, void* b, int c)
{
    int value = c;
    if (value != 4)
    {
        func_0067ade0(value);
        return;
    }

    *(unsigned long*)b = 0x00bc1388;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
