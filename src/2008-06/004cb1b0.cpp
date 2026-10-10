// from server: 52% by atomic.potato
typedef unsigned char byte;

extern "C" void sub_004ca450(void *, void *, void *, void *);

struct S
{
    void *f(void *, void *);
};

void *S::f(void *a, void *b)
{
    char c[8] = { 0 };
    sub_004ca450((char *)this + 4, this, c, b);
    return a;
}
