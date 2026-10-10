// from server: 78% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(void **)this = (void *)0x9fc344;
    void (__stdcall *target)(void *) = (void (__stdcall *)(void *))0x98dec0;
    target((char *)this + 8);
}
