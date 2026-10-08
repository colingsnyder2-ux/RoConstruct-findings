// roc 2007-08 00561220  unit: RBX::VModelInstance::?$FilteredSelection  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00561220
//
// 00561220  6aff                 push -1
// 00561222  687b6b7500           push 0x756b7b
// 00561227  64a100000000         mov eax, dword ptr fs:[0]
// 0056122d  50                   push eax
// 0056122e  64892500000000       mov dword ptr fs:[0], esp
// 00561235  51                   push ecx
// 00561236  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056123a  53                   push ebx
// 0056123b  55                   push ebp
// 0056123c  8be9                 mov ebp, ecx
// 0056123e  56                   push esi
// 0056123f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00561243  50                   push eax
// 00561244  8d5d04               lea ebx, [ebp + 4]
// 00561247  56                   push esi
// 00561248  8bcb                 mov ecx, ebx
// 0056124a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056124e  897500               mov dword ptr [ebp], esi
// 00561251  e83affffff           call 0x561190
// 00561256  85f6                 test esi, esi
// 00561258  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00561260  7453                 je 0x5612b5
// 00561262  57                   push edi
// 00561263  8dbea4000000         lea edi, [esi + 0xa4]
// 00561269  85ff                 test edi, edi
// 0056126b  7431                 je 0x56129e
// 0056126d  8937                 mov dword ptr [edi], esi
// 0056126f  8b33                 mov esi, dword ptr [ebx]
// 00561271  85f6                 test esi, esi
// 00561273  740c                 je 0x561281
// 00561275  8d4e08               lea ecx, [esi + 8]
// 00561278  ba01000000           mov edx, 1
// 0056127d  f00fc111             lock xadd dword ptr [ecx], edx
// 00561281  8b4f04               mov ecx, dword ptr [edi + 4]
// 00561284  85c9                 test ecx, ecx
// 00561286  7413                 je 0x56129b
// 00561288  8d4108               lea eax, [ecx + 8]
// 0056128b  83caff               or edx, 0xffffffff
// 0056128e  f00fc110             lock xadd dword ptr [eax], edx
// 00561292  7507                 jne 0x56129b
// 00561294  8b01                 mov eax, dword ptr [ecx]
// 00561296  8b5008               mov edx, dword ptr [eax + 8]
// 00561299  ffd2                 call edx
// 0056129b  897704               mov dword ptr [edi + 4], esi
// 0056129e  5f                   pop edi
// 0056129f  5e                   pop esi
// 005612a0  8bc5                 mov eax, ebp
// 005612a2  5d                   pop ebp
// 005612a3  5b                   pop ebx
// 005612a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005612a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005612af  83c410               add esp, 0x10
// 005612b2  c20800               ret 8
// 005612b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005612b9  5e                   pop esi
// 005612ba  8bc5                 mov eax, ebp
// 005612bc  5d                   pop ebp
// 005612bd  5b                   pop ebx
// 005612be  64890d00000000       mov dword ptr fs:[0], ecx
// 005612c5  83c410               add esp, 0x10
// 005612c8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
