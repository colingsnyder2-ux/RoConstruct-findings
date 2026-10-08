// roc 2007-08 0055f110  unit: RBX::ClearBackpack  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055f110
//
// 0055f110  6aff                 push -1
// 0055f112  687b6b7500           push 0x756b7b
// 0055f117  64a100000000         mov eax, dword ptr fs:[0]
// 0055f11d  50                   push eax
// 0055f11e  64892500000000       mov dword ptr fs:[0], esp
// 0055f125  51                   push ecx
// 0055f126  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055f12a  53                   push ebx
// 0055f12b  55                   push ebp
// 0055f12c  8be9                 mov ebp, ecx
// 0055f12e  56                   push esi
// 0055f12f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0055f133  50                   push eax
// 0055f134  8d5d04               lea ebx, [ebp + 4]
// 0055f137  56                   push esi
// 0055f138  8bcb                 mov ecx, ebx
// 0055f13a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0055f13e  897500               mov dword ptr [ebp], esi
// 0055f141  e84afcffff           call 0x55ed90
// 0055f146  85f6                 test esi, esi
// 0055f148  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055f150  7453                 je 0x55f1a5
// 0055f152  57                   push edi
// 0055f153  8dbea4000000         lea edi, [esi + 0xa4]
// 0055f159  85ff                 test edi, edi
// 0055f15b  7431                 je 0x55f18e
// 0055f15d  8937                 mov dword ptr [edi], esi
// 0055f15f  8b33                 mov esi, dword ptr [ebx]
// 0055f161  85f6                 test esi, esi
// 0055f163  740c                 je 0x55f171
// 0055f165  8d4e08               lea ecx, [esi + 8]
// 0055f168  ba01000000           mov edx, 1
// 0055f16d  f00fc111             lock xadd dword ptr [ecx], edx
// 0055f171  8b4f04               mov ecx, dword ptr [edi + 4]
// 0055f174  85c9                 test ecx, ecx
// 0055f176  7413                 je 0x55f18b
// 0055f178  8d4108               lea eax, [ecx + 8]
// 0055f17b  83caff               or edx, 0xffffffff
// 0055f17e  f00fc110             lock xadd dword ptr [eax], edx
// 0055f182  7507                 jne 0x55f18b
// 0055f184  8b01                 mov eax, dword ptr [ecx]
// 0055f186  8b5008               mov edx, dword ptr [eax + 8]
// 0055f189  ffd2                 call edx
// 0055f18b  897704               mov dword ptr [edi + 4], esi
// 0055f18e  5f                   pop edi
// 0055f18f  5e                   pop esi
// 0055f190  8bc5                 mov eax, ebp
// 0055f192  5d                   pop ebp
// 0055f193  5b                   pop ebx
// 0055f194  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055f198  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f19f  83c410               add esp, 0x10
// 0055f1a2  c20800               ret 8
// 0055f1a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055f1a9  5e                   pop esi
// 0055f1aa  8bc5                 mov eax, ebp
// 0055f1ac  5d                   pop ebp
// 0055f1ad  5b                   pop ebx
// 0055f1ae  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f1b5  83c410               add esp, 0x10
// 0055f1b8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
