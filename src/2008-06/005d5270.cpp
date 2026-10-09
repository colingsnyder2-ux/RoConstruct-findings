// roc 2008-06 005d5270  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5270
//
// 005d5270  6aff                 push -1
// 005d5272  68285a7d00           push 0x7d5a28
// 005d5277  64a100000000         mov eax, dword ptr fs:[0]
// 005d527d  50                   push eax
// 005d527e  64892500000000       mov dword ptr fs:[0], esp
// 005d5285  51                   push ecx
// 005d5286  56                   push esi
// 005d5287  8bf1                 mov esi, ecx
// 005d5289  89742404             mov dword ptr [esp + 4], esi
// 005d528d  e8beebffff           call 0x5d3e50
// 005d5292  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d529a  e851b7ebff           call 0x4909f0
// 005d529f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d52a3  89461c               mov dword ptr [esi + 0x1c], eax
// 005d52a6  c70614c78300         mov dword ptr [esi], 0x83c714
// 005d52ac  c7461004c78300       mov dword ptr [esi + 0x10], 0x83c704
// 005d52b3  c74614fcc68300       mov dword ptr [esi + 0x14], 0x83c6fc
// 005d52ba  c74620f4c68300       mov dword ptr [esi + 0x20], 0x83c6f4
// 005d52c1  c74624e4c68300       mov dword ptr [esi + 0x24], 0x83c6e4
// 005d52c8  c74644d4c68300       mov dword ptr [esi + 0x44], 0x83c6d4
// 005d52cf  c74664c4c68300       mov dword ptr [esi + 0x64], 0x83c6c4
// 005d52d6  c78684000000b4c68300 mov dword ptr [esi + 0x84], 0x83c6b4
// 005d52e0  c786a4000000a4c68300 mov dword ptr [esi + 0xa4], 0x83c6a4
// 005d52ea  c786c400000094c68300 mov dword ptr [esi + 0xc4], 0x83c694
// 005d52f4  c786300100008cc68300 mov dword ptr [esi + 0x130], 0x83c68c
// 005d52fe  8bc6                 mov eax, esi
// 005d5300  5e                   pop esi
// 005d5301  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5308  83c410               add esp, 0x10
// 005d530b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
