// from server: 41% by atomic.potato
struct S
{
    int **vtable;
    int *object;
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    int (*fn)(int *, int, int, int) =
        (int (*)(int *, int, int, int))vtable[0][1];
    fn(object, 0, b, a);
    return a;
}
