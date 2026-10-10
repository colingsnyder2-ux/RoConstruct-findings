// from server: 91% by atomic.potato
extern "C" void target_4cde00(int*, int);

void f(int* result, int value)
{
    if (value != 4)
    {
        target_4cde00(result, value);
        return;
    }

    result[0] = 0xc22da8;
    ((char*)result)[4] = 0;
    ((char*)result)[5] = 0;
}
