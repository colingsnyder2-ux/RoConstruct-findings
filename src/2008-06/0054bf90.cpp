// from server: 37% by atomic.potato
extern "C" void __cdecl sub_54d430(int, int);
extern "C" void __cdecl sub_54d660(int);

struct S
{
    int value;
    void f();
};

void S::f()
{
    sub_54d430(value + 1, 0);
    sub_54d660((int)this);
}
