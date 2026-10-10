// from server: 49% by atomic.potato
struct S
{
    void f();
};

extern "C" void sub_483640(S *);
extern "C" void sub_482e10(S *, int);
extern "C" void sub_80aece(S *);

void S::f()
{
    sub_483640(this);
    sub_482e10(this, 1);
    sub_80aece(this);
}
