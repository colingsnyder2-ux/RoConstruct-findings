// from server: 77% by colin
// roc 2007-08 005a3d10  unit: RBX::VTimerService::?$FactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3d10
//
// 005a3d10  56                   push esi
// 005a3d11  57                   push edi
// 005a3d12  8bf1                 mov esi, ecx
// 005a3d14  33ff                 xor edi, edi
// 005a3d16  397e08               cmp dword ptr [esi + 8], edi
// 005a3d19  7411                 je 0x5a3d2c
// 005a3d1b  8b460c               mov eax, dword ptr [esi + 0xc]
// 005a3d1e  8b4e08               mov ecx, dword ptr [esi + 8]
// 005a3d21  6a01                 push 1
// 005a3d23  50                   push eax
// 005a3d24  ffd1                 call ecx
// 005a3d26  83c408               add esp, 8
// 005a3d29  89460c               mov dword ptr [esi + 0xc], eax
// 005a3d2c  897e10               mov dword ptr [esi + 0x10], edi
// 005a3d2f  897e08               mov dword ptr [esi + 8], edi
// 005a3d32  5f                   pop edi
// 005a3d33  5e                   pop esi
// 005a3d34  c3                   ret 

struct VTimerService {
    int field0;
    int field4;
    int (__stdcall *field8)(int, int);
    int fieldC;
    int field10;
    void func_005a3d10();
};

void VTimerService::func_005a3d10()
{
    if (field8 == 0) {
        int (__stdcall *fn)(int, int) = field8;
        fieldC = fn(fieldC, 1);
    }
    field10 = 0;
    field8 = 0;
}
