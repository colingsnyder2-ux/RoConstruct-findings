// from server: 50% by colin
extern "C" void __stdcall sub_57D250(void *);
extern "C" int __stdcall sub_581C00(void *, int);
extern "C" int __stdcall sub_554DA0(void *, int);

struct S
{
    int f();
};

int S::f()
{
    int esi = *(int *)((char *)this + 0x0c);
    sub_57D250((void *)esi);
    int result = sub_581C00((char *)this + 0x10, 1);
    return sub_554DA0((void *)result, 2);
}
