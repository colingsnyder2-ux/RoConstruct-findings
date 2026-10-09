// roc 2008-06 0048fb80  unit: RBX::VClothing::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fb80
//
// 0048fb80  c701a4198200         mov dword ptr [ecx], 0x8219a4
// 0048fb86  c7411094198200       mov dword ptr [ecx + 0x10], 0x821994
// 0048fb8d  c741148c198200       mov dword ptr [ecx + 0x14], 0x82198c
// 0048fb94  c7412084198200       mov dword ptr [ecx + 0x20], 0x821984
// 0048fb9b  c7412474198200       mov dword ptr [ecx + 0x24], 0x821974
// 0048fba2  c7414464198200       mov dword ptr [ecx + 0x44], 0x821964
// 0048fba9  c7416454198200       mov dword ptr [ecx + 0x64], 0x821954
// 0048fbb0  c7818400000044198200 mov dword ptr [ecx + 0x84], 0x821944
// 0048fbba  c781a400000034198200 mov dword ptr [ecx + 0xa4], 0x821934
// 0048fbc4  c781c400000024198200 mov dword ptr [ecx + 0xc4], 0x821924
// 0048fbce  c781300100001c198200 mov dword ptr [ecx + 0x130], 0x82191c
// 0048fbd8  e973feffff           jmp 0x48fa50
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
