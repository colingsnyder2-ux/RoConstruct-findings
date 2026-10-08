// roc 2008-06 005e5d00  unit: RBX::MotorJoint  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5d00
//
// 005e5d00  83ec78               sub esp, 0x78
// 005e5d03  56                   push esi
// 005e5d04  8bf1                 mov esi, ecx
// 005e5d06  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005e5d09  8d4628               lea eax, [esi + 0x28]
// 005e5d0c  50                   push eax
// 005e5d0d  8d542450             lea edx, [esp + 0x50]
// 005e5d11  52                   push edx
// 005e5d12  e8a9250000           call 0x5e82c0
// 005e5d17  8bc8                 mov ecx, eax
// 005e5d19  e8e209e9ff           call 0x476700
// 005e5d1e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005e5d21  83c658               add esi, 0x58
// 005e5d24  56                   push esi
// 005e5d25  8d442420             lea eax, [esp + 0x20]
// 005e5d29  50                   push eax
// 005e5d2a  e891250000           call 0x5e82c0
// 005e5d2f  8bc8                 mov ecx, eax
// 005e5d31  e8ca09e9ff           call 0x476700
// 005e5d36  d905b0b38200         fld dword ptr [0x82b3b0]
// 005e5d3c  51                   push ecx
// 005e5d3d  8d4c2444             lea ecx, [esp + 0x44]
// 005e5d41  d91c24               fstp dword ptr [esp]
// 005e5d44  51                   push ecx
// 005e5d45  8d542478             lea edx, [esp + 0x78]
// 005e5d49  52                   push edx
// 005e5d4a  e88184ffff           call 0x5de1d0
// 005e5d4f  83c40c               add esp, 0xc
// 005e5d52  5e                   pop esi
// 005e5d53  84c0                 test al, al
// 005e5d55  743e                 je 0x5e5d95
// 005e5d57  d905b0b38200         fld dword ptr [0x82b3b0]
// 005e5d5d  51                   push ecx
// 005e5d5e  d91c24               fstp dword ptr [esp]
// 005e5d61  6a02                 push 2
// 005e5d63  8d442408             lea eax, [esp + 8]
// 005e5d67  50                   push eax
// 005e5d68  8d4c2424             lea ecx, [esp + 0x24]
// 005e5d6c  e8cfd4f2ff           call 0x513240
// 005e5d71  50                   push eax
// 005e5d72  6a02                 push 2
// 005e5d74  8d4c2418             lea ecx, [esp + 0x18]
// 005e5d78  51                   push ecx
// 005e5d79  8d4c2458             lea ecx, [esp + 0x58]
// 005e5d7d  e8bed4f2ff           call 0x513240
// 005e5d82  50                   push eax
// 005e5d83  e84884ffff           call 0x5de1d0
// 005e5d88  83c40c               add esp, 0xc
// 005e5d8b  84c0                 test al, al
// 005e5d8d  7406                 je 0x5e5d95
// 005e5d8f  b001                 mov al, 1
// 005e5d91  83c478               add esp, 0x78
// 005e5d94  c3                   ret 
// 005e5d95  32c0                 xor al, al
// 005e5d97  83c478               add esp, 0x78
// 005e5d9a  c3                   ret 
// library rbxgs/v8world\MotorJoint.cpp (function ?isAligned@MotorJoint@RBX@@EAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MotorJoint.cpp
