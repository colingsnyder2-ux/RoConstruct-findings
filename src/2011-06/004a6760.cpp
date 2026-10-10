// from server: 45% by atomic.potato
struct S
{
    S *f();
};

extern void G1_func_004a5700(S *, void *, int);

S *S::f()
{
    void *a = 0;
    G1_func_004a5700(this, &a, 0);
    return this;
}
