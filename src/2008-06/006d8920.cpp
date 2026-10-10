// from server: 64% by atomic.potato
struct S {
    int f(int, int);
};

int S::f(int a, int b)
{
    int (*p)(int, int) = (int (*)(int, int))(*(unsigned int *)((unsigned char *)*(unsigned int **)this + 332));
    p(a, 0);
    return a;
}
