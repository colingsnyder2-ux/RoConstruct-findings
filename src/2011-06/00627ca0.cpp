// from server: 45% by atomic.potato
struct EventDesc
{
    void f(int, int);
};

void EventDesc::f(int a, int b)
{
    if (a)
    {
        unsigned int* v = (unsigned int*)((char*)this + 0x24);
        *v = *v + (unsigned int)(a - 0x1c);
        ((void (__stdcall *)(int, unsigned int))0x6254b0)(b, *v);
    }
    else
    {
        unsigned int* v = (unsigned int*)((char*)this + 0x24);
        *v = *v + a;
        ((void (__stdcall *)(int, unsigned int))0x6254b0)(b, *v);
    }
}
