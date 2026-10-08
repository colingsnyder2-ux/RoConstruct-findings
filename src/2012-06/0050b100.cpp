// from server: 100% by auto
// roc 2012-06 0050b100  unit: Ogre::RbxArchiveFactory  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050b100
//
// 0050b100  51                   push ecx
// 0050b101  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050b105  c6042400             mov byte ptr [esp], 0
// 0050b109  8b0424               mov eax, dword ptr [esp]
// 0050b10c  50                   push eax
// 0050b10d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050b111  52                   push edx
// 0050b112  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050b116  51                   push ecx
// 0050b117  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050b11b  50                   push eax
// 0050b11c  51                   push ecx
// 0050b11d  52                   push edx
// 0050b11e  e87df3ffff           call 0x50a4a0
// 0050b123  83c41c               add esp, 0x1c
// 0050b126  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
