// roc 2007-08 0057b8e0  unit: RBX::RootInstance  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b8e0
//
// 0057b8e0  6aff                 push -1
// 0057b8e2  687b6b7500           push 0x756b7b
// 0057b8e7  64a100000000         mov eax, dword ptr fs:[0]
// 0057b8ed  50                   push eax
// 0057b8ee  64892500000000       mov dword ptr fs:[0], esp
// 0057b8f5  51                   push ecx
// 0057b8f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057b8fa  53                   push ebx
// 0057b8fb  55                   push ebp
// 0057b8fc  8be9                 mov ebp, ecx
// 0057b8fe  56                   push esi
// 0057b8ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057b903  50                   push eax
// 0057b904  8d5d04               lea ebx, [ebp + 4]
// 0057b907  56                   push esi
// 0057b908  8bcb                 mov ecx, ebx
// 0057b90a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057b90e  897500               mov dword ptr [ebp], esi
// 0057b911  e89afaffff           call 0x57b3b0
// 0057b916  85f6                 test esi, esi
// 0057b918  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057b920  7453                 je 0x57b975
// 0057b922  57                   push edi
// 0057b923  8dbea4000000         lea edi, [esi + 0xa4]
// 0057b929  85ff                 test edi, edi
// 0057b92b  7431                 je 0x57b95e
// 0057b92d  8937                 mov dword ptr [edi], esi
// 0057b92f  8b33                 mov esi, dword ptr [ebx]
// 0057b931  85f6                 test esi, esi
// 0057b933  740c                 je 0x57b941
// 0057b935  8d4e08               lea ecx, [esi + 8]
// 0057b938  ba01000000           mov edx, 1
// 0057b93d  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b941  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057b944  85c9                 test ecx, ecx
// 0057b946  7413                 je 0x57b95b
// 0057b948  8d4108               lea eax, [ecx + 8]
// 0057b94b  83caff               or edx, 0xffffffff
// 0057b94e  f00fc110             lock xadd dword ptr [eax], edx
// 0057b952  7507                 jne 0x57b95b
// 0057b954  8b01                 mov eax, dword ptr [ecx]
// 0057b956  8b5008               mov edx, dword ptr [eax + 8]
// 0057b959  ffd2                 call edx
// 0057b95b  897704               mov dword ptr [edi + 4], esi
// 0057b95e  5f                   pop edi
// 0057b95f  5e                   pop esi
// 0057b960  8bc5                 mov eax, ebp
// 0057b962  5d                   pop ebp
// 0057b963  5b                   pop ebx
// 0057b964  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057b968  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b96f  83c410               add esp, 0x10
// 0057b972  c20800               ret 8
// 0057b975  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057b979  5e                   pop esi
// 0057b97a  8bc5                 mov eax, ebp
// 0057b97c  5d                   pop ebp
// 0057b97d  5b                   pop ebx
// 0057b97e  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b985  83c410               add esp, 0x10
// 0057b988  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
