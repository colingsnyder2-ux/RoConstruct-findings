// roc 2007-08 00596f10  unit: RBX::LaserTool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596f10
//
// 00596f10  6aff                 push -1
// 00596f12  687b6b7500           push 0x756b7b
// 00596f17  64a100000000         mov eax, dword ptr fs:[0]
// 00596f1d  50                   push eax
// 00596f1e  64892500000000       mov dword ptr fs:[0], esp
// 00596f25  51                   push ecx
// 00596f26  8b442418             mov eax, dword ptr [esp + 0x18]
// 00596f2a  53                   push ebx
// 00596f2b  55                   push ebp
// 00596f2c  8be9                 mov ebp, ecx
// 00596f2e  56                   push esi
// 00596f2f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00596f33  50                   push eax
// 00596f34  8d5d04               lea ebx, [ebp + 4]
// 00596f37  56                   push esi
// 00596f38  8bcb                 mov ecx, ebx
// 00596f3a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00596f3e  897500               mov dword ptr [ebp], esi
// 00596f41  e88afeffff           call 0x596dd0
// 00596f46  85f6                 test esi, esi
// 00596f48  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00596f50  7453                 je 0x596fa5
// 00596f52  57                   push edi
// 00596f53  8dbea4000000         lea edi, [esi + 0xa4]
// 00596f59  85ff                 test edi, edi
// 00596f5b  7431                 je 0x596f8e
// 00596f5d  8937                 mov dword ptr [edi], esi
// 00596f5f  8b33                 mov esi, dword ptr [ebx]
// 00596f61  85f6                 test esi, esi
// 00596f63  740c                 je 0x596f71
// 00596f65  8d4e08               lea ecx, [esi + 8]
// 00596f68  ba01000000           mov edx, 1
// 00596f6d  f00fc111             lock xadd dword ptr [ecx], edx
// 00596f71  8b4f04               mov ecx, dword ptr [edi + 4]
// 00596f74  85c9                 test ecx, ecx
// 00596f76  7413                 je 0x596f8b
// 00596f78  8d4108               lea eax, [ecx + 8]
// 00596f7b  83caff               or edx, 0xffffffff
// 00596f7e  f00fc110             lock xadd dword ptr [eax], edx
// 00596f82  7507                 jne 0x596f8b
// 00596f84  8b01                 mov eax, dword ptr [ecx]
// 00596f86  8b5008               mov edx, dword ptr [eax + 8]
// 00596f89  ffd2                 call edx
// 00596f8b  897704               mov dword ptr [edi + 4], esi
// 00596f8e  5f                   pop edi
// 00596f8f  5e                   pop esi
// 00596f90  8bc5                 mov eax, ebp
// 00596f92  5d                   pop ebp
// 00596f93  5b                   pop ebx
// 00596f94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00596f98  64890d00000000       mov dword ptr fs:[0], ecx
// 00596f9f  83c410               add esp, 0x10
// 00596fa2  c20800               ret 8
// 00596fa5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00596fa9  5e                   pop esi
// 00596faa  8bc5                 mov eax, ebp
// 00596fac  5d                   pop ebp
// 00596fad  5b                   pop ebx
// 00596fae  64890d00000000       mov dword ptr fs:[0], ecx
// 00596fb5  83c410               add esp, 0x10
// 00596fb8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
