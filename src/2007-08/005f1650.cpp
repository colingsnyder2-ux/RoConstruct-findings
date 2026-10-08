// roc 2007-08 005f1650  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1650
//
// 005f1650  6aff                 push -1
// 005f1652  687b6b7500           push 0x756b7b
// 005f1657  64a100000000         mov eax, dword ptr fs:[0]
// 005f165d  50                   push eax
// 005f165e  64892500000000       mov dword ptr fs:[0], esp
// 005f1665  51                   push ecx
// 005f1666  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f166a  53                   push ebx
// 005f166b  55                   push ebp
// 005f166c  8be9                 mov ebp, ecx
// 005f166e  56                   push esi
// 005f166f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f1673  50                   push eax
// 005f1674  8d5d04               lea ebx, [ebp + 4]
// 005f1677  56                   push esi
// 005f1678  8bcb                 mov ecx, ebx
// 005f167a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f167e  897500               mov dword ptr [ebp], esi
// 005f1681  e80afaffff           call 0x5f1090
// 005f1686  85f6                 test esi, esi
// 005f1688  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f1690  7453                 je 0x5f16e5
// 005f1692  57                   push edi
// 005f1693  8dbea4000000         lea edi, [esi + 0xa4]
// 005f1699  85ff                 test edi, edi
// 005f169b  7431                 je 0x5f16ce
// 005f169d  8937                 mov dword ptr [edi], esi
// 005f169f  8b33                 mov esi, dword ptr [ebx]
// 005f16a1  85f6                 test esi, esi
// 005f16a3  740c                 je 0x5f16b1
// 005f16a5  8d4e08               lea ecx, [esi + 8]
// 005f16a8  ba01000000           mov edx, 1
// 005f16ad  f00fc111             lock xadd dword ptr [ecx], edx
// 005f16b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f16b4  85c9                 test ecx, ecx
// 005f16b6  7413                 je 0x5f16cb
// 005f16b8  8d4108               lea eax, [ecx + 8]
// 005f16bb  83caff               or edx, 0xffffffff
// 005f16be  f00fc110             lock xadd dword ptr [eax], edx
// 005f16c2  7507                 jne 0x5f16cb
// 005f16c4  8b01                 mov eax, dword ptr [ecx]
// 005f16c6  8b5008               mov edx, dword ptr [eax + 8]
// 005f16c9  ffd2                 call edx
// 005f16cb  897704               mov dword ptr [edi + 4], esi
// 005f16ce  5f                   pop edi
// 005f16cf  5e                   pop esi
// 005f16d0  8bc5                 mov eax, ebp
// 005f16d2  5d                   pop ebp
// 005f16d3  5b                   pop ebx
// 005f16d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f16d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005f16df  83c410               add esp, 0x10
// 005f16e2  c20800               ret 8
// 005f16e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f16e9  5e                   pop esi
// 005f16ea  8bc5                 mov eax, ebp
// 005f16ec  5d                   pop ebp
// 005f16ed  5b                   pop ebx
// 005f16ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005f16f5  83c410               add esp, 0x10
// 005f16f8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
