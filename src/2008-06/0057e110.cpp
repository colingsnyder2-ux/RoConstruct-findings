// from server: 44% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    int* p = *(int**)((char*)this + 0x108);
    if (p)
        return ((*(int**)((char*)p + 0x10) - *(int**)((char*)p + 0x0c)) >> 3) > 0 ? 1 : 0;
    return 0;
}
