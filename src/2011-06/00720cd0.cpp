// from server: 80% by atomic.potato
struct S
{
    char padding[168];
    int value;
    void f(int*);
};

void S::f(int* out)
{
    *out = value;
}
