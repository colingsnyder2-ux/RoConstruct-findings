// from server: 100% by auto
// roc 2012-06 004d09b0  unit: Ogre::GfxClustererPart  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004d09b0
//
// 004d09b0  51                   push ecx
// 004d09b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d09b5  c6042400             mov byte ptr [esp], 0
// 004d09b9  8b0424               mov eax, dword ptr [esp]
// 004d09bc  50                   push eax
// 004d09bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d09c1  52                   push edx
// 004d09c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d09c6  51                   push ecx
// 004d09c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d09cb  50                   push eax
// 004d09cc  51                   push ecx
// 004d09cd  52                   push edx
// 004d09ce  e86dd4ffff           call 0x4cde40
// 004d09d3  83c41c               add esp, 0x1c
// 004d09d6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
