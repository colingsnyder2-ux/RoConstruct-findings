// from server: 51% by atomic.potato
struct S {
    int f();
};

typedef int (__thiscall *Thunk)(void *);

extern "C" int __cdecl sub_005cbf90(int);

int S::f()
{
    void *p = *(void **)((char *)this + 12);
    void *q = *(void **)((char *)p + 648);
    int r = ((Thunk)(*(void **)((char *)q + 4)))(q);
    return sub_005cbf90(r);
}
