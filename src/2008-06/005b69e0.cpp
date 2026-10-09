// roc 2008-06 005b69e0  unit: RBX::DropperTool  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b69e0
//
// 005b69e0  c7015c748300         mov dword ptr [ecx], 0x83745c
// 005b69e6  c7411050748300       mov dword ptr [ecx + 0x10], 0x837450
// 005b69ed  c7411448748300       mov dword ptr [ecx + 0x14], 0x837448
// 005b69f4  c7412040748300       mov dword ptr [ecx + 0x20], 0x837440
// 005b69fb  c7412430748300       mov dword ptr [ecx + 0x24], 0x837430
// 005b6a02  c7414420748300       mov dword ptr [ecx + 0x44], 0x837420
// 005b6a09  c7416410748300       mov dword ptr [ecx + 0x64], 0x837410
// 005b6a10  c7818400000000748300 mov dword ptr [ecx + 0x84], 0x837400
// 005b6a1a  c781a4000000f0738300 mov dword ptr [ecx + 0xa4], 0x8373f0
// 005b6a24  c781c4000000e0738300 mov dword ptr [ecx + 0xc4], 0x8373e0
// 005b6a2e  e90d3bfaff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
