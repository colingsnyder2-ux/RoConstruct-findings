// from server: 45% by colin
struct RBX_PAVRunService_sp_counted_impl_pd {
    char pad[0x114];
    int field114;
    int field118;
    float field11c;
    float field120;
    void init(int a, int b, float c, float d);
};

extern "C" void __fastcall sub_59cec0(void* p);

void RBX_PAVRunService_sp_counted_impl_pd::init(int a, int b, float c, float d)
{
    sub_59cec0(this);
    field114 = a;
    *(int*)((char*)this + 0) = 0x7bba1c;
    *(int*)((char*)this + 4) = 0x7bba10;
    *(int*)((char*)this + 0x10) = 0x7bba08;
    *(int*)((char*)this + 0x14) = 0x7bb9f8;
    *(int*)((char*)this + 0x2c) = 0x7bb9e8;
    *(int*)((char*)this + 0x44) = 0x7bb9d8;
    *(int*)((char*)this + 0x5c) = 0x7bb9c8;
    *(int*)((char*)this + 0x74) = 0x7bb9b8;
    *(int*)((char*)this + 0x8c) = 0x7bb9a8;
    *(int*)((char*)this + 0xe8) = 0x7bb9a0;
    field118 = b;
    field11c = c;
    field120 = d;
}
