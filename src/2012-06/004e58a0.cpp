// from server: 100% by auto
// roc 2012-06 004e58a0  unit: Ogre::RbxMaterialAdapter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e58a0
//
// 004e58a0  51                   push ecx
// 004e58a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e58a5  c6042400             mov byte ptr [esp], 0
// 004e58a9  8b0424               mov eax, dword ptr [esp]
// 004e58ac  50                   push eax
// 004e58ad  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e58b1  52                   push edx
// 004e58b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e58b6  51                   push ecx
// 004e58b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e58bb  50                   push eax
// 004e58bc  51                   push ecx
// 004e58bd  52                   push edx
// 004e58be  e82df7ffff           call 0x4e4ff0
// 004e58c3  83c41c               add esp, 0x1c
// 004e58c6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
