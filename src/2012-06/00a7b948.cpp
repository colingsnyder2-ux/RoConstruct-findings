// from server: 53% by atomic.potato
extern "C" void __cdecl ReleaseHandle(void *);

struct CXTIconHandle
{
    void *handle;
    unsigned int value1;
    unsigned int value2;
    void f();
};

void CXTIconHandle::f()
{
    if (handle)
    {
        ReleaseHandle(handle);
        handle = 0;
    }
    value1 = 0;
    value2 = 0;
}
