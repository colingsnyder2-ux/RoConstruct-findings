// from server: 20% by atomic.potato
struct S
{
    int* data;
    unsigned int count;
    int f();
};

int S::f()
{
    int* p = data;
    return p[(count - 1) * 6];
}
