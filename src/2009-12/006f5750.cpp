// from server: 63% by atomic.potato
extern "C" void func_006f4cc0(int);

void func_006f5750(int value, int* result)
{
    if (value == 4)
    {
        *result = 0xb46830;
        ((unsigned char*)result)[4] = 0;
        ((unsigned char*)result)[5] = 0;
    }
    else
    {
        func_006f4cc0(value);
    }
}
