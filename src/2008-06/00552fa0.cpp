// from server: 35% by atomic.potato
struct S
{
    void f();
};

extern "C" void sub_4377b0(void *);
extern "C" void sub_540560(void *);

void S::f()
{
    sub_4377b0(this);
    sub_540560((char *)this + 12);
}
