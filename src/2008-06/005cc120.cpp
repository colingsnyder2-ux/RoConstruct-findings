// roc 2008-06 005cc120  unit: RBX::Camera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc120
//
// 005cc120  c701a4a38300         mov dword ptr [ecx], 0x83a3a4
// 005cc126  c7411094a38300       mov dword ptr [ecx + 0x10], 0x83a394
// 005cc12d  c741148ca38300       mov dword ptr [ecx + 0x14], 0x83a38c
// 005cc134  c7412084a38300       mov dword ptr [ecx + 0x20], 0x83a384
// 005cc13b  c7412474a38300       mov dword ptr [ecx + 0x24], 0x83a374
// 005cc142  c7414464a38300       mov dword ptr [ecx + 0x44], 0x83a364
// 005cc149  c7416454a38300       mov dword ptr [ecx + 0x64], 0x83a354
// 005cc150  c7818400000044a38300 mov dword ptr [ecx + 0x84], 0x83a344
// 005cc15a  c781a400000034a38300 mov dword ptr [ecx + 0xa4], 0x83a334
// 005cc164  c781c400000024a38300 mov dword ptr [ecx + 0xc4], 0x83a324
// 005cc16e  e9cde3f8ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
