// from server: 33% by tester
struct S
{
    void f(int);
};

void S::f(int x)
{
    void (*p)(int) = *(void (**)(int))this;
    p(x);
}
