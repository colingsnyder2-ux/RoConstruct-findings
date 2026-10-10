// from server: 62% by atomic.potato
typedef unsigned long DWORD;

extern "C" void UnknownCall(void *, void *);

struct S
{
    S *f();
};

S *S::f()
{
    void *p = 0;
    UnknownCall((char *)this + 0x2c, &p);
    return this;
}
