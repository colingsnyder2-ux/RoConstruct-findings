// from server: 66% by atomic.potato
struct PriorityThreadPoolData
{
    void f();
};

extern "C" void __cdecl Target(void *);

void PriorityThreadPoolData::f()
{
    if (*(unsigned char *)((char *)this + 4) != 0)
        Target(*(void **)this);
}
