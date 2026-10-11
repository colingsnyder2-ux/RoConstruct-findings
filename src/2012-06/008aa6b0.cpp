// from server: 41% by atomic.potato
struct ConstraintSurfacePair
{
    int value;
    int first;
    int second;
    int third;
    int fourth;

    void f(int a, int* b, int* c);
};

void ConstraintSurfacePair::f(int a, int* b, int* c)
{
    first = a;
    value = 0xBE0658;
    second = (int)c;
    third = *b;
    fourth = *c;
    value = 0xBE06A8;
}
