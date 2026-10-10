// from server: 61% by atomic.potato
extern "C" void* virtual_delete(void*, unsigned long);

extern "C" void* __stdcall GetProcessHeap(void);
extern "C" int __stdcall HeapFree(void*, unsigned long, void*);

struct S {
    void f();
};

void S::f()
{
    void* p = *(void**)this;
    virtual_delete(this, 0);
    HeapFree(GetProcessHeap(), 0, p);
}
