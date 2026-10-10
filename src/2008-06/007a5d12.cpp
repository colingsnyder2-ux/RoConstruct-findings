// from server: 65% by atomic.potato
extern "C" int __stdcall HeapDestroy(void *);

struct CXTIconHandle
{
    unsigned char initialized;
    void *heap;
    unsigned char reserved;
    void f();
};

void CXTIconHandle::f()
{
    if (reserved)
        return;
    *(unsigned long *)this = 0x871f58;
    if (initialized && heap)
        HeapDestroy(heap);
}
