// roc 2008-06 005eb020  unit: RBX::World  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eb020
//
// 005eb020  c70144fa8300         mov dword ptr [ecx], 0x83fa44
// 005eb026  c7411034fa8300       mov dword ptr [ecx + 0x10], 0x83fa34
// 005eb02d  c741142cfa8300       mov dword ptr [ecx + 0x14], 0x83fa2c
// 005eb034  c7412024fa8300       mov dword ptr [ecx + 0x20], 0x83fa24
// 005eb03b  c7412414fa8300       mov dword ptr [ecx + 0x24], 0x83fa14
// 005eb042  c7414404fa8300       mov dword ptr [ecx + 0x44], 0x83fa04
// 005eb049  c74164f4f98300       mov dword ptr [ecx + 0x64], 0x83f9f4
// 005eb050  c78184000000e4f98300 mov dword ptr [ecx + 0x84], 0x83f9e4
// 005eb05a  c781a4000000d4f98300 mov dword ptr [ecx + 0xa4], 0x83f9d4
// 005eb064  c781c4000000c4f98300 mov dword ptr [ecx + 0xc4], 0x83f9c4
// 005eb06e  e9cdf4f6ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
