// roc 2008-06 004ad3c0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad3c0
//
// 004ad3c0  6aff                 push -1
// 004ad3c2  68abfd7b00           push 0x7bfdab
// 004ad3c7  64a100000000         mov eax, dword ptr fs:[0]
// 004ad3cd  50                   push eax
// 004ad3ce  64892500000000       mov dword ptr fs:[0], esp
// 004ad3d5  51                   push ecx
// 004ad3d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ad3da  53                   push ebx
// 004ad3db  55                   push ebp
// 004ad3dc  8be9                 mov ebp, ecx
// 004ad3de  56                   push esi
// 004ad3df  8b742420             mov esi, dword ptr [esp + 0x20]
// 004ad3e3  50                   push eax
// 004ad3e4  8d5d04               lea ebx, [ebp + 4]
// 004ad3e7  56                   push esi
// 004ad3e8  8bcb                 mov ecx, ebx
// 004ad3ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 004ad3ee  897500               mov dword ptr [ebp], esi
// 004ad3f1  e83af0ffff           call 0x4ac430
// 004ad3f6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ad3fe  85f6                 test esi, esi
// 004ad400  7453                 je 0x4ad455
// 004ad402  57                   push edi
// 004ad403  8dbee4000000         lea edi, [esi + 0xe4]
// 004ad409  85ff                 test edi, edi
// 004ad40b  7431                 je 0x4ad43e
// 004ad40d  8937                 mov dword ptr [edi], esi
// 004ad40f  8b33                 mov esi, dword ptr [ebx]
// 004ad411  85f6                 test esi, esi
// 004ad413  740c                 je 0x4ad421
// 004ad415  8d4e08               lea ecx, [esi + 8]
// 004ad418  ba01000000           mov edx, 1
// 004ad41d  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad421  8b4f04               mov ecx, dword ptr [edi + 4]
// 004ad424  85c9                 test ecx, ecx
// 004ad426  7413                 je 0x4ad43b
// 004ad428  8d4108               lea eax, [ecx + 8]
// 004ad42b  83caff               or edx, 0xffffffff
// 004ad42e  f00fc110             lock xadd dword ptr [eax], edx
// 004ad432  7507                 jne 0x4ad43b
// 004ad434  8b01                 mov eax, dword ptr [ecx]
// 004ad436  8b5008               mov edx, dword ptr [eax + 8]
// 004ad439  ffd2                 call edx
// 004ad43b  897704               mov dword ptr [edi + 4], esi
// 004ad43e  5f                   pop edi
// 004ad43f  5e                   pop esi
// 004ad440  8bc5                 mov eax, ebp
// 004ad442  5d                   pop ebp
// 004ad443  5b                   pop ebx
// 004ad444  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad448  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad44f  83c410               add esp, 0x10
// 004ad452  c20800               ret 8
// 004ad455  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ad459  5e                   pop esi
// 004ad45a  8bc5                 mov eax, ebp
// 004ad45c  5d                   pop ebp
// 004ad45d  5b                   pop ebx
// 004ad45e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad465  83c410               add esp, 0x10
// 004ad468  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
