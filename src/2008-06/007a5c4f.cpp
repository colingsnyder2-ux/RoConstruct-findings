// from server: 61% by atomic.potato
struct CXTIconHandle {
    char pad0[0x14];
    char field14[0x18];
    int field2c;
    int field30;
    int field34;
    CXTIconHandle();
};

extern "C" void __fastcall sub_401840(void*);

CXTIconHandle::CXTIconHandle()
{
    sub_401840(&field14);
    field2c = 0;
    field30 = 0;
    field34 = 0;
}
