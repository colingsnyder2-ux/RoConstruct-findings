// from server: 100% by colin
// roc 2007-08 005daa30  unit: RBX::VelocityMotor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005daa30
//
// 005daa30  c70144c47b00         mov dword ptr [ecx], 0x7bc444
// 005daa36  c7410438c47b00       mov dword ptr [ecx + 4], 0x7bc438
// 005daa3d  c7411030c47b00       mov dword ptr [ecx + 0x10], 0x7bc430
// 005daa44  c7411420c47b00       mov dword ptr [ecx + 0x14], 0x7bc420
// 005daa4b  c7412c10c47b00       mov dword ptr [ecx + 0x2c], 0x7bc410
// 005daa52  c7414400c47b00       mov dword ptr [ecx + 0x44], 0x7bc400
// 005daa59  c7415cf0c37b00       mov dword ptr [ecx + 0x5c], 0x7bc3f0
// 005daa60  c74174e0c37b00       mov dword ptr [ecx + 0x74], 0x7bc3e0
// 005daa67  c7818c000000d0c37b00 mov dword ptr [ecx + 0x8c], 0x7bc3d0
// 005daa71  c781e8000000b8c37b00 mov dword ptr [ecx + 0xe8], 0x7bc3b8
// 005daa7b  e930fbffff           jmp 0x5da5b0

struct VelocityMotor {
    void construct();
};

extern void func_005da5b0();

void VelocityMotor::construct()
{
    *(int*)((char*)this + 0x00) = 0x7bc444;
    *(int*)((char*)this + 0x04) = 0x7bc438;
    *(int*)((char*)this + 0x10) = 0x7bc430;
    *(int*)((char*)this + 0x14) = 0x7bc420;
    *(int*)((char*)this + 0x2c) = 0x7bc410;
    *(int*)((char*)this + 0x44) = 0x7bc400;
    *(int*)((char*)this + 0x5c) = 0x7bc3f0;
    *(int*)((char*)this + 0x74) = 0x7bc3e0;
    *(int*)((char*)this + 0x8c) = 0x7bc3d0;
    *(int*)((char*)this + 0xe8) = 0x7bc3b8;
    func_005da5b0();
}
