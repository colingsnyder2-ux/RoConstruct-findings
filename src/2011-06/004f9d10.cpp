// from server: 65% by atomic.potato
struct S
{
    void f();
};

extern "C" double sub_4f8fa0(S *);
extern "C" void __cdecl sub_4f15e0(double, int);

void S::f()
{
    double value = sub_4f8fa0(this);
    sub_4f15e0(value, *(int *)((char *)this + 4));
}
