// from server: 80% by atomic.potato
extern "C" void __stdcall func_005f5730(int);

struct S
{
    void __cdecl f(void*, int);
};

void S::f(void* p, int value)
{
    if (value != 4)
    {
        func_005f5730(value);
        return;
    }

    *(unsigned long*)p = 0x00babe48;
    *((unsigned char*)p + 4) = 0;
    *((unsigned char*)p + 5) = 0;
}
