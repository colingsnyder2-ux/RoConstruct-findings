// from server: 100% by auto
// roc 2007-08 005a7750  unit: RBX::VHumanoid::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a7750
//
// 005a7750  8b442408             mov eax, dword ptr [esp + 8]
// 005a7754  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a7758  50                   push eax
// 005a7759  e882f8ffff           call 0x5a6fe0
// 005a775e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$swap@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
