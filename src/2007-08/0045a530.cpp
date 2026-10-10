// from server: 36% by colin
struct VCamera_FactoryProduct_Creator {
    void construct();
};

extern "C" void __stdcall sub_4580a0();
extern "C" void* __stdcall sub_45a1f0();

void VCamera_FactoryProduct_Creator::construct()
{
    sub_4580a0();
    *(int*)((char*)this + 0x00) = 0x79371c;
    *(int*)((char*)this + 0x04) = 0x793714;
    *(int*)((char*)this + 0x10) = 0x79370c;
    *(int*)((char*)this + 0x14) = 0x7936fc;
    *(int*)((char*)this + 0x2c) = 0x7936ec;
    *(int*)((char*)this + 0x44) = 0x7936dc;
    *(int*)((char*)this + 0x5c) = 0x7936cc;
    *(int*)((char*)this + 0x74) = 0x7936bc;
    *(int*)((char*)this + 0x8c) = 0x7936ac;
    *(void**)((char*)this + 0x0c) = sub_45a1f0();
}
