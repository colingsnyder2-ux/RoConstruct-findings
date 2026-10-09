// roc 2008-06 005d3ec0  unit: RBX::VSkin::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3ec0
//
// 005d3ec0  56                   push esi
// 005d3ec1  8bf1                 mov esi, ecx
// 005d3ec3  e81879f8ff           call 0x55b7e0
// 005d3ec8  c70654c38300         mov dword ptr [esi], 0x83c354
// 005d3ece  c7461044c38300       mov dword ptr [esi + 0x10], 0x83c344
// 005d3ed5  c746143cc38300       mov dword ptr [esi + 0x14], 0x83c33c
// 005d3edc  c7462034c38300       mov dword ptr [esi + 0x20], 0x83c334
// 005d3ee3  c7462424c38300       mov dword ptr [esi + 0x24], 0x83c324
// 005d3eea  c7464414c38300       mov dword ptr [esi + 0x44], 0x83c314
// 005d3ef1  c7466404c38300       mov dword ptr [esi + 0x64], 0x83c304
// 005d3ef8  c78684000000f4c28300 mov dword ptr [esi + 0x84], 0x83c2f4
// 005d3f02  c786a4000000e4c28300 mov dword ptr [esi + 0xa4], 0x83c2e4
// 005d3f0c  c786c4000000d4c28300 mov dword ptr [esi + 0xc4], 0x83c2d4
// 005d3f16  c78630010000ccc28300 mov dword ptr [esi + 0x130], 0x83c2cc
// 005d3f20  8bc6                 mov eax, esi
// 005d3f22  5e                   pop esi
// 005d3f23  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
