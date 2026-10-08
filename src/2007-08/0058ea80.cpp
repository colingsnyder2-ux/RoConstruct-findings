// roc 2007-08 0058ea80  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ea80
//
// 0058ea80  6aff                 push -1
// 0058ea82  687b6b7500           push 0x756b7b
// 0058ea87  64a100000000         mov eax, dword ptr fs:[0]
// 0058ea8d  50                   push eax
// 0058ea8e  64892500000000       mov dword ptr fs:[0], esp
// 0058ea95  51                   push ecx
// 0058ea96  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058ea9a  53                   push ebx
// 0058ea9b  55                   push ebp
// 0058ea9c  8be9                 mov ebp, ecx
// 0058ea9e  56                   push esi
// 0058ea9f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058eaa3  50                   push eax
// 0058eaa4  8d5d04               lea ebx, [ebp + 4]
// 0058eaa7  56                   push esi
// 0058eaa8  8bcb                 mov ecx, ebx
// 0058eaaa  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058eaae  897500               mov dword ptr [ebp], esi
// 0058eab1  e83affffff           call 0x58e9f0
// 0058eab6  85f6                 test esi, esi
// 0058eab8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058eac0  7453                 je 0x58eb15
// 0058eac2  57                   push edi
// 0058eac3  8dbea4000000         lea edi, [esi + 0xa4]
// 0058eac9  85ff                 test edi, edi
// 0058eacb  7431                 je 0x58eafe
// 0058eacd  8937                 mov dword ptr [edi], esi
// 0058eacf  8b33                 mov esi, dword ptr [ebx]
// 0058ead1  85f6                 test esi, esi
// 0058ead3  740c                 je 0x58eae1
// 0058ead5  8d4e08               lea ecx, [esi + 8]
// 0058ead8  ba01000000           mov edx, 1
// 0058eadd  f00fc111             lock xadd dword ptr [ecx], edx
// 0058eae1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058eae4  85c9                 test ecx, ecx
// 0058eae6  7413                 je 0x58eafb
// 0058eae8  8d4108               lea eax, [ecx + 8]
// 0058eaeb  83caff               or edx, 0xffffffff
// 0058eaee  f00fc110             lock xadd dword ptr [eax], edx
// 0058eaf2  7507                 jne 0x58eafb
// 0058eaf4  8b01                 mov eax, dword ptr [ecx]
// 0058eaf6  8b5008               mov edx, dword ptr [eax + 8]
// 0058eaf9  ffd2                 call edx
// 0058eafb  897704               mov dword ptr [edi + 4], esi
// 0058eafe  5f                   pop edi
// 0058eaff  5e                   pop esi
// 0058eb00  8bc5                 mov eax, ebp
// 0058eb02  5d                   pop ebp
// 0058eb03  5b                   pop ebx
// 0058eb04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058eb08  64890d00000000       mov dword ptr fs:[0], ecx
// 0058eb0f  83c410               add esp, 0x10
// 0058eb12  c20800               ret 8
// 0058eb15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058eb19  5e                   pop esi
// 0058eb1a  8bc5                 mov eax, ebp
// 0058eb1c  5d                   pop ebp
// 0058eb1d  5b                   pop ebx
// 0058eb1e  64890d00000000       mov dword ptr fs:[0], ecx
// 0058eb25  83c410               add esp, 0x10
// 0058eb28  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
