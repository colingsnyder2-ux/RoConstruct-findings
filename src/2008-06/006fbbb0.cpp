// from server: 57% by atomic.potato
struct S
{
    S* f();
    int a;
};

void sub_006fbb10();

S* S::f()
{
    sub_006fbb10();
    a = 0;
    return this;
}
