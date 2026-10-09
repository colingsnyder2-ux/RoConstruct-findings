// roc 2008-06 0048fac0  unit: RBX::VClothing::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fac0
//
// 0048fac0  56                   push esi
// 0048fac1  8bf1                 mov esi, ecx
// 0048fac3  e8385c1400           call 0x5d5700
// 0048fac8  c706a4198200         mov dword ptr [esi], 0x8219a4
// 0048face  c7461094198200       mov dword ptr [esi + 0x10], 0x821994
// 0048fad5  c746148c198200       mov dword ptr [esi + 0x14], 0x82198c
// 0048fadc  c7462084198200       mov dword ptr [esi + 0x20], 0x821984
// 0048fae3  c7462474198200       mov dword ptr [esi + 0x24], 0x821974
// 0048faea  c7464464198200       mov dword ptr [esi + 0x44], 0x821964
// 0048faf1  c7466454198200       mov dword ptr [esi + 0x64], 0x821954
// 0048faf8  c7868400000044198200 mov dword ptr [esi + 0x84], 0x821944
// 0048fb02  c786a400000034198200 mov dword ptr [esi + 0xa4], 0x821934
// 0048fb0c  c786c400000024198200 mov dword ptr [esi + 0xc4], 0x821924
// 0048fb16  c786300100001c198200 mov dword ptr [esi + 0x130], 0x82191c
// 0048fb20  8bc6                 mov eax, esi
// 0048fb22  5e                   pop esi
// 0048fb23  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
