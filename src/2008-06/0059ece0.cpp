// roc 2008-06 0059ece0  unit: RBX::PartInstance  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059ece0
//
// 0059ece0  c70184328300         mov dword ptr [ecx], 0x833284
// 0059ece6  c7411074328300       mov dword ptr [ecx + 0x10], 0x833274
// 0059eced  c741146c328300       mov dword ptr [ecx + 0x14], 0x83326c
// 0059ecf4  c7412064328300       mov dword ptr [ecx + 0x20], 0x833264
// 0059ecfb  c7412454328300       mov dword ptr [ecx + 0x24], 0x833254
// 0059ed02  c7414444328300       mov dword ptr [ecx + 0x44], 0x833244
// 0059ed09  c7416434328300       mov dword ptr [ecx + 0x64], 0x833234
// 0059ed10  c7818400000024328300 mov dword ptr [ecx + 0x84], 0x833224
// 0059ed1a  c781a400000014328300 mov dword ptr [ecx + 0xa4], 0x833214
// 0059ed24  c781c400000004328300 mov dword ptr [ecx + 0xc4], 0x833204
// 0059ed2e  e90db8fbff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
