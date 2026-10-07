// roc 2012-06 0050ad40  unit: Ogre::RbxArchiveFactory  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050ad40
//
// 0050ad40  51                   push ecx
// 0050ad41  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050ad45  c6042400             mov byte ptr [esp], 0
// 0050ad49  8b0424               mov eax, dword ptr [esp]
// 0050ad4c  50                   push eax
// 0050ad4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050ad51  52                   push edx
// 0050ad52  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050ad56  51                   push ecx
// 0050ad57  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050ad5b  50                   push eax
// 0050ad5c  51                   push ecx
// 0050ad5d  52                   push edx
// 0050ad5e  e8edfcffff           call 0x50aa50
// 0050ad63  83c41c               add esp, 0x1c
// 0050ad66  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
