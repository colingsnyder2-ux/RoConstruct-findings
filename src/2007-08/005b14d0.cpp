// from server: 100% by colin
// roc 2007-08 005b14d0  unit: RBX::JointInstance  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b14d0
//
// 005b14d0  8b442404             mov eax, dword ptr [esp + 4]
// 005b14d4  56                   push esi
// 005b14d5  50                   push eax
// 005b14d6  8bf1                 mov esi, ecx
// 005b14d8  e833fdffff           call 0x5b1210
// 005b14dd  c7068c657b00         mov dword ptr [esi], 0x7b658c
// 005b14e3  c7460484657b00       mov dword ptr [esi + 4], 0x7b6584
// 005b14ea  c746107c657b00       mov dword ptr [esi + 0x10], 0x7b657c
// 005b14f1  c746146c657b00       mov dword ptr [esi + 0x14], 0x7b656c
// 005b14f8  c7462c5c657b00       mov dword ptr [esi + 0x2c], 0x7b655c
// 005b14ff  c746444c657b00       mov dword ptr [esi + 0x44], 0x7b654c
// 005b1506  c7465c3c657b00       mov dword ptr [esi + 0x5c], 0x7b653c
// 005b150d  c746742c657b00       mov dword ptr [esi + 0x74], 0x7b652c
// 005b1514  c7868c0000001c657b00 mov dword ptr [esi + 0x8c], 0x7b651c
// 005b151e  c786e800000004657b00 mov dword ptr [esi + 0xe8], 0x7b6504
// 005b1528  8bc6                 mov eax, esi
// 005b152a  5e                   pop esi
// 005b152b  c20400               ret 4

struct JointInstance {
    char pad[0x100];
    JointInstance(const JointInstance&);
    JointInstance& operator=(const JointInstance&);
    JointInstance(int);
};

extern "C" void __stdcall sub_005b1210(int);

JointInstance::JointInstance(int arg)
{
    sub_005b1210(arg);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x00) = 0x7b658c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x04) = 0x7b6584;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x10) = 0x7b657c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x14) = 0x7b656c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x2c) = 0x7b655c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x44) = 0x7b654c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x5c) = 0x7b653c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x74) = 0x7b652c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x8c) = 0x7b651c;
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xe8) = 0x7b6504;
}
