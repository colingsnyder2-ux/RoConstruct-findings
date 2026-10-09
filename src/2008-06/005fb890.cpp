// roc 2008-06 005fb890  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb890
//
// 005fb890  56                   push esi
// 005fb891  8bf1                 mov esi, ecx
// 005fb893  e8186a0400           call 0x6422b0
// 005fb898  c70624118400         mov dword ptr [esi], 0x841124
// 005fb89e  c7461018118400       mov dword ptr [esi + 0x10], 0x841118
// 005fb8a5  c7461410118400       mov dword ptr [esi + 0x14], 0x841110
// 005fb8ac  c7462008118400       mov dword ptr [esi + 0x20], 0x841108
// 005fb8b3  c74624f8108400       mov dword ptr [esi + 0x24], 0x8410f8
// 005fb8ba  c74644e8108400       mov dword ptr [esi + 0x44], 0x8410e8
// 005fb8c1  c74664d8108400       mov dword ptr [esi + 0x64], 0x8410d8
// 005fb8c8  c78684000000c8108400 mov dword ptr [esi + 0x84], 0x8410c8
// 005fb8d2  c786a4000000b8108400 mov dword ptr [esi + 0xa4], 0x8410b8
// 005fb8dc  c786c4000000a8108400 mov dword ptr [esi + 0xc4], 0x8410a8
// 005fb8e6  c78630010000a0108400 mov dword ptr [esi + 0x130], 0x8410a0
// 005fb8f0  8bc6                 mov eax, esi
// 005fb8f2  5e                   pop esi
// 005fb8f3  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
