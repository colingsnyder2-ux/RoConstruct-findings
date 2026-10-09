// roc 2008-06 0040c550  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c550
//
// 0040c550  6aff                 push -1
// 0040c552  68abfd7b00           push 0x7bfdab
// 0040c557  64a100000000         mov eax, dword ptr fs:[0]
// 0040c55d  50                   push eax
// 0040c55e  64892500000000       mov dword ptr fs:[0], esp
// 0040c565  51                   push ecx
// 0040c566  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040c56a  53                   push ebx
// 0040c56b  55                   push ebp
// 0040c56c  8be9                 mov ebp, ecx
// 0040c56e  56                   push esi
// 0040c56f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040c573  50                   push eax
// 0040c574  8d5d04               lea ebx, [ebp + 4]
// 0040c577  56                   push esi
// 0040c578  8bcb                 mov ecx, ebx
// 0040c57a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040c57e  897500               mov dword ptr [ebp], esi
// 0040c581  e8aafeffff           call 0x40c430
// 0040c586  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040c58e  85f6                 test esi, esi
// 0040c590  7453                 je 0x40c5e5
// 0040c592  57                   push edi
// 0040c593  8dbee4000000         lea edi, [esi + 0xe4]
// 0040c599  85ff                 test edi, edi
// 0040c59b  7431                 je 0x40c5ce
// 0040c59d  8937                 mov dword ptr [edi], esi
// 0040c59f  8b33                 mov esi, dword ptr [ebx]
// 0040c5a1  85f6                 test esi, esi
// 0040c5a3  740c                 je 0x40c5b1
// 0040c5a5  8d4e08               lea ecx, [esi + 8]
// 0040c5a8  ba01000000           mov edx, 1
// 0040c5ad  f00fc111             lock xadd dword ptr [ecx], edx
// 0040c5b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040c5b4  85c9                 test ecx, ecx
// 0040c5b6  7413                 je 0x40c5cb
// 0040c5b8  8d4108               lea eax, [ecx + 8]
// 0040c5bb  83caff               or edx, 0xffffffff
// 0040c5be  f00fc110             lock xadd dword ptr [eax], edx
// 0040c5c2  7507                 jne 0x40c5cb
// 0040c5c4  8b01                 mov eax, dword ptr [ecx]
// 0040c5c6  8b5008               mov edx, dword ptr [eax + 8]
// 0040c5c9  ffd2                 call edx
// 0040c5cb  897704               mov dword ptr [edi + 4], esi
// 0040c5ce  5f                   pop edi
// 0040c5cf  5e                   pop esi
// 0040c5d0  8bc5                 mov eax, ebp
// 0040c5d2  5d                   pop ebp
// 0040c5d3  5b                   pop ebx
// 0040c5d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040c5d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c5df  83c410               add esp, 0x10
// 0040c5e2  c20800               ret 8
// 0040c5e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040c5e9  5e                   pop esi
// 0040c5ea  8bc5                 mov eax, ebp
// 0040c5ec  5d                   pop ebp
// 0040c5ed  5b                   pop ebx
// 0040c5ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c5f5  83c410               add esp, 0x10
// 0040c5f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
