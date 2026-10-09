// roc 2008-06 00586eb0  unit: RBX::LocalScript  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586eb0
//
// 00586eb0  c70194158300         mov dword ptr [ecx], 0x831594
// 00586eb6  c7411088158300       mov dword ptr [ecx + 0x10], 0x831588
// 00586ebd  c7411480158300       mov dword ptr [ecx + 0x14], 0x831580
// 00586ec4  c7412078158300       mov dword ptr [ecx + 0x20], 0x831578
// 00586ecb  c7412468158300       mov dword ptr [ecx + 0x24], 0x831568
// 00586ed2  c7414458158300       mov dword ptr [ecx + 0x44], 0x831558
// 00586ed9  c7416448158300       mov dword ptr [ecx + 0x64], 0x831548
// 00586ee0  c7818400000038158300 mov dword ptr [ecx + 0x84], 0x831538
// 00586eea  c781a400000028158300 mov dword ptr [ecx + 0xa4], 0x831528
// 00586ef4  c781c400000018158300 mov dword ptr [ecx + 0xc4], 0x831518
// 00586efe  e99df0ffff           jmp 0x585fa0
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
