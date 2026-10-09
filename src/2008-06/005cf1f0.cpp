// roc 2008-06 005cf1f0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf1f0
//
// 005cf1f0  c701eca78300         mov dword ptr [ecx], 0x83a7ec
// 005cf1f6  c74110dca78300       mov dword ptr [ecx + 0x10], 0x83a7dc
// 005cf1fd  c74114d4a78300       mov dword ptr [ecx + 0x14], 0x83a7d4
// 005cf204  c74120cca78300       mov dword ptr [ecx + 0x20], 0x83a7cc
// 005cf20b  c74124bca78300       mov dword ptr [ecx + 0x24], 0x83a7bc
// 005cf212  c74144aca78300       mov dword ptr [ecx + 0x44], 0x83a7ac
// 005cf219  c741649ca78300       mov dword ptr [ecx + 0x64], 0x83a79c
// 005cf220  c781840000008ca78300 mov dword ptr [ecx + 0x84], 0x83a78c
// 005cf22a  c781a40000007ca78300 mov dword ptr [ecx + 0xa4], 0x83a77c
// 005cf234  c781c40000006ca78300 mov dword ptr [ecx + 0xc4], 0x83a76c
// 005cf23e  c7813001000064a78300 mov dword ptr [ecx + 0x130], 0x83a764
// 005cf248  e9f322e4ff           jmp 0x411540
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??1?$FactoryProduct@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
