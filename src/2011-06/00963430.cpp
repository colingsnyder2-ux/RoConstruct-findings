// from server: 100% by auto
// roc 2011-06 00963430  unit: Ogre::RbxArchiveFactory  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00963430
//
// 00963430  51                   push ecx
// 00963431  8b542410             mov edx, dword ptr [esp + 0x10]
// 00963435  c6042400             mov byte ptr [esp], 0
// 00963439  8b0424               mov eax, dword ptr [esp]
// 0096343c  50                   push eax
// 0096343d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00963441  52                   push edx
// 00963442  8b542410             mov edx, dword ptr [esp + 0x10]
// 00963446  51                   push ecx
// 00963447  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0096344b  50                   push eax
// 0096344c  51                   push ecx
// 0096344d  52                   push edx
// 0096344e  e85df4ffff           call 0x9628b0
// 00963453  83c41c               add esp, 0x1c
// 00963456  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
