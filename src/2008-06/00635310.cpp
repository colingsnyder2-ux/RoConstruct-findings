// roc 2008-06 00635310  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635310
//
// 00635310  56                   push esi
// 00635311  8bf1                 mov esi, ecx
// 00635313  e8c864f2ff           call 0x55b7e0
// 00635318  c7068c858400         mov dword ptr [esi], 0x84858c
// 0063531e  c746107c858400       mov dword ptr [esi + 0x10], 0x84857c
// 00635325  c7461474858400       mov dword ptr [esi + 0x14], 0x848574
// 0063532c  c746206c858400       mov dword ptr [esi + 0x20], 0x84856c
// 00635333  c746245c858400       mov dword ptr [esi + 0x24], 0x84855c
// 0063533a  c746444c858400       mov dword ptr [esi + 0x44], 0x84854c
// 00635341  c746643c858400       mov dword ptr [esi + 0x64], 0x84853c
// 00635348  c786840000002c858400 mov dword ptr [esi + 0x84], 0x84852c
// 00635352  c786a40000001c858400 mov dword ptr [esi + 0xa4], 0x84851c
// 0063535c  c786c40000000c858400 mov dword ptr [esi + 0xc4], 0x84850c
// 00635366  8bc6                 mov eax, esi
// 00635368  5e                   pop esi
// 00635369  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
