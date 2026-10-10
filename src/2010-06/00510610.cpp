// from server: 88% by atomic.potato
extern "C" void __cdecl sub_7A799A(int);

struct S
{
    void f();
    int pad;
    int a;
    int b;
};

void S::f()
{
    if (a != 0)
        sub_7A799A(b);
}
