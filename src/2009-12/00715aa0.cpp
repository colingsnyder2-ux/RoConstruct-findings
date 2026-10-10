// from server: 92% by atomic.potato
struct S {
    void f();
};

void S::f()
{
    *(int *)((char *)this + 0) = 0x9debcc;
    *(int *)((char *)this + 4) = 0x9debc0;
    *(int *)((char *)this + 0x18) = 0x9debb4;
    *(int *)((char *)this + 0x1c) = 0x9debac;
    *(int *)((char *)this + 0x94) = 0x9deb94;
}
