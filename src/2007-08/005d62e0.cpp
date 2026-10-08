// roc 2007-08 005d62e0  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d62e0
//
// 005d62e0  6aff                 push -1
// 005d62e2  687b6b7500           push 0x756b7b
// 005d62e7  64a100000000         mov eax, dword ptr fs:[0]
// 005d62ed  50                   push eax
// 005d62ee  64892500000000       mov dword ptr fs:[0], esp
// 005d62f5  51                   push ecx
// 005d62f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d62fa  53                   push ebx
// 005d62fb  55                   push ebp
// 005d62fc  8be9                 mov ebp, ecx
// 005d62fe  56                   push esi
// 005d62ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d6303  50                   push eax
// 005d6304  8d5d04               lea ebx, [ebp + 4]
// 005d6307  56                   push esi
// 005d6308  8bcb                 mov ecx, ebx
// 005d630a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d630e  897500               mov dword ptr [ebp], esi
// 005d6311  e8baf2ffff           call 0x5d55d0
// 005d6316  85f6                 test esi, esi
// 005d6318  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d6320  7453                 je 0x5d6375
// 005d6322  57                   push edi
// 005d6323  8dbea4000000         lea edi, [esi + 0xa4]
// 005d6329  85ff                 test edi, edi
// 005d632b  7431                 je 0x5d635e
// 005d632d  8937                 mov dword ptr [edi], esi
// 005d632f  8b33                 mov esi, dword ptr [ebx]
// 005d6331  85f6                 test esi, esi
// 005d6333  740c                 je 0x5d6341
// 005d6335  8d4e08               lea ecx, [esi + 8]
// 005d6338  ba01000000           mov edx, 1
// 005d633d  f00fc111             lock xadd dword ptr [ecx], edx
// 005d6341  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d6344  85c9                 test ecx, ecx
// 005d6346  7413                 je 0x5d635b
// 005d6348  8d4108               lea eax, [ecx + 8]
// 005d634b  83caff               or edx, 0xffffffff
// 005d634e  f00fc110             lock xadd dword ptr [eax], edx
// 005d6352  7507                 jne 0x5d635b
// 005d6354  8b01                 mov eax, dword ptr [ecx]
// 005d6356  8b5008               mov edx, dword ptr [eax + 8]
// 005d6359  ffd2                 call edx
// 005d635b  897704               mov dword ptr [edi + 4], esi
// 005d635e  5f                   pop edi
// 005d635f  5e                   pop esi
// 005d6360  8bc5                 mov eax, ebp
// 005d6362  5d                   pop ebp
// 005d6363  5b                   pop ebx
// 005d6364  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d6368  64890d00000000       mov dword ptr fs:[0], ecx
// 005d636f  83c410               add esp, 0x10
// 005d6372  c20800               ret 8
// 005d6375  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d6379  5e                   pop esi
// 005d637a  8bc5                 mov eax, ebp
// 005d637c  5d                   pop ebp
// 005d637d  5b                   pop ebx
// 005d637e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6385  83c410               add esp, 0x10
// 005d6388  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
