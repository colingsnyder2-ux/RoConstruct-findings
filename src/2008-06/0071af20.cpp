// from server: 28% by atomic.potato
struct S
{
    int get(int index);
};

extern "C" void __cdecl fail();

int S::get(int index)
{
    if (index < 0 || index >= *(int *)((char *)this + 0x60))
        fail();

    return *(int *)(*(int *)((char *)this + 0x5c) + index * 4);
}
