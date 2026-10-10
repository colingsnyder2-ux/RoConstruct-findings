// from server: 73% by atomic.potato
struct S
{
    int vtable;
    int pad[50];
    int a;
    int b;

    void f();
};

void S::f()
{
    a = -1;
    b = -1;
}
