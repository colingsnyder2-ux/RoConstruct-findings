// from server: 33% by atomic.potato
struct CXTIconHandle
{
    virtual void* f();
};

void* CXTIconHandle::f()
{
    return ((CXTIconHandle*)this + 1)->f();
}
