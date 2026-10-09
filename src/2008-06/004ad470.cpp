// roc 2008-06 004ad470  unit: RBX::Network::Replicator::ChangePropertyItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad470
//
// 004ad470  6aff                 push -1
// 004ad472  68abfd7b00           push 0x7bfdab
// 004ad477  64a100000000         mov eax, dword ptr fs:[0]
// 004ad47d  50                   push eax
// 004ad47e  64892500000000       mov dword ptr fs:[0], esp
// 004ad485  51                   push ecx
// 004ad486  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ad48a  53                   push ebx
// 004ad48b  55                   push ebp
// 004ad48c  8be9                 mov ebp, ecx
// 004ad48e  56                   push esi
// 004ad48f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004ad493  50                   push eax
// 004ad494  8d5d04               lea ebx, [ebp + 4]
// 004ad497  56                   push esi
// 004ad498  8bcb                 mov ecx, ebx
// 004ad49a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004ad49e  897500               mov dword ptr [ebp], esi
// 004ad4a1  e81af0ffff           call 0x4ac4c0
// 004ad4a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ad4ae  85f6                 test esi, esi
// 004ad4b0  7453                 je 0x4ad505
// 004ad4b2  57                   push edi
// 004ad4b3  8dbee4000000         lea edi, [esi + 0xe4]
// 004ad4b9  85ff                 test edi, edi
// 004ad4bb  7431                 je 0x4ad4ee
// 004ad4bd  8937                 mov dword ptr [edi], esi
// 004ad4bf  8b33                 mov esi, dword ptr [ebx]
// 004ad4c1  85f6                 test esi, esi
// 004ad4c3  740c                 je 0x4ad4d1
// 004ad4c5  8d4e08               lea ecx, [esi + 8]
// 004ad4c8  ba01000000           mov edx, 1
// 004ad4cd  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad4d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004ad4d4  85c9                 test ecx, ecx
// 004ad4d6  7413                 je 0x4ad4eb
// 004ad4d8  8d4108               lea eax, [ecx + 8]
// 004ad4db  83caff               or edx, 0xffffffff
// 004ad4de  f00fc110             lock xadd dword ptr [eax], edx
// 004ad4e2  7507                 jne 0x4ad4eb
// 004ad4e4  8b01                 mov eax, dword ptr [ecx]
// 004ad4e6  8b5008               mov edx, dword ptr [eax + 8]
// 004ad4e9  ffd2                 call edx
// 004ad4eb  897704               mov dword ptr [edi + 4], esi
// 004ad4ee  5f                   pop edi
// 004ad4ef  5e                   pop esi
// 004ad4f0  8bc5                 mov eax, ebp
// 004ad4f2  5d                   pop ebp
// 004ad4f3  5b                   pop ebx
// 004ad4f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad4f8  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad4ff  83c410               add esp, 0x10
// 004ad502  c20800               ret 8
// 004ad505  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ad509  5e                   pop esi
// 004ad50a  8bc5                 mov eax, ebp
// 004ad50c  5d                   pop ebp
// 004ad50d  5b                   pop ebx
// 004ad50e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad515  83c410               add esp, 0x10
// 004ad518  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
