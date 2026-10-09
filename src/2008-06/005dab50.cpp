// roc 2008-06 005dab50  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dab50
//
// 005dab50  6aff                 push -1
// 005dab52  68c85e7d00           push 0x7d5ec8
// 005dab57  64a100000000         mov eax, dword ptr fs:[0]
// 005dab5d  50                   push eax
// 005dab5e  64892500000000       mov dword ptr fs:[0], esp
// 005dab65  51                   push ecx
// 005dab66  56                   push esi
// 005dab67  8bf1                 mov esi, ecx
// 005dab69  89742404             mov dword ptr [esp + 4], esi
// 005dab6d  e81ecdffff           call 0x5d7890
// 005dab72  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dab7a  e8e15cfeff           call 0x5c0860
// 005dab7f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dab83  89461c               mov dword ptr [esi + 0x1c], eax
// 005dab86  c7063cd78300         mov dword ptr [esi], 0x83d73c
// 005dab8c  c746102cd78300       mov dword ptr [esi + 0x10], 0x83d72c
// 005dab93  c7461424d78300       mov dword ptr [esi + 0x14], 0x83d724
// 005dab9a  c746201cd78300       mov dword ptr [esi + 0x20], 0x83d71c
// 005daba1  c746240cd78300       mov dword ptr [esi + 0x24], 0x83d70c
// 005daba8  c74644fcd68300       mov dword ptr [esi + 0x44], 0x83d6fc
// 005dabaf  c74664ecd68300       mov dword ptr [esi + 0x64], 0x83d6ec
// 005dabb6  c78684000000dcd68300 mov dword ptr [esi + 0x84], 0x83d6dc
// 005dabc0  c786a4000000ccd68300 mov dword ptr [esi + 0xa4], 0x83d6cc
// 005dabca  c786c4000000bcd68300 mov dword ptr [esi + 0xc4], 0x83d6bc
// 005dabd4  8bc6                 mov eax, esi
// 005dabd6  5e                   pop esi
// 005dabd7  64890d00000000       mov dword ptr fs:[0], ecx
// 005dabde  83c410               add esp, 0x10
// 005dabe1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
