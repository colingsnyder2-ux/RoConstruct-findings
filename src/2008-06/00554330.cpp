// from server: 73% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    *(char *)((char *)this + 0x248) = 1;
    ((void (__thiscall *)(char *))0x5f1d30)((char *)this + 0x264);
}
