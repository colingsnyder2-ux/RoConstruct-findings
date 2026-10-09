// roc 2008-06 0040c4c0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c4c0
//
// 0040c4c0  c701e4c28000         mov dword ptr [ecx], 0x80c2e4
// 0040c4c6  c74110d4c28000       mov dword ptr [ecx + 0x10], 0x80c2d4
// 0040c4cd  c74114ccc28000       mov dword ptr [ecx + 0x14], 0x80c2cc
// 0040c4d4  c74120c4c28000       mov dword ptr [ecx + 0x20], 0x80c2c4
// 0040c4db  c74124b4c28000       mov dword ptr [ecx + 0x24], 0x80c2b4
// 0040c4e2  c74144a4c28000       mov dword ptr [ecx + 0x44], 0x80c2a4
// 0040c4e9  c7416494c28000       mov dword ptr [ecx + 0x64], 0x80c294
// 0040c4f0  c7818400000084c28000 mov dword ptr [ecx + 0x84], 0x80c284
// 0040c4fa  c781a400000074c28000 mov dword ptr [ecx + 0xa4], 0x80c274
// 0040c504  c781c400000064c28000 mov dword ptr [ecx + 0xc4], 0x80c264
// 0040c50e  e98df3ffff           jmp 0x40b8a0
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
