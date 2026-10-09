// roc 2008-06 00566750  unit: RBX::VTeam::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566750
//
// 00566750  c701e4ec8200         mov dword ptr [ecx], 0x82ece4
// 00566756  c74110d8ec8200       mov dword ptr [ecx + 0x10], 0x82ecd8
// 0056675d  c74114d0ec8200       mov dword ptr [ecx + 0x14], 0x82ecd0
// 00566764  c74120c8ec8200       mov dword ptr [ecx + 0x20], 0x82ecc8
// 0056676b  c74124b8ec8200       mov dword ptr [ecx + 0x24], 0x82ecb8
// 00566772  c74144a8ec8200       mov dword ptr [ecx + 0x44], 0x82eca8
// 00566779  c7416498ec8200       mov dword ptr [ecx + 0x64], 0x82ec98
// 00566780  c7818400000088ec8200 mov dword ptr [ecx + 0x84], 0x82ec88
// 0056678a  c781a400000078ec8200 mov dword ptr [ecx + 0xa4], 0x82ec78
// 00566794  c781c400000068ec8200 mov dword ptr [ecx + 0xc4], 0x82ec68
// 0056679e  e99d3dffff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
