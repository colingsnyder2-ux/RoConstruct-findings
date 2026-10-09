// from server: 100% by colin
// roc 2007-08 005da9e0  unit: RBX::VelocityMotor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005da9e0
//
// 005da9e0  c7016cc37b00         mov dword ptr [ecx], 0x7bc36c
// 005da9e6  c7410464c37b00       mov dword ptr [ecx + 4], 0x7bc364
// 005da9ed  c741105cc37b00       mov dword ptr [ecx + 0x10], 0x7bc35c
// 005da9f4  c741144cc37b00       mov dword ptr [ecx + 0x14], 0x7bc34c
// 005da9fb  c7412c3cc37b00       mov dword ptr [ecx + 0x2c], 0x7bc33c
// 005daa02  c741442cc37b00       mov dword ptr [ecx + 0x44], 0x7bc32c
// 005daa09  c7415c1cc37b00       mov dword ptr [ecx + 0x5c], 0x7bc31c
// 005daa10  c741740cc37b00       mov dword ptr [ecx + 0x74], 0x7bc30c
// 005daa17  c7818c000000fcc27b00 mov dword ptr [ecx + 0x8c], 0x7bc2fc
// 005daa21  c781e8000000e4c27b00 mov dword ptr [ecx + 0xe8], 0x7bc2e4
// 005daa2b  e980fbffff           jmp 0x5da5b0

struct VelocityMotor {
    void construct();
};

extern void func_005da5b0();

void VelocityMotor::construct()
{
    *(int*)((char*)this + 0x00) = 0x7bc36c;
    *(int*)((char*)this + 0x04) = 0x7bc364;
    *(int*)((char*)this + 0x10) = 0x7bc35c;
    *(int*)((char*)this + 0x14) = 0x7bc34c;
    *(int*)((char*)this + 0x2c) = 0x7bc33c;
    *(int*)((char*)this + 0x44) = 0x7bc32c;
    *(int*)((char*)this + 0x5c) = 0x7bc31c;
    *(int*)((char*)this + 0x74) = 0x7bc30c;
    *(int*)((char*)this + 0x8c) = 0x7bc2fc;
    *(int*)((char*)this + 0xe8) = 0x7bc2e4;
    func_005da5b0();
}
