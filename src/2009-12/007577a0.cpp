// from server: 94% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)((char *)this + 0x00) = 0x009e541c;
    *(int *)((char *)this + 0x04) = 0x009e5410;
    *(int *)((char *)this + 0x18) = 0x009e5404;
    *(int *)((char *)this + 0x1c) = 0x009e53fc;
    *(int *)((char *)this + 0x94) = 0x009e53ec;
    *(int *)((char *)this + 0x98) = 0x009e53d4;
}
