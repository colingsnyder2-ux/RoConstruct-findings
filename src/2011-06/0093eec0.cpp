// roc 2011-06 0093eec0  unit: Ogre::RbxMaterialAdapter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0093eec0
//
// 0093eec0  51                   push ecx
// 0093eec1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093eec5  c6042400             mov byte ptr [esp], 0
// 0093eec9  8b0424               mov eax, dword ptr [esp]
// 0093eecc  50                   push eax
// 0093eecd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0093eed1  52                   push edx
// 0093eed2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093eed6  51                   push ecx
// 0093eed7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0093eedb  50                   push eax
// 0093eedc  51                   push ecx
// 0093eedd  52                   push edx
// 0093eede  e8fdf6ffff           call 0x93e5e0
// 0093eee3  83c41c               add esp, 0x1c
// 0093eee6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
