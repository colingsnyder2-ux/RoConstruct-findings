// from server: 48% by atomic.potato
extern "C" long __stdcall InterlockedDecrement(long *);

struct CEnumMediaTypes
{
    int Release();
    long *refCount;
};

int CEnumMediaTypes::Release()
{
    CEnumMediaTypes *p = this;
    long result = InterlockedDecrement(p->refCount);
    if (result == 0 && p != 0)
        p->Release();
    return result;
}
