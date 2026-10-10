// from server: 63% by atomic.potato
struct S_func_005de020
{
    void __cdecl operator()(int, int* result, int value);
};

extern "C" void __cdecl S_func_005ddd40(int, int*, int);

void S_func_005de020::operator()(int, int* result, int value)
{
    if (value != 4)
    {
        S_func_005ddd40(0, result, value);
        return;
    }

    *result = 0x00b26458;
    *((char*)result + 4) = 0;
    *((char*)result + 5) = 0;
}
