// from server: 90% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(unsigned long *)this = 0x00b44574;
    *(unsigned long *)((char *)this + 4) = 0x00b4456c;
    *(unsigned long *)((char *)this + 0x18) = 0x00b44560;
    *(unsigned long *)((char *)this + 0x1c) = 0x00b44554;
}
