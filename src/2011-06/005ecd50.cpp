// from server: 37% by atomic.potato
extern "C" void __cdecl sub_5ebad0(void *, int);

struct S
{
    void f(int);
};

void S::f(int value)
{
    sub_5ebad0(this, value);
}
