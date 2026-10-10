// from server: 65% by atomic.potato
extern "C" int __stdcall HeapDestroy(void*);

struct CXTIconHandle {
    int f();
    void* heap;
    unsigned char active;
};

int CXTIconHandle::f()
{
    *(void**)this = (void*)0xA73FD0;
    if (active && heap)
        HeapDestroy(heap);
    return 0;
}
