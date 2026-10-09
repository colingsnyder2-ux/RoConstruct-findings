// roc 2008-06 005cf280  unit: RBX::VStarterPackService::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf280
//
// 005cf280  c701dca88300         mov dword ptr [ecx], 0x83a8dc
// 005cf286  c74110cca88300       mov dword ptr [ecx + 0x10], 0x83a8cc
// 005cf28d  c74114c4a88300       mov dword ptr [ecx + 0x14], 0x83a8c4
// 005cf294  c74120bca88300       mov dword ptr [ecx + 0x20], 0x83a8bc
// 005cf29b  c74124aca88300       mov dword ptr [ecx + 0x24], 0x83a8ac
// 005cf2a2  c741449ca88300       mov dword ptr [ecx + 0x44], 0x83a89c
// 005cf2a9  c741648ca88300       mov dword ptr [ecx + 0x64], 0x83a88c
// 005cf2b0  c781840000007ca88300 mov dword ptr [ecx + 0x84], 0x83a87c
// 005cf2ba  c781a40000006ca88300 mov dword ptr [ecx + 0xa4], 0x83a86c
// 005cf2c4  c781c40000005ca88300 mov dword ptr [ecx + 0xc4], 0x83a85c
// 005cf2ce  c7813001000054a88300 mov dword ptr [ecx + 0x130], 0x83a854
// 005cf2d8  e96322e4ff           jmp 0x411540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
