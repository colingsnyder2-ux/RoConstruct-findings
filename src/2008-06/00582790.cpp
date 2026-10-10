// from server: 45% by atomic.potato
extern "C" void __stdcall sub_57D250(void *);
extern "C" int sub_581C00(void *, int);

struct S
{
    int f(int);
};

int S::f(int value)
{
    int esi = *(int *)((char *)this + 0x0c);
    sub_57D250(this);
    int result = sub_581C00((char *)this + 0x10, 1);
    return result;
}
