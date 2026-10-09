// roc 2008-06 00554350  unit: RBX::RenderBase::AggregateChunk  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554350
//
// 00554350  c701b4d38200         mov dword ptr [ecx], 0x82d3b4
// 00554356  c74110a8d38200       mov dword ptr [ecx + 0x10], 0x82d3a8
// 0055435d  c74114a0d38200       mov dword ptr [ecx + 0x14], 0x82d3a0
// 00554364  c7412098d38200       mov dword ptr [ecx + 0x20], 0x82d398
// 0055436b  c7412488d38200       mov dword ptr [ecx + 0x24], 0x82d388
// 00554372  c7414478d38200       mov dword ptr [ecx + 0x44], 0x82d378
// 00554379  c7416468d38200       mov dword ptr [ecx + 0x64], 0x82d368
// 00554380  c7818400000058d38200 mov dword ptr [ecx + 0x84], 0x82d358
// 0055438a  c781a400000048d38200 mov dword ptr [ecx + 0xa4], 0x82d348
// 00554394  c781c400000038d38200 mov dword ptr [ecx + 0xc4], 0x82d338
// 0055439e  e99d610000           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
