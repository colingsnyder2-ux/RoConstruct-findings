// from server: 100% by auto
// roc 2012-06 00514cf0  unit: Ogre::RbxMegaCluster  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00514cf0
//
// 00514cf0  51                   push ecx
// 00514cf1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00514cf5  c6042400             mov byte ptr [esp], 0
// 00514cf9  8b0424               mov eax, dword ptr [esp]
// 00514cfc  50                   push eax
// 00514cfd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00514d01  52                   push edx
// 00514d02  8b542410             mov edx, dword ptr [esp + 0x10]
// 00514d06  51                   push ecx
// 00514d07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00514d0b  50                   push eax
// 00514d0c  51                   push ecx
// 00514d0d  52                   push edx
// 00514d0e  e81da54300           call 0x94f230
// 00514d13  83c41c               add esp, 0x1c
// 00514d16  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
