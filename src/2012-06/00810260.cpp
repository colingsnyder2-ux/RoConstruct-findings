// from server: 94% by atomic.potato
struct S {
    void f();
};

void S::f()
{
    *(void **)this = (void *)0x00bc57a4;
    *(void **)((char *)this + 4) = (void *)0x00bc5798;
    *(void **)((char *)this + 0x18) = (void *)0x00bc578c;
    *(void **)((char *)this + 0x1c) = (void *)0x00bc5780;
    *(void **)((char *)this + 0x80) = (void *)0x00bc5770;
    *(void **)((char *)this + 0x84) = (void *)0x00bc5744;
}
