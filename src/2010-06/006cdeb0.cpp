// from server: 91% by atomic.potato
extern "C" void __cdecl sub_6cd9d0(void *, void *, int, int);

struct EventDesc
{
    void __cdecl f(void *, int, int);
};

void EventDesc::f(void *a, int b, int c)
{
    if (c != 4)
    {
        sub_6cd9d0(this, a, b, c);
        return;
    }

    *(int *)b = 0x00bd3728;
    *((char *)b + 4) = 0;
    *((char *)b + 5) = 0;
}
