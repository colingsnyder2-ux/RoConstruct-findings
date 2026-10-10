// from server: 34% by atomic.potato
extern "C" int __stdcall HeapFree(void *, unsigned long, void *);

struct CXTIconHandle
{
    void *heap;
    void Release(void *);
};

void CXTIconHandle::Release(void *p)
{
    if (p)
        HeapFree(*(void **)((char *)this + 4), 0, p);
}
