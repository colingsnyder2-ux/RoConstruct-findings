// roc 2008-06 0059fad0  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059fad0
//
// 0059fad0  6aff                 push -1
// 0059fad2  6848287d00           push 0x7d2848
// 0059fad7  64a100000000         mov eax, dword ptr fs:[0]
// 0059fadd  50                   push eax
// 0059fade  64892500000000       mov dword ptr fs:[0], esp
// 0059fae5  51                   push ecx
// 0059fae6  56                   push esi
// 0059fae7  8bf1                 mov esi, ecx
// 0059fae9  89742404             mov dword ptr [esp + 4], esi
// 0059faed  e84ef2ffff           call 0x59ed40
// 0059faf2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059fafa  e8e1fcffff           call 0x59f7e0
// 0059faff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059fb03  89461c               mov dword ptr [esi + 0x1c], eax
// 0059fb06  c706bc348300         mov dword ptr [esi], 0x8334bc
// 0059fb0c  c74610b0348300       mov dword ptr [esi + 0x10], 0x8334b0
// 0059fb13  c74614a8348300       mov dword ptr [esi + 0x14], 0x8334a8
// 0059fb1a  c74620a0348300       mov dword ptr [esi + 0x20], 0x8334a0
// 0059fb21  c7462490348300       mov dword ptr [esi + 0x24], 0x833490
// 0059fb28  c7464480348300       mov dword ptr [esi + 0x44], 0x833480
// 0059fb2f  c7466470348300       mov dword ptr [esi + 0x64], 0x833470
// 0059fb36  c7868400000060348300 mov dword ptr [esi + 0x84], 0x833460
// 0059fb40  c786a400000050348300 mov dword ptr [esi + 0xa4], 0x833450
// 0059fb4a  c786c400000040348300 mov dword ptr [esi + 0xc4], 0x833440
// 0059fb54  8bc6                 mov eax, esi
// 0059fb56  5e                   pop esi
// 0059fb57  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fb5e  83c410               add esp, 0x10
// 0059fb61  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
