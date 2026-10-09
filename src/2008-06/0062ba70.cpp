// roc 2008-06 0062ba70  unit: RBX::VExplosion::?$SignalDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062ba70
//
// 0062ba70  c70104618400         mov dword ptr [ecx], 0x846104
// 0062ba76  c74110f8608400       mov dword ptr [ecx + 0x10], 0x8460f8
// 0062ba7d  c74114f0608400       mov dword ptr [ecx + 0x14], 0x8460f0
// 0062ba84  c74120e8608400       mov dword ptr [ecx + 0x20], 0x8460e8
// 0062ba8b  c74124d8608400       mov dword ptr [ecx + 0x24], 0x8460d8
// 0062ba92  c74144c8608400       mov dword ptr [ecx + 0x44], 0x8460c8
// 0062ba99  c74164b8608400       mov dword ptr [ecx + 0x64], 0x8460b8
// 0062baa0  c78184000000a8608400 mov dword ptr [ecx + 0x84], 0x8460a8
// 0062baaa  c781a400000098608400 mov dword ptr [ecx + 0xa4], 0x846098
// 0062bab4  c781c400000088608400 mov dword ptr [ecx + 0xc4], 0x846088
// 0062babe  e97deaf2ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
