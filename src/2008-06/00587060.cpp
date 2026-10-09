// roc 2008-06 00587060  unit: RBX::LocalScript  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00587060
//
// 00587060  c70184168300         mov dword ptr [ecx], 0x831684
// 00587066  c7411074168300       mov dword ptr [ecx + 0x10], 0x831674
// 0058706d  c741146c168300       mov dword ptr [ecx + 0x14], 0x83166c
// 00587074  c7412064168300       mov dword ptr [ecx + 0x20], 0x831664
// 0058707b  c7412454168300       mov dword ptr [ecx + 0x24], 0x831654
// 00587082  c7414444168300       mov dword ptr [ecx + 0x44], 0x831644
// 00587089  c7416434168300       mov dword ptr [ecx + 0x64], 0x831634
// 00587090  c7818400000024168300 mov dword ptr [ecx + 0x84], 0x831624
// 0058709a  c781a400000014168300 mov dword ptr [ecx + 0xa4], 0x831614
// 005870a4  c781c400000004168300 mov dword ptr [ecx + 0xc4], 0x831604
// 005870ae  e98d34fdff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
