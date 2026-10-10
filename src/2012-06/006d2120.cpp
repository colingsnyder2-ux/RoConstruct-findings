// from server: 92% by atomic.potato
extern "C" void* __stdcall GetProcessHeap();
extern "C" int __stdcall HeapFree(void*, unsigned long, void*);

struct S
{
    struct P
    {
        virtual void f(int);
    };

    P* p;
    int f();
};

int S::f()
{
    P* q = p;
    q->f(0);
    HeapFree(GetProcessHeap(), 0, q);
    return 0;
}
