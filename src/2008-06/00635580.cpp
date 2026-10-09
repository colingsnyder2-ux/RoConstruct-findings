// roc 2008-06 00635580  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635580
//
// 00635580  56                   push esi
// 00635581  8bf1                 mov esi, ecx
// 00635583  e85862f2ff           call 0x55b7e0
// 00635588  c7066c868400         mov dword ptr [esi], 0x84866c
// 0063558e  c746105c868400       mov dword ptr [esi + 0x10], 0x84865c
// 00635595  c7461454868400       mov dword ptr [esi + 0x14], 0x848654
// 0063559c  c746204c868400       mov dword ptr [esi + 0x20], 0x84864c
// 006355a3  c746243c868400       mov dword ptr [esi + 0x24], 0x84863c
// 006355aa  c746442c868400       mov dword ptr [esi + 0x44], 0x84862c
// 006355b1  c746641c868400       mov dword ptr [esi + 0x64], 0x84861c
// 006355b8  c786840000000c868400 mov dword ptr [esi + 0x84], 0x84860c
// 006355c2  c786a4000000fc858400 mov dword ptr [esi + 0xa4], 0x8485fc
// 006355cc  c786c4000000ec858400 mov dword ptr [esi + 0xc4], 0x8485ec
// 006355d6  8bc6                 mov eax, esi
// 006355d8  5e                   pop esi
// 006355d9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
