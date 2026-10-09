// roc 2008-06 005bd0f0  unit: SoundServiceStatsItem  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bd0f0
//
// 005bd0f0  6aff                 push -1
// 005bd0f2  68e83d7d00           push 0x7d3de8
// 005bd0f7  64a100000000         mov eax, dword ptr fs:[0]
// 005bd0fd  50                   push eax
// 005bd0fe  64892500000000       mov dword ptr fs:[0], esp
// 005bd105  51                   push ecx
// 005bd106  56                   push esi
// 005bd107  8bf1                 mov esi, ecx
// 005bd109  89742404             mov dword ptr [esp + 4], esi
// 005bd10d  e84ef8ffff           call 0x5bc960
// 005bd112  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bd11a  e8b1e7ffff           call 0x5bb8d0
// 005bd11f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bd123  89461c               mov dword ptr [esi + 0x1c], eax
// 005bd126  c7063c818300         mov dword ptr [esi], 0x83813c
// 005bd12c  c7461030818300       mov dword ptr [esi + 0x10], 0x838130
// 005bd133  c7461428818300       mov dword ptr [esi + 0x14], 0x838128
// 005bd13a  c7462020818300       mov dword ptr [esi + 0x20], 0x838120
// 005bd141  c7462410818300       mov dword ptr [esi + 0x24], 0x838110
// 005bd148  c7464400818300       mov dword ptr [esi + 0x44], 0x838100
// 005bd14f  c74664f0808300       mov dword ptr [esi + 0x64], 0x8380f0
// 005bd156  c78684000000e0808300 mov dword ptr [esi + 0x84], 0x8380e0
// 005bd160  c786a4000000d0808300 mov dword ptr [esi + 0xa4], 0x8380d0
// 005bd16a  c786c4000000c0808300 mov dword ptr [esi + 0xc4], 0x8380c0
// 005bd174  c78630010000b4808300 mov dword ptr [esi + 0x130], 0x8380b4
// 005bd17e  8bc6                 mov eax, esi
// 005bd180  5e                   pop esi
// 005bd181  64890d00000000       mov dword ptr fs:[0], ecx
// 005bd188  83c410               add esp, 0x10
// 005bd18b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
