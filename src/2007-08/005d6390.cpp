// roc 2007-08 005d6390  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d6390
//
// 005d6390  6aff                 push -1
// 005d6392  687b6b7500           push 0x756b7b
// 005d6397  64a100000000         mov eax, dword ptr fs:[0]
// 005d639d  50                   push eax
// 005d639e  64892500000000       mov dword ptr fs:[0], esp
// 005d63a5  51                   push ecx
// 005d63a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d63aa  53                   push ebx
// 005d63ab  55                   push ebp
// 005d63ac  8be9                 mov ebp, ecx
// 005d63ae  56                   push esi
// 005d63af  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d63b3  50                   push eax
// 005d63b4  8d5d04               lea ebx, [ebp + 4]
// 005d63b7  56                   push esi
// 005d63b8  8bcb                 mov ecx, ebx
// 005d63ba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d63be  897500               mov dword ptr [ebp], esi
// 005d63c1  e89af2ffff           call 0x5d5660
// 005d63c6  85f6                 test esi, esi
// 005d63c8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d63d0  7453                 je 0x5d6425
// 005d63d2  57                   push edi
// 005d63d3  8dbea4000000         lea edi, [esi + 0xa4]
// 005d63d9  85ff                 test edi, edi
// 005d63db  7431                 je 0x5d640e
// 005d63dd  8937                 mov dword ptr [edi], esi
// 005d63df  8b33                 mov esi, dword ptr [ebx]
// 005d63e1  85f6                 test esi, esi
// 005d63e3  740c                 je 0x5d63f1
// 005d63e5  8d4e08               lea ecx, [esi + 8]
// 005d63e8  ba01000000           mov edx, 1
// 005d63ed  f00fc111             lock xadd dword ptr [ecx], edx
// 005d63f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d63f4  85c9                 test ecx, ecx
// 005d63f6  7413                 je 0x5d640b
// 005d63f8  8d4108               lea eax, [ecx + 8]
// 005d63fb  83caff               or edx, 0xffffffff
// 005d63fe  f00fc110             lock xadd dword ptr [eax], edx
// 005d6402  7507                 jne 0x5d640b
// 005d6404  8b01                 mov eax, dword ptr [ecx]
// 005d6406  8b5008               mov edx, dword ptr [eax + 8]
// 005d6409  ffd2                 call edx
// 005d640b  897704               mov dword ptr [edi + 4], esi
// 005d640e  5f                   pop edi
// 005d640f  5e                   pop esi
// 005d6410  8bc5                 mov eax, ebp
// 005d6412  5d                   pop ebp
// 005d6413  5b                   pop ebx
// 005d6414  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d6418  64890d00000000       mov dword ptr fs:[0], ecx
// 005d641f  83c410               add esp, 0x10
// 005d6422  c20800               ret 8
// 005d6425  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d6429  5e                   pop esi
// 005d642a  8bc5                 mov eax, ebp
// 005d642c  5d                   pop ebp
// 005d642d  5b                   pop ebx
// 005d642e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6435  83c410               add esp, 0x10
// 005d6438  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
