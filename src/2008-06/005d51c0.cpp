// roc 2008-06 005d51c0  unit: RBX::VClothing::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d51c0
//
// 005d51c0  6aff                 push -1
// 005d51c2  68085a7d00           push 0x7d5a08
// 005d51c7  64a100000000         mov eax, dword ptr fs:[0]
// 005d51cd  50                   push eax
// 005d51ce  64892500000000       mov dword ptr fs:[0], esp
// 005d51d5  51                   push ecx
// 005d51d6  56                   push esi
// 005d51d7  8bf1                 mov esi, ecx
// 005d51d9  89742404             mov dword ptr [esp + 4], esi
// 005d51dd  e8feebffff           call 0x5d3de0
// 005d51e2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d51ea  e8e1affeff           call 0x5c01d0
// 005d51ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d51f3  89461c               mov dword ptr [esi + 0x1c], eax
// 005d51f6  c70644c68300         mov dword ptr [esi], 0x83c644
// 005d51fc  c7461034c68300       mov dword ptr [esi + 0x10], 0x83c634
// 005d5203  c746142cc68300       mov dword ptr [esi + 0x14], 0x83c62c
// 005d520a  c7462024c68300       mov dword ptr [esi + 0x20], 0x83c624
// 005d5211  c7462414c68300       mov dword ptr [esi + 0x24], 0x83c614
// 005d5218  c7464404c68300       mov dword ptr [esi + 0x44], 0x83c604
// 005d521f  c74664f4c58300       mov dword ptr [esi + 0x64], 0x83c5f4
// 005d5226  c78684000000e4c58300 mov dword ptr [esi + 0x84], 0x83c5e4
// 005d5230  c786a4000000d4c58300 mov dword ptr [esi + 0xa4], 0x83c5d4
// 005d523a  c786c4000000c4c58300 mov dword ptr [esi + 0xc4], 0x83c5c4
// 005d5244  c78630010000bcc58300 mov dword ptr [esi + 0x130], 0x83c5bc
// 005d524e  8bc6                 mov eax, esi
// 005d5250  5e                   pop esi
// 005d5251  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5258  83c410               add esp, 0x10
// 005d525b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
