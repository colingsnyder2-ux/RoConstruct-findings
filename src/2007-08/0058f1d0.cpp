// roc 2007-08 0058f1d0  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058f1d0
//
// 0058f1d0  6aff                 push -1
// 0058f1d2  687b6b7500           push 0x756b7b
// 0058f1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0058f1dd  50                   push eax
// 0058f1de  64892500000000       mov dword ptr fs:[0], esp
// 0058f1e5  51                   push ecx
// 0058f1e6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058f1ea  53                   push ebx
// 0058f1eb  55                   push ebp
// 0058f1ec  8be9                 mov ebp, ecx
// 0058f1ee  56                   push esi
// 0058f1ef  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058f1f3  50                   push eax
// 0058f1f4  8d5d04               lea ebx, [ebp + 4]
// 0058f1f7  56                   push esi
// 0058f1f8  8bcb                 mov ecx, ebx
// 0058f1fa  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058f1fe  897500               mov dword ptr [ebp], esi
// 0058f201  e83affffff           call 0x58f140
// 0058f206  85f6                 test esi, esi
// 0058f208  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058f210  7453                 je 0x58f265
// 0058f212  57                   push edi
// 0058f213  8dbea4000000         lea edi, [esi + 0xa4]
// 0058f219  85ff                 test edi, edi
// 0058f21b  7431                 je 0x58f24e
// 0058f21d  8937                 mov dword ptr [edi], esi
// 0058f21f  8b33                 mov esi, dword ptr [ebx]
// 0058f221  85f6                 test esi, esi
// 0058f223  740c                 je 0x58f231
// 0058f225  8d4e08               lea ecx, [esi + 8]
// 0058f228  ba01000000           mov edx, 1
// 0058f22d  f00fc111             lock xadd dword ptr [ecx], edx
// 0058f231  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058f234  85c9                 test ecx, ecx
// 0058f236  7413                 je 0x58f24b
// 0058f238  8d4108               lea eax, [ecx + 8]
// 0058f23b  83caff               or edx, 0xffffffff
// 0058f23e  f00fc110             lock xadd dword ptr [eax], edx
// 0058f242  7507                 jne 0x58f24b
// 0058f244  8b01                 mov eax, dword ptr [ecx]
// 0058f246  8b5008               mov edx, dword ptr [eax + 8]
// 0058f249  ffd2                 call edx
// 0058f24b  897704               mov dword ptr [edi + 4], esi
// 0058f24e  5f                   pop edi
// 0058f24f  5e                   pop esi
// 0058f250  8bc5                 mov eax, ebp
// 0058f252  5d                   pop ebp
// 0058f253  5b                   pop ebx
// 0058f254  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058f258  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f25f  83c410               add esp, 0x10
// 0058f262  c20800               ret 8
// 0058f265  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058f269  5e                   pop esi
// 0058f26a  8bc5                 mov eax, ebp
// 0058f26c  5d                   pop ebp
// 0058f26d  5b                   pop ebx
// 0058f26e  64890d00000000       mov dword ptr fs:[0], ecx
// 0058f275  83c410               add esp, 0x10
// 0058f278  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
