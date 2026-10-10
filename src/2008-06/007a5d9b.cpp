// from server: 53% by atomic.potato
extern "C" unsigned long __stdcall HeapSize(void *, unsigned long, const void *);

struct CXTIconHandle
{
    void *heap;
    unsigned long Size(void *block);
};

unsigned long CXTIconHandle::Size(void *block)
{
    return HeapSize(heap, 0, block);
}
