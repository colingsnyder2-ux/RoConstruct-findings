// from server: 86% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int value)
{
    int result;

    *(int *)((char *)this + 0x104) = value;
    result = (value >> 31) + 7;
    *(int *)((char *)this + 0x60) = result;
    *(int *)((char *)this + 0x64) = result;
    *(int *)((char *)this + 0x70) = result;
    *(int *)((char *)this + 0x74) = result;

    return ((int (__thiscall *)(S *))(*(int **)(*(int **)this + 0x150)))(this);
}
