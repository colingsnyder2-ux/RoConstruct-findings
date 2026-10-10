// from server: 52% by atomic.potato
struct Flag
{
};

void __cdecl f(int value, void* p)
{
    if (value == 4)
    {
        *(int*)p = 0xb55bd8;
        ((unsigned char*)p)[4] = 0;
        ((unsigned char*)p)[5] = 0;
    }
    else
    {
        f(value, p);
    }
}
