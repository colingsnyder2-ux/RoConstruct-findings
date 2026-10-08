// from server: 100% by colin
// roc 2007-08 005a56b0  unit: RBX::Humanoid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a56b0
//
// 005a56b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a56b4  85c9                 test ecx, ecx
// 005a56b6  7405                 je 0x5a56bd
// 005a56b8  e963aaffff           jmp 0x5a0120
// 005a56bd  33c0                 xor eax, eax
// 005a56bf  c3                   ret 

struct RBX_Humanoid {
    void* fromBodyPart();
};

void* __cdecl RBX_Humanoid_fromBodyPart(void* part)
{
    if (part != 0) {
        return ((RBX_Humanoid*)part)->fromBodyPart();
    }
    return 0;
}
