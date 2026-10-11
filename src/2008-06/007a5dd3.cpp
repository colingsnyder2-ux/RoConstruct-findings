// from server: 58% by atomic.potato
struct CXTIconHandle
{
    int value;
    int *buffer;
    int *self;
    int position;
    int reserved;
    unsigned short low;
    unsigned short high;
    CXTIconHandle(int *p);
};

CXTIconHandle::CXTIconHandle(int *p)
{
    buffer = p;
    value = 0x871f6c;
    position = 2;
    reserved = 0;
    low = 0;
    high = 0;
    self = reinterpret_cast<int *>(this);
}
