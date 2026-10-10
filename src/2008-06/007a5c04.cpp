// from server: 53% by atomic.potato
extern "C" void __cdecl ReleaseHandle(int);

struct CXTIconHandle
{
    int handle;
    int value4;
    int value8;
    void Reset();
};

void CXTIconHandle::Reset()
{
    if (handle)
    {
        ReleaseHandle(handle);
        handle = 0;
    }
    value4 = 0;
    value8 = 0;
}
