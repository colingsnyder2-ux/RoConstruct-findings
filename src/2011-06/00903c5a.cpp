// from server: 82% by atomic.potato
extern "C" void Initialize(void *);

struct CXTIconHandle
{
    CXTIconHandle *f();
};

CXTIconHandle *CXTIconHandle::f()
{
    Initialize((char *)this + 4);
    ((int *)this)[8] = 0;
    ((int *)this)[9] = 0;
    ((int *)this)[10] = 0;
    return this;
}
