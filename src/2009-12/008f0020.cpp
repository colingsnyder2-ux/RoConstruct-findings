// from server: 40% by atomic.potato
struct S
{
    int f();
};

extern "C" S *__stdcall sub_8effb0(S *);

int S::f()
{
    S *p = sub_8effb0(this);
    int (*v)(S *, S *, int) = (int (*)(S *, S *, int))(*(int **)((char *)p)[0] + 0x1dc);
    return v(p, this, *(int *)((char *)this + 12));
}
