// from server: 30% by atomic.potato
struct S
{
    void f(int value);
};

void S::f(int value)
{
    *(int *)this = value;
}
