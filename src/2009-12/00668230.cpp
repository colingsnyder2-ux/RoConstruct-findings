// from server: 43% by atomic.potato
extern "C" void __stdcall sub_668230(void*);

struct UEvents
{
    void __stdcall f(void*);
};

void __stdcall UEvents::f(void* a)
{
    sub_668230(*(void**)a);
}
