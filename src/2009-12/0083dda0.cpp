// from server: 77% by atomic.potato
struct S
{
    int *vtable;
    char pad[180];
    int *field;
    int f();
};

int S::f()
{
    int *a = field;
    int *b = *(int **)((char *)a + 0x58);
    if (b)
    {
        *(int *)((char *)b + 0x90) = 0;
        int *c = *(int **)((char *)b + 0x100);
        return ((int (__thiscall *)(int *))(*(int **)*c + 0x184))(c);
    }
    return 0;
}
