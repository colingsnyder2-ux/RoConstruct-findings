// from server: 56% by atomic.potato
extern "C" void __cdecl release_handle(void *);

struct CXTIconHandle
{
    void *handle;
    int value1;
    int value2;

    void reset();
};

void CXTIconHandle::reset()
{
    if (handle)
    {
        release_handle(handle);
    }
    handle = 0;
    value1 = 0;
    value2 = 0;
}
