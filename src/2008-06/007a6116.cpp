// from server: 88% by atomic.potato
struct S
{
    int f();
};

extern "C" void __fastcall Initialize(void *);

int S::f()
{
    Initialize((char *)this + 4);
    *(int *)((char *)this + 32) = 0;
    *(int *)((char *)this + 36) = 0;
    *(int *)((char *)this + 40) = 0;
    return (int)this;
}
