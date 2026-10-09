// roc 2008-06 00586b90  unit: RBX::Script  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586b90
//
// 00586b90  56                   push esi
// 00586b91  8bf1                 mov esi, ecx
// 00586b93  e8c8fdffff           call 0x586960
// 00586b98  c7069c128300         mov dword ptr [esi], 0x83129c
// 00586b9e  c7461090128300       mov dword ptr [esi + 0x10], 0x831290
// 00586ba5  c7461488128300       mov dword ptr [esi + 0x14], 0x831288
// 00586bac  c7462080128300       mov dword ptr [esi + 0x20], 0x831280
// 00586bb3  c7462470128300       mov dword ptr [esi + 0x24], 0x831270
// 00586bba  c7464460128300       mov dword ptr [esi + 0x44], 0x831260
// 00586bc1  c7466450128300       mov dword ptr [esi + 0x64], 0x831250
// 00586bc8  c7868400000040128300 mov dword ptr [esi + 0x84], 0x831240
// 00586bd2  c786a400000030128300 mov dword ptr [esi + 0xa4], 0x831230
// 00586bdc  c786c400000020128300 mov dword ptr [esi + 0xc4], 0x831220
// 00586be6  8bc6                 mov eax, esi
// 00586be8  5e                   pop esi
// 00586be9  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
