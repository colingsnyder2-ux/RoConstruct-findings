// from server: 100% by auto
// roc 2011-06 0093ee90  unit: Ogre::RbxMaterialAdapter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0093ee90
//
// 0093ee90  51                   push ecx
// 0093ee91  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093ee95  c6042400             mov byte ptr [esp], 0
// 0093ee99  8b0424               mov eax, dword ptr [esp]
// 0093ee9c  50                   push eax
// 0093ee9d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0093eea1  52                   push edx
// 0093eea2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093eea6  51                   push ecx
// 0093eea7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0093eeab  50                   push eax
// 0093eeac  51                   push ecx
// 0093eead  52                   push edx
// 0093eeae  e82d9dffff           call 0x938be0
// 0093eeb3  83c41c               add esp, 0x1c
// 0093eeb6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
