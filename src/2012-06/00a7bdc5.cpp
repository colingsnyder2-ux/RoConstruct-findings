// from server: 80% by atomic.potato
struct CXTIconHandle
{
    void* value;
    void* handle;
    int reserved8;
    int valueC;
    int value10;
    int value14;
    unsigned short value18;
    unsigned short value1A;

    CXTIconHandle(void* p);
};

CXTIconHandle::CXTIconHandle(void* p)
{
    handle = p;
    value = (void*)0x00c2bb54;
    value14 = 2;
    valueC = 0;
    value10 = 0;
    value18 = 0;
    value1A = 0;
    reserved8 = (int)this;
}
