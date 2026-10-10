// from server: 79% by atomic.potato
extern "C" void __cdecl destroy_string(void *);
extern "C" void __cdecl cleanup(void *);

struct S {
    int f(int);
};

int S::f(int flag)
{
    *(void **)this = (void *)0x9b1fe4;
    destroy_string((char *)this + 4);
    if (flag & 1)
        cleanup(this);
    return (int)this;
}
