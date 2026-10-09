// roc 2008-06 004ad560  unit: RBX::Network::Replicator::ChangePropertyItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad560
//
// 004ad560  6aff                 push -1
// 004ad562  68abfd7b00           push 0x7bfdab
// 004ad567  64a100000000         mov eax, dword ptr fs:[0]
// 004ad56d  50                   push eax
// 004ad56e  64892500000000       mov dword ptr fs:[0], esp
// 004ad575  51                   push ecx
// 004ad576  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ad57a  53                   push ebx
// 004ad57b  55                   push ebp
// 004ad57c  8be9                 mov ebp, ecx
// 004ad57e  56                   push esi
// 004ad57f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004ad583  50                   push eax
// 004ad584  8d5d04               lea ebx, [ebp + 4]
// 004ad587  56                   push esi
// 004ad588  8bcb                 mov ecx, ebx
// 004ad58a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004ad58e  897500               mov dword ptr [ebp], esi
// 004ad591  e88af0ffff           call 0x4ac620
// 004ad596  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ad59e  85f6                 test esi, esi
// 004ad5a0  7453                 je 0x4ad5f5
// 004ad5a2  57                   push edi
// 004ad5a3  8dbee4000000         lea edi, [esi + 0xe4]
// 004ad5a9  85ff                 test edi, edi
// 004ad5ab  7431                 je 0x4ad5de
// 004ad5ad  8937                 mov dword ptr [edi], esi
// 004ad5af  8b33                 mov esi, dword ptr [ebx]
// 004ad5b1  85f6                 test esi, esi
// 004ad5b3  740c                 je 0x4ad5c1
// 004ad5b5  8d4e08               lea ecx, [esi + 8]
// 004ad5b8  ba01000000           mov edx, 1
// 004ad5bd  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad5c1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004ad5c4  85c9                 test ecx, ecx
// 004ad5c6  7413                 je 0x4ad5db
// 004ad5c8  8d4108               lea eax, [ecx + 8]
// 004ad5cb  83caff               or edx, 0xffffffff
// 004ad5ce  f00fc110             lock xadd dword ptr [eax], edx
// 004ad5d2  7507                 jne 0x4ad5db
// 004ad5d4  8b01                 mov eax, dword ptr [ecx]
// 004ad5d6  8b5008               mov edx, dword ptr [eax + 8]
// 004ad5d9  ffd2                 call edx
// 004ad5db  897704               mov dword ptr [edi + 4], esi
// 004ad5de  5f                   pop edi
// 004ad5df  5e                   pop esi
// 004ad5e0  8bc5                 mov eax, ebp
// 004ad5e2  5d                   pop ebp
// 004ad5e3  5b                   pop ebx
// 004ad5e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad5e8  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad5ef  83c410               add esp, 0x10
// 004ad5f2  c20800               ret 8
// 004ad5f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ad5f9  5e                   pop esi
// 004ad5fa  8bc5                 mov eax, ebp
// 004ad5fc  5d                   pop ebp
// 004ad5fd  5b                   pop ebx
// 004ad5fe  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad605  83c410               add esp, 0x10
// 004ad608  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
