// roc 2007-08 00596e60  unit: RBX::LaserTool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596e60
//
// 00596e60  6aff                 push -1
// 00596e62  687b6b7500           push 0x756b7b
// 00596e67  64a100000000         mov eax, dword ptr fs:[0]
// 00596e6d  50                   push eax
// 00596e6e  64892500000000       mov dword ptr fs:[0], esp
// 00596e75  51                   push ecx
// 00596e76  8b442418             mov eax, dword ptr [esp + 0x18]
// 00596e7a  53                   push ebx
// 00596e7b  55                   push ebp
// 00596e7c  8be9                 mov ebp, ecx
// 00596e7e  56                   push esi
// 00596e7f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00596e83  50                   push eax
// 00596e84  8d5d04               lea ebx, [ebp + 4]
// 00596e87  56                   push esi
// 00596e88  8bcb                 mov ecx, ebx
// 00596e8a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00596e8e  897500               mov dword ptr [ebp], esi
// 00596e91  e8aafeffff           call 0x596d40
// 00596e96  85f6                 test esi, esi
// 00596e98  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00596ea0  7453                 je 0x596ef5
// 00596ea2  57                   push edi
// 00596ea3  8dbea4000000         lea edi, [esi + 0xa4]
// 00596ea9  85ff                 test edi, edi
// 00596eab  7431                 je 0x596ede
// 00596ead  8937                 mov dword ptr [edi], esi
// 00596eaf  8b33                 mov esi, dword ptr [ebx]
// 00596eb1  85f6                 test esi, esi
// 00596eb3  740c                 je 0x596ec1
// 00596eb5  8d4e08               lea ecx, [esi + 8]
// 00596eb8  ba01000000           mov edx, 1
// 00596ebd  f00fc111             lock xadd dword ptr [ecx], edx
// 00596ec1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00596ec4  85c9                 test ecx, ecx
// 00596ec6  7413                 je 0x596edb
// 00596ec8  8d4108               lea eax, [ecx + 8]
// 00596ecb  83caff               or edx, 0xffffffff
// 00596ece  f00fc110             lock xadd dword ptr [eax], edx
// 00596ed2  7507                 jne 0x596edb
// 00596ed4  8b01                 mov eax, dword ptr [ecx]
// 00596ed6  8b5008               mov edx, dword ptr [eax + 8]
// 00596ed9  ffd2                 call edx
// 00596edb  897704               mov dword ptr [edi + 4], esi
// 00596ede  5f                   pop edi
// 00596edf  5e                   pop esi
// 00596ee0  8bc5                 mov eax, ebp
// 00596ee2  5d                   pop ebp
// 00596ee3  5b                   pop ebx
// 00596ee4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00596ee8  64890d00000000       mov dword ptr fs:[0], ecx
// 00596eef  83c410               add esp, 0x10
// 00596ef2  c20800               ret 8
// 00596ef5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00596ef9  5e                   pop esi
// 00596efa  8bc5                 mov eax, ebp
// 00596efc  5d                   pop ebp
// 00596efd  5b                   pop ebx
// 00596efe  64890d00000000       mov dword ptr fs:[0], ecx
// 00596f05  83c410               add esp, 0x10
// 00596f08  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
