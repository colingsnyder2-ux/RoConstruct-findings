// from server: 60% by atomic.potato
extern "C" void* __stdcall GetProcessHeap();
extern "C" int __stdcall HeapFree(void*, unsigned long, void*);

struct S
{
    struct P
    {
        virtual void destroy();
    };

    void (*destroy)(void*, int);
    char pad[8];
    P* ptr;

    void f();
};

void S::P::destroy()
{
}

void S::f()
{
    ptr->destroy();
    HeapFree(GetProcessHeap(), 0, ptr);
}
