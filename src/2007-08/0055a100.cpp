// roc 2007-08 0055a100  unit: RBX::VLocalBackpack::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055a100
//
// 0055a100  6aff                 push -1
// 0055a102  687b6b7500           push 0x756b7b
// 0055a107  64a100000000         mov eax, dword ptr fs:[0]
// 0055a10d  50                   push eax
// 0055a10e  64892500000000       mov dword ptr fs:[0], esp
// 0055a115  51                   push ecx
// 0055a116  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055a11a  53                   push ebx
// 0055a11b  55                   push ebp
// 0055a11c  8be9                 mov ebp, ecx
// 0055a11e  56                   push esi
// 0055a11f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0055a123  50                   push eax
// 0055a124  8d5d04               lea ebx, [ebp + 4]
// 0055a127  56                   push esi
// 0055a128  8bcb                 mov ecx, ebx
// 0055a12a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0055a12e  897500               mov dword ptr [ebp], esi
// 0055a131  e83affffff           call 0x55a070
// 0055a136  85f6                 test esi, esi
// 0055a138  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055a140  7453                 je 0x55a195
// 0055a142  57                   push edi
// 0055a143  8dbea4000000         lea edi, [esi + 0xa4]
// 0055a149  85ff                 test edi, edi
// 0055a14b  7431                 je 0x55a17e
// 0055a14d  8937                 mov dword ptr [edi], esi
// 0055a14f  8b33                 mov esi, dword ptr [ebx]
// 0055a151  85f6                 test esi, esi
// 0055a153  740c                 je 0x55a161
// 0055a155  8d4e08               lea ecx, [esi + 8]
// 0055a158  ba01000000           mov edx, 1
// 0055a15d  f00fc111             lock xadd dword ptr [ecx], edx
// 0055a161  8b4f04               mov ecx, dword ptr [edi + 4]
// 0055a164  85c9                 test ecx, ecx
// 0055a166  7413                 je 0x55a17b
// 0055a168  8d4108               lea eax, [ecx + 8]
// 0055a16b  83caff               or edx, 0xffffffff
// 0055a16e  f00fc110             lock xadd dword ptr [eax], edx
// 0055a172  7507                 jne 0x55a17b
// 0055a174  8b01                 mov eax, dword ptr [ecx]
// 0055a176  8b5008               mov edx, dword ptr [eax + 8]
// 0055a179  ffd2                 call edx
// 0055a17b  897704               mov dword ptr [edi + 4], esi
// 0055a17e  5f                   pop edi
// 0055a17f  5e                   pop esi
// 0055a180  8bc5                 mov eax, ebp
// 0055a182  5d                   pop ebp
// 0055a183  5b                   pop ebx
// 0055a184  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055a188  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a18f  83c410               add esp, 0x10
// 0055a192  c20800               ret 8
// 0055a195  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055a199  5e                   pop esi
// 0055a19a  8bc5                 mov eax, ebp
// 0055a19c  5d                   pop ebp
// 0055a19d  5b                   pop ebx
// 0055a19e  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a1a5  83c410               add esp, 0x10
// 0055a1a8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
