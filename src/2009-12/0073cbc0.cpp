// from server: 94% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(int *)((char *)this + 0) = 0x9e1ff4;
    *(int *)((char *)this + 4) = 0x9e1fe8;
    *(int *)((char *)this + 0x18) = 0x9e1fdc;
    *(int *)((char *)this + 0x1c) = 0x9e1fd4;
    *(int *)((char *)this + 0x94) = 0x9e1fc4;
    *(int *)((char *)this + 0x98) = 0x9e1fac;
}
