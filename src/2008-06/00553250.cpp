// from server: 37% by atomic.potato
struct S
{
    int f();
};

extern "C" void sub_553310(void *);

int S::f()
{
    sub_553310((char *)this + 8);
    return 0;
}
