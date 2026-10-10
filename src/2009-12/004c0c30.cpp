// from server: 27% by atomic.potato
extern "C" void __cdecl f(void);

void f(int, int, int value)
{
    if (value != 4)
    {
        f(0, 0, value);
        return;
    }

    int* p = (int*)0;
    *p = 0xb10760;
    ((char*)p)[4] = 0;
    ((char*)p)[5] = 0;
}
