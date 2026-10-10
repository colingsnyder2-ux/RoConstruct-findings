// from server: 38% by colin
struct RBX_VelocityMotor {
    char pad[0xE8];
    void construct();
    void destroy();
    void func_005da5b0();
};

extern "C" void __stdcall sub_005bd150();
extern "C" void __stdcall sub_005402b0();

void RBX_VelocityMotor::func_005da5b0()
{
    *(int*)((char*)this + 0x00) = 0x7bc1c4;
    *(int*)((char*)this + 0x04) = 0x7bc1bc;
    *(int*)((char*)this + 0x10) = 0x7bc1b4;
    *(int*)((char*)this + 0x14) = 0x7bc1a4;
    *(int*)((char*)this + 0x2c) = 0x7bc194;
    *(int*)((char*)this + 0x44) = 0x7bc184;
    *(int*)((char*)this + 0x5c) = 0x7bc174;
    *(int*)((char*)this + 0x74) = 0x7bc164;
    *(int*)((char*)this + 0x8c) = 0x7bc154;
    *(int*)((char*)this + 0xe8) = 0x7bc13c;
    sub_005bd150();
    sub_005402b0();
}
