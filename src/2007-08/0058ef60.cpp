// roc 2007-08 0058ef60  unit: RBX::VFlagStandService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ef60
//
// 0058ef60  6aff                 push -1
// 0058ef62  687b6b7500           push 0x756b7b
// 0058ef67  64a100000000         mov eax, dword ptr fs:[0]
// 0058ef6d  50                   push eax
// 0058ef6e  64892500000000       mov dword ptr fs:[0], esp
// 0058ef75  51                   push ecx
// 0058ef76  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058ef7a  53                   push ebx
// 0058ef7b  55                   push ebp
// 0058ef7c  8be9                 mov ebp, ecx
// 0058ef7e  56                   push esi
// 0058ef7f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058ef83  50                   push eax
// 0058ef84  8d5d04               lea ebx, [ebp + 4]
// 0058ef87  56                   push esi
// 0058ef88  8bcb                 mov ecx, ebx
// 0058ef8a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058ef8e  897500               mov dword ptr [ebp], esi
// 0058ef91  e83affffff           call 0x58eed0
// 0058ef96  85f6                 test esi, esi
// 0058ef98  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058efa0  7453                 je 0x58eff5
// 0058efa2  57                   push edi
// 0058efa3  8dbea4000000         lea edi, [esi + 0xa4]
// 0058efa9  85ff                 test edi, edi
// 0058efab  7431                 je 0x58efde
// 0058efad  8937                 mov dword ptr [edi], esi
// 0058efaf  8b33                 mov esi, dword ptr [ebx]
// 0058efb1  85f6                 test esi, esi
// 0058efb3  740c                 je 0x58efc1
// 0058efb5  8d4e08               lea ecx, [esi + 8]
// 0058efb8  ba01000000           mov edx, 1
// 0058efbd  f00fc111             lock xadd dword ptr [ecx], edx
// 0058efc1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058efc4  85c9                 test ecx, ecx
// 0058efc6  7413                 je 0x58efdb
// 0058efc8  8d4108               lea eax, [ecx + 8]
// 0058efcb  83caff               or edx, 0xffffffff
// 0058efce  f00fc110             lock xadd dword ptr [eax], edx
// 0058efd2  7507                 jne 0x58efdb
// 0058efd4  8b01                 mov eax, dword ptr [ecx]
// 0058efd6  8b5008               mov edx, dword ptr [eax + 8]
// 0058efd9  ffd2                 call edx
// 0058efdb  897704               mov dword ptr [edi + 4], esi
// 0058efde  5f                   pop edi
// 0058efdf  5e                   pop esi
// 0058efe0  8bc5                 mov eax, ebp
// 0058efe2  5d                   pop ebp
// 0058efe3  5b                   pop ebx
// 0058efe4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058efe8  64890d00000000       mov dword ptr fs:[0], ecx
// 0058efef  83c410               add esp, 0x10
// 0058eff2  c20800               ret 8
// 0058eff5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058eff9  5e                   pop esi
// 0058effa  8bc5                 mov eax, ebp
// 0058effc  5d                   pop ebp
// 0058effd  5b                   pop ebx
// 0058effe  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f005  83c410               add esp, 0x10
// 0058f008  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
