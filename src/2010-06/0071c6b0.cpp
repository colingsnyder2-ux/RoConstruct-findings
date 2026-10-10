// from server: 82% by atomic.potato
extern "C" void __cdecl Function0071c180(int);

struct S
{
    void __cdecl f(void*, int);
};

void __cdecl S::f(void* value, int type)
{
    if (type != 4)
    {
        Function0071c180(type);
        return;
    }

    *(int*)value = 0x00be1e98;
    ((char*)value)[4] = 0;
    ((char*)value)[5] = 0;
}
