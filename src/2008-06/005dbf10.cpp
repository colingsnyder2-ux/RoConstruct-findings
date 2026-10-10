// from server: 67% by atomic.potato
struct S
{
    char padding[428];
    float value;

    void f(float);
};

void f();

void S::f(float x)
{
    if (x > value)
        value = x;
}
