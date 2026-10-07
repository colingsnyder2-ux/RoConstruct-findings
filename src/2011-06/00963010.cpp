// roc 2011-06 00963010  unit: Ogre::RbxArchiveFactory  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00963010
//
// 00963010  51                   push ecx
// 00963011  8b542410             mov edx, dword ptr [esp + 0x10]
// 00963015  c6042400             mov byte ptr [esp], 0
// 00963019  8b0424               mov eax, dword ptr [esp]
// 0096301c  50                   push eax
// 0096301d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00963021  52                   push edx
// 00963022  8b542410             mov edx, dword ptr [esp + 0x10]
// 00963026  51                   push ecx
// 00963027  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0096302b  50                   push eax
// 0096302c  51                   push ecx
// 0096302d  52                   push edx
// 0096302e  e8bdf7ffff           call 0x9627f0
// 00963033  83c41c               add esp, 0x1c
// 00963036  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
