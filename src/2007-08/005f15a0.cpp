// roc 2007-08 005f15a0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f15a0
//
// 005f15a0  6aff                 push -1
// 005f15a2  687b6b7500           push 0x756b7b
// 005f15a7  64a100000000         mov eax, dword ptr fs:[0]
// 005f15ad  50                   push eax
// 005f15ae  64892500000000       mov dword ptr fs:[0], esp
// 005f15b5  51                   push ecx
// 005f15b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f15ba  53                   push ebx
// 005f15bb  55                   push ebp
// 005f15bc  8be9                 mov ebp, ecx
// 005f15be  56                   push esi
// 005f15bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f15c3  50                   push eax
// 005f15c4  8d5d04               lea ebx, [ebp + 4]
// 005f15c7  56                   push esi
// 005f15c8  8bcb                 mov ecx, ebx
// 005f15ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f15ce  897500               mov dword ptr [ebp], esi
// 005f15d1  e82afaffff           call 0x5f1000
// 005f15d6  85f6                 test esi, esi
// 005f15d8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f15e0  7453                 je 0x5f1635
// 005f15e2  57                   push edi
// 005f15e3  8dbea4000000         lea edi, [esi + 0xa4]
// 005f15e9  85ff                 test edi, edi
// 005f15eb  7431                 je 0x5f161e
// 005f15ed  8937                 mov dword ptr [edi], esi
// 005f15ef  8b33                 mov esi, dword ptr [ebx]
// 005f15f1  85f6                 test esi, esi
// 005f15f3  740c                 je 0x5f1601
// 005f15f5  8d4e08               lea ecx, [esi + 8]
// 005f15f8  ba01000000           mov edx, 1
// 005f15fd  f00fc111             lock xadd dword ptr [ecx], edx
// 005f1601  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f1604  85c9                 test ecx, ecx
// 005f1606  7413                 je 0x5f161b
// 005f1608  8d4108               lea eax, [ecx + 8]
// 005f160b  83caff               or edx, 0xffffffff
// 005f160e  f00fc110             lock xadd dword ptr [eax], edx
// 005f1612  7507                 jne 0x5f161b
// 005f1614  8b01                 mov eax, dword ptr [ecx]
// 005f1616  8b5008               mov edx, dword ptr [eax + 8]
// 005f1619  ffd2                 call edx
// 005f161b  897704               mov dword ptr [edi + 4], esi
// 005f161e  5f                   pop edi
// 005f161f  5e                   pop esi
// 005f1620  8bc5                 mov eax, ebp
// 005f1622  5d                   pop ebp
// 005f1623  5b                   pop ebx
// 005f1624  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f1628  64890d00000000       mov dword ptr fs:[0], ecx
// 005f162f  83c410               add esp, 0x10
// 005f1632  c20800               ret 8
// 005f1635  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1639  5e                   pop esi
// 005f163a  8bc5                 mov eax, ebp
// 005f163c  5d                   pop ebp
// 005f163d  5b                   pop ebx
// 005f163e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1645  83c410               add esp, 0x10
// 005f1648  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
