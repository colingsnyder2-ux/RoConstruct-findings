// roc 2012-06 007a7960  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a7960
//
// 007a7960  51                   push ecx
// 007a7961  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a7965  c6042400             mov byte ptr [esp], 0
// 007a7969  8b0424               mov eax, dword ptr [esp]
// 007a796c  50                   push eax
// 007a796d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a7971  52                   push edx
// 007a7972  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a7976  51                   push ecx
// 007a7977  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a797b  50                   push eax
// 007a797c  51                   push ecx
// 007a797d  52                   push edx
// 007a797e  e86dfbffff           call 0x7a74f0
// 007a7983  83c41c               add esp, 0x1c
// 007a7986  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
