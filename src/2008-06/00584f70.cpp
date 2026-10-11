// from server: 35% by atomic.potato
struct S
{
    int f(int, int);
    int pad[6];
};

typedef int (__thiscall *Method)(void *, int, int);
extern "C" int __cdecl helper(void *, void *);

int S::f(int a, int b)
{
    int value;
    void *object = *(void **)((char *)this + 24);
    void *table = *(void **)object;
    Method method = *(Method *)((char *)table + 12);
    value = helper((void *)((char *)&a - 4), 0);
    return method(object, b, value);
}
