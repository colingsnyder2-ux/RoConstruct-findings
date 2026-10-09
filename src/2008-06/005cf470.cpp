// roc 2008-06 005cf470  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf470
//
// 005cf470  56                   push esi
// 005cf471  8bf1                 mov esi, ecx
// 005cf473  e8382e0700           call 0x6422b0
// 005cf478  c706cca98300         mov dword ptr [esi], 0x83a9cc
// 005cf47e  c74610bca98300       mov dword ptr [esi + 0x10], 0x83a9bc
// 005cf485  c74614b4a98300       mov dword ptr [esi + 0x14], 0x83a9b4
// 005cf48c  c74620aca98300       mov dword ptr [esi + 0x20], 0x83a9ac
// 005cf493  c746249ca98300       mov dword ptr [esi + 0x24], 0x83a99c
// 005cf49a  c746448ca98300       mov dword ptr [esi + 0x44], 0x83a98c
// 005cf4a1  c746647ca98300       mov dword ptr [esi + 0x64], 0x83a97c
// 005cf4a8  c786840000006ca98300 mov dword ptr [esi + 0x84], 0x83a96c
// 005cf4b2  c786a40000005ca98300 mov dword ptr [esi + 0xa4], 0x83a95c
// 005cf4bc  c786c40000004ca98300 mov dword ptr [esi + 0xc4], 0x83a94c
// 005cf4c6  c7863001000044a98300 mov dword ptr [esi + 0x130], 0x83a944
// 005cf4d0  8bc6                 mov eax, esi
// 005cf4d2  5e                   pop esi
// 005cf4d3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
