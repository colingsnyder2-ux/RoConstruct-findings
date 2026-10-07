// roc 2008-06 005dab40  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dab40
//
// 005dab40  8b442408             mov eax, dword ptr [esp + 8]
// 005dab44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005dab48  50                   push eax
// 005dab49  e8d2f8ffff           call 0x5da420
// 005dab4e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$swap@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
