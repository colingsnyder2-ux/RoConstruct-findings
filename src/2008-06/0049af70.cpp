// roc 2008-06 0049af70  unit: RBX::Network::VPlayers::?$SignalDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049af70
//
// 0049af70  6aff                 push -1
// 0049af72  68c8d37b00           push 0x7bd3c8
// 0049af77  64a100000000         mov eax, dword ptr fs:[0]
// 0049af7d  50                   push eax
// 0049af7e  64892500000000       mov dword ptr fs:[0], esp
// 0049af85  51                   push ecx
// 0049af86  56                   push esi
// 0049af87  8bf1                 mov esi, ecx
// 0049af89  89742404             mov dword ptr [esp + 4], esi
// 0049af8d  e82eb0ffff           call 0x495fc0
// 0049af92  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049af9a  e801f9ffff           call 0x49a8a0
// 0049af9f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049afa3  89461c               mov dword ptr [esi + 0x1c], eax
// 0049afa6  c70644298200         mov dword ptr [esi], 0x822944
// 0049afac  c7461038298200       mov dword ptr [esi + 0x10], 0x822938
// 0049afb3  c7461430298200       mov dword ptr [esi + 0x14], 0x822930
// 0049afba  c7462028298200       mov dword ptr [esi + 0x20], 0x822928
// 0049afc1  c7462418298200       mov dword ptr [esi + 0x24], 0x822918
// 0049afc8  c7464408298200       mov dword ptr [esi + 0x44], 0x822908
// 0049afcf  c74664f8288200       mov dword ptr [esi + 0x64], 0x8228f8
// 0049afd6  c78684000000e8288200 mov dword ptr [esi + 0x84], 0x8228e8
// 0049afe0  c786a4000000d8288200 mov dword ptr [esi + 0xa4], 0x8228d8
// 0049afea  c786c4000000c8288200 mov dword ptr [esi + 0xc4], 0x8228c8
// 0049aff4  8bc6                 mov eax, esi
// 0049aff6  5e                   pop esi
// 0049aff7  64890d00000000       mov dword ptr fs:[0], ecx
// 0049affe  83c410               add esp, 0x10
// 0049b001  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
