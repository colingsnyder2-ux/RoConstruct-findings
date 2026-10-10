// from server: 56% by atomic.potato
struct S
{
    char data[0x15c];
    void f();
};

extern "C" void sub_42afc0(void *);
extern "C" void sub_5c9140(S *, void *);

void S::f()
{
    char *p = data + 0x158;
    sub_42afc0(p);
    sub_5c9140(this, &p);
}
