// from server: 92% by atomic.potato
extern "C" long __stdcall InterlockedExchange(long *, long);
extern "C" int __stdcall PostMessageA(void *, unsigned int, unsigned int, long);

struct S_func_004a5480
{
    char padding_20[0x20];
    long field_20;
    char padding_1a8[0x184];
    long field_1a8;
    int f();
};

int S_func_004a5480::f()
{
    if (InterlockedExchange(&field_1a8, 1) == 0)
        PostMessageA((void *)field_20, 0x469, 0, 0);
    return 0;
}
