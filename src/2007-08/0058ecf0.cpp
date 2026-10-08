// roc 2007-08 0058ecf0  unit: RBX::VFlagStand::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ecf0
//
// 0058ecf0  6aff                 push -1
// 0058ecf2  687b6b7500           push 0x756b7b
// 0058ecf7  64a100000000         mov eax, dword ptr fs:[0]
// 0058ecfd  50                   push eax
// 0058ecfe  64892500000000       mov dword ptr fs:[0], esp
// 0058ed05  51                   push ecx
// 0058ed06  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058ed0a  53                   push ebx
// 0058ed0b  55                   push ebp
// 0058ed0c  8be9                 mov ebp, ecx
// 0058ed0e  56                   push esi
// 0058ed0f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058ed13  50                   push eax
// 0058ed14  8d5d04               lea ebx, [ebp + 4]
// 0058ed17  56                   push esi
// 0058ed18  8bcb                 mov ecx, ebx
// 0058ed1a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058ed1e  897500               mov dword ptr [ebp], esi
// 0058ed21  e83affffff           call 0x58ec60
// 0058ed26  85f6                 test esi, esi
// 0058ed28  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058ed30  7453                 je 0x58ed85
// 0058ed32  57                   push edi
// 0058ed33  8dbea4000000         lea edi, [esi + 0xa4]
// 0058ed39  85ff                 test edi, edi
// 0058ed3b  7431                 je 0x58ed6e
// 0058ed3d  8937                 mov dword ptr [edi], esi
// 0058ed3f  8b33                 mov esi, dword ptr [ebx]
// 0058ed41  85f6                 test esi, esi
// 0058ed43  740c                 je 0x58ed51
// 0058ed45  8d4e08               lea ecx, [esi + 8]
// 0058ed48  ba01000000           mov edx, 1
// 0058ed4d  f00fc111             lock xadd dword ptr [ecx], edx
// 0058ed51  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058ed54  85c9                 test ecx, ecx
// 0058ed56  7413                 je 0x58ed6b
// 0058ed58  8d4108               lea eax, [ecx + 8]
// 0058ed5b  83caff               or edx, 0xffffffff
// 0058ed5e  f00fc110             lock xadd dword ptr [eax], edx
// 0058ed62  7507                 jne 0x58ed6b
// 0058ed64  8b01                 mov eax, dword ptr [ecx]
// 0058ed66  8b5008               mov edx, dword ptr [eax + 8]
// 0058ed69  ffd2                 call edx
// 0058ed6b  897704               mov dword ptr [edi + 4], esi
// 0058ed6e  5f                   pop edi
// 0058ed6f  5e                   pop esi
// 0058ed70  8bc5                 mov eax, ebp
// 0058ed72  5d                   pop ebp
// 0058ed73  5b                   pop ebx
// 0058ed74  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058ed78  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ed7f  83c410               add esp, 0x10
// 0058ed82  c20800               ret 8
// 0058ed85  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058ed89  5e                   pop esi
// 0058ed8a  8bc5                 mov eax, ebp
// 0058ed8c  5d                   pop ebp
// 0058ed8d  5b                   pop ebx
// 0058ed8e  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ed95  83c410               add esp, 0x10
// 0058ed98  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
