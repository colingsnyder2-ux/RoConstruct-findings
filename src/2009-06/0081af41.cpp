// from server: 31% by atomic.potato
struct CXTIconHandle {
    char pad0[0x14];
    char cs[0x18];
    char pad1[0x18];
    void* p2c;
    void* p30;
    void* p34;
    void init();
};

extern "C" void __stdcall sub_402f00(void*);

void CXTIconHandle::init()
{
    sub_402f00(&cs[0]);
    p2c = 0;
    p30 = 0;
    p34 = 0;
}
