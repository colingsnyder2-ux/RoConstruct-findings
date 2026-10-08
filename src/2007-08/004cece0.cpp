// roc 2007-08 004cece0  unit: G3D::VVector3::?$Table  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cece0
//
// 004cece0  6aff                 push -1
// 004cece2  687b6b7500           push 0x756b7b
// 004cece7  64a100000000         mov eax, dword ptr fs:[0]
// 004ceced  50                   push eax
// 004cecee  64892500000000       mov dword ptr fs:[0], esp
// 004cecf5  51                   push ecx
// 004cecf6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cecfa  53                   push ebx
// 004cecfb  55                   push ebp
// 004cecfc  8be9                 mov ebp, ecx
// 004cecfe  56                   push esi
// 004cecff  8b742420             mov esi, dword ptr [esp + 0x20]
// 004ced03  50                   push eax
// 004ced04  8d5d04               lea ebx, [ebp + 4]
// 004ced07  56                   push esi
// 004ced08  8bcb                 mov ecx, ebx
// 004ced0a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004ced0e  897500               mov dword ptr [ebp], esi
// 004ced11  e83affffff           call 0x4cec50
// 004ced16  85f6                 test esi, esi
// 004ced18  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ced20  7453                 je 0x4ced75
// 004ced22  57                   push edi
// 004ced23  8dbea4000000         lea edi, [esi + 0xa4]
// 004ced29  85ff                 test edi, edi
// 004ced2b  7431                 je 0x4ced5e
// 004ced2d  8937                 mov dword ptr [edi], esi
// 004ced2f  8b33                 mov esi, dword ptr [ebx]
// 004ced31  85f6                 test esi, esi
// 004ced33  740c                 je 0x4ced41
// 004ced35  8d4e08               lea ecx, [esi + 8]
// 004ced38  ba01000000           mov edx, 1
// 004ced3d  f00fc111             lock xadd dword ptr [ecx], edx
// 004ced41  8b4f04               mov ecx, dword ptr [edi + 4]
// 004ced44  85c9                 test ecx, ecx
// 004ced46  7413                 je 0x4ced5b
// 004ced48  8d4108               lea eax, [ecx + 8]
// 004ced4b  83caff               or edx, 0xffffffff
// 004ced4e  f00fc110             lock xadd dword ptr [eax], edx
// 004ced52  7507                 jne 0x4ced5b
// 004ced54  8b01                 mov eax, dword ptr [ecx]
// 004ced56  8b5008               mov edx, dword ptr [eax + 8]
// 004ced59  ffd2                 call edx
// 004ced5b  897704               mov dword ptr [edi + 4], esi
// 004ced5e  5f                   pop edi
// 004ced5f  5e                   pop esi
// 004ced60  8bc5                 mov eax, ebp
// 004ced62  5d                   pop ebp
// 004ced63  5b                   pop ebx
// 004ced64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ced68  64890d00000000       mov dword ptr fs:[0], ecx
// 004ced6f  83c410               add esp, 0x10
// 004ced72  c20800               ret 8
// 004ced75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ced79  5e                   pop esi
// 004ced7a  8bc5                 mov eax, ebp
// 004ced7c  5d                   pop ebp
// 004ced7d  5b                   pop ebx
// 004ced7e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ced85  83c410               add esp, 0x10
// 004ced88  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
