// from server: 85% by atomic.potato
struct S
{
    int Get();
};

int S::Get()
{
    int a = *(int *)((char *)this + 0xb8);
    a = *(int *)((char *)a + 0x58);
    if (a != 0)
    {
        *(int *)((char *)a + 0x14c) = 1;
        a = *(int *)((char *)a + 0x100);
        return ((int (__thiscall *)())*(int *)(*(int *)a + 0x184))();
    }
    return 0;
}
