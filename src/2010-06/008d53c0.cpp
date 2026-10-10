// from server: 55% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    char **p = *(char ***)((char *)this + 4);
    if (p)
        ((void (__thiscall *)(char **, int))(*(void ***)p + 200))(p, 1);
}
