// from server: 41% by atomic.potato
extern "C" void __cdecl sub_004e1830(int);

struct S
{
    void f(int);
};

void S::f(int value)
{
    sub_004e1830(value);
}
