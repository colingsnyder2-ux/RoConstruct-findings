// from server: 80% by colin
struct CXTPTabManagerItem
{
    char pad[0x60];
    void* field_60;
    void* method_006fd120(void* arg);
};

void* CXTPTabManagerItem::method_006fd120(void* arg)
{
    void* p = field_60;
    void** vtbl = *(void***)p;
    void* fn = vtbl[3];
    ((void (__thiscall*)(void*, void*, void*))fn)(p, arg, this);
    return arg;
}
