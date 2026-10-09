// roc 2008-06 00635520  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635520
//
// 00635520  c7016c868400         mov dword ptr [ecx], 0x84866c
// 00635526  c741105c868400       mov dword ptr [ecx + 0x10], 0x84865c
// 0063552d  c7411454868400       mov dword ptr [ecx + 0x14], 0x848654
// 00635534  c741204c868400       mov dword ptr [ecx + 0x20], 0x84864c
// 0063553b  c741243c868400       mov dword ptr [ecx + 0x24], 0x84863c
// 00635542  c741442c868400       mov dword ptr [ecx + 0x44], 0x84862c
// 00635549  c741641c868400       mov dword ptr [ecx + 0x64], 0x84861c
// 00635550  c781840000000c868400 mov dword ptr [ecx + 0x84], 0x84860c
// 0063555a  c781a4000000fc858400 mov dword ptr [ecx + 0xa4], 0x8485fc
// 00635564  c781c4000000ec858400 mov dword ptr [ecx + 0xc4], 0x8485ec
// 0063556e  e9cd4ff2ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
