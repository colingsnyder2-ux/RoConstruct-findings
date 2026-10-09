// roc 2008-06 004ad610  unit: RBX::Network::Replicator::ChangePropertyItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad610
//
// 004ad610  6aff                 push -1
// 004ad612  68abfd7b00           push 0x7bfdab
// 004ad617  64a100000000         mov eax, dword ptr fs:[0]
// 004ad61d  50                   push eax
// 004ad61e  64892500000000       mov dword ptr fs:[0], esp
// 004ad625  51                   push ecx
// 004ad626  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ad62a  53                   push ebx
// 004ad62b  55                   push ebp
// 004ad62c  8be9                 mov ebp, ecx
// 004ad62e  56                   push esi
// 004ad62f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004ad633  50                   push eax
// 004ad634  8d5d04               lea ebx, [ebp + 4]
// 004ad637  56                   push esi
// 004ad638  8bcb                 mov ecx, ebx
// 004ad63a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004ad63e  897500               mov dword ptr [ebp], esi
// 004ad641  e8caf0ffff           call 0x4ac710
// 004ad646  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ad64e  85f6                 test esi, esi
// 004ad650  7453                 je 0x4ad6a5
// 004ad652  57                   push edi
// 004ad653  8dbee4000000         lea edi, [esi + 0xe4]
// 004ad659  85ff                 test edi, edi
// 004ad65b  7431                 je 0x4ad68e
// 004ad65d  8937                 mov dword ptr [edi], esi
// 004ad65f  8b33                 mov esi, dword ptr [ebx]
// 004ad661  85f6                 test esi, esi
// 004ad663  740c                 je 0x4ad671
// 004ad665  8d4e08               lea ecx, [esi + 8]
// 004ad668  ba01000000           mov edx, 1
// 004ad66d  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad671  8b4f04               mov ecx, dword ptr [edi + 4]
// 004ad674  85c9                 test ecx, ecx
// 004ad676  7413                 je 0x4ad68b
// 004ad678  8d4108               lea eax, [ecx + 8]
// 004ad67b  83caff               or edx, 0xffffffff
// 004ad67e  f00fc110             lock xadd dword ptr [eax], edx
// 004ad682  7507                 jne 0x4ad68b
// 004ad684  8b01                 mov eax, dword ptr [ecx]
// 004ad686  8b5008               mov edx, dword ptr [eax + 8]
// 004ad689  ffd2                 call edx
// 004ad68b  897704               mov dword ptr [edi + 4], esi
// 004ad68e  5f                   pop edi
// 004ad68f  5e                   pop esi
// 004ad690  8bc5                 mov eax, ebp
// 004ad692  5d                   pop ebp
// 004ad693  5b                   pop ebx
// 004ad694  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad698  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad69f  83c410               add esp, 0x10
// 004ad6a2  c20800               ret 8
// 004ad6a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ad6a9  5e                   pop esi
// 004ad6aa  8bc5                 mov eax, ebp
// 004ad6ac  5d                   pop ebp
// 004ad6ad  5b                   pop ebx
// 004ad6ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad6b5  83c410               add esp, 0x10
// 004ad6b8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
