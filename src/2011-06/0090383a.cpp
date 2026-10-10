// from server: 45% by atomic.potato
struct CXTIconHandle
{
    int Get();
};

int CXTIconHandle::Get()
{
    struct VTable
    {
        int (*unused)();
        int (*get)();
    };

    VTable* table = (VTable*)*(VTable**)((char*)this + 4);
    return table->get();
}
