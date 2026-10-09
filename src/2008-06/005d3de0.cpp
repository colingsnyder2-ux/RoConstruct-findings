// roc 2008-06 005d3de0  unit: RBX::VSkin::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3de0
//
// 005d3de0  56                   push esi
// 005d3de1  8bf1                 mov esi, ecx
// 005d3de3  e8f879f8ff           call 0x55b7e0
// 005d3de8  c70684c28300         mov dword ptr [esi], 0x83c284
// 005d3dee  c7461074c28300       mov dword ptr [esi + 0x10], 0x83c274
// 005d3df5  c746146cc28300       mov dword ptr [esi + 0x14], 0x83c26c
// 005d3dfc  c7462064c28300       mov dword ptr [esi + 0x20], 0x83c264
// 005d3e03  c7462454c28300       mov dword ptr [esi + 0x24], 0x83c254
// 005d3e0a  c7464444c28300       mov dword ptr [esi + 0x44], 0x83c244
// 005d3e11  c7466434c28300       mov dword ptr [esi + 0x64], 0x83c234
// 005d3e18  c7868400000024c28300 mov dword ptr [esi + 0x84], 0x83c224
// 005d3e22  c786a400000014c28300 mov dword ptr [esi + 0xa4], 0x83c214
// 005d3e2c  c786c400000004c28300 mov dword ptr [esi + 0xc4], 0x83c204
// 005d3e36  c78630010000fcc18300 mov dword ptr [esi + 0x130], 0x83c1fc
// 005d3e40  8bc6                 mov eax, esi
// 005d3e42  5e                   pop esi
// 005d3e43  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
