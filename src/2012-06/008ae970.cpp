// from server: 29% by atomic.potato
struct S
{
    char state;
    float x;
    float y;
    float z;
    int a;
    int b;

    void f();
};

void S::f()
{
    a = 0;
    b = 0;
    state = 1;
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
}
