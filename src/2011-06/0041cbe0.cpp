// from server: 76% by atomic.potato
struct S
{
    int *vtable;
    int *get();
};

int *S::get()
{
    int *p = *(int **)((char *)this + 0xd0);
    return ((int *(__thiscall *)(int *))(*(int ***)p + 1))(p);
}
