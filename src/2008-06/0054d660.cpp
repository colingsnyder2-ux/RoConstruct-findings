// from server: 28% by atomic.potato
struct S
{
    int *data;
    int count;
    int f();
};

int S::f()
{
    return data[(count - 1) * 4];
}
