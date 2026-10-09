// roc 2008-06 004899e0  unit: G3D::GWindow  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004899e0
//
// 004899e0  c70144158200         mov dword ptr [ecx], 0x821544
// 004899e6  c7411038158200       mov dword ptr [ecx + 0x10], 0x821538
// 004899ed  c7411430158200       mov dword ptr [ecx + 0x14], 0x821530
// 004899f4  c7412028158200       mov dword ptr [ecx + 0x20], 0x821528
// 004899fb  c7412418158200       mov dword ptr [ecx + 0x24], 0x821518
// 00489a02  c7414408158200       mov dword ptr [ecx + 0x44], 0x821508
// 00489a09  c74164f8148200       mov dword ptr [ecx + 0x64], 0x8214f8
// 00489a10  c78184000000e8148200 mov dword ptr [ecx + 0x84], 0x8214e8
// 00489a1a  c781a4000000d8148200 mov dword ptr [ecx + 0xa4], 0x8214d8
// 00489a24  c781c4000000c8148200 mov dword ptr [ecx + 0xc4], 0x8214c8
// 00489a2e  e90d0b0d00           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
