// from server: 41% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    S *p = (S *)((char *)this + 4);
    *(int *)p = 0xA1E9F8;
    return 0;
}
