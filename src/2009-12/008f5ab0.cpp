// from server: 34% by atomic.potato
struct CXTIconHandle {
    void* vtable;
    void* handle;

    void* f();
};

void* CXTIconHandle::f()
{
    void** p = *(void***)handle;
    return p[1];
}
