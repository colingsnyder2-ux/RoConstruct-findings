// roc 2012-06 007a8cc0  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a8cc0
//
// 007a8cc0  51                   push ecx
// 007a8cc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a8cc5  c6042400             mov byte ptr [esp], 0
// 007a8cc9  8b0424               mov eax, dword ptr [esp]
// 007a8ccc  50                   push eax
// 007a8ccd  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a8cd1  52                   push edx
// 007a8cd2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a8cd6  51                   push ecx
// 007a8cd7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a8cdb  50                   push eax
// 007a8cdc  51                   push ecx
// 007a8cdd  52                   push edx
// 007a8cde  e83df6ffff           call 0x7a8320
// 007a8ce3  83c41c               add esp, 0x1c
// 007a8ce6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
