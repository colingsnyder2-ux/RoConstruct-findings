// from server: 78% by atomic.potato
extern "C" void __stdcall sub_719B76(void *, int, int, const void *);

struct S
{
    int value;
    void f();
};

void S::f()
{
    sub_719B76((char *)this + 0x2A4, 0x5C, 0x10, (const void *)0x762FB0);
}
