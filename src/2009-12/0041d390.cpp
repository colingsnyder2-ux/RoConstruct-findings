// from server: 98% by atomic.potato
struct S
{
    void f(int, int);
};

void S::f(int a, int b)
{
    int* p = *(int**)((char*)a + 0x30);
    ((void (__thiscall *)(int*))(*(int**)p)[4])(p);
    *(int*)b = 0;
}
