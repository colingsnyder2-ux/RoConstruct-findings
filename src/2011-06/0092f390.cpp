// from server: 100% by auto
// roc 2011-06 0092f390  unit: Ogre::GfxClustererPart  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092f390
//
// 0092f390  51                   push ecx
// 0092f391  8b542410             mov edx, dword ptr [esp + 0x10]
// 0092f395  c6042400             mov byte ptr [esp], 0
// 0092f399  8b0424               mov eax, dword ptr [esp]
// 0092f39c  50                   push eax
// 0092f39d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0092f3a1  52                   push edx
// 0092f3a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0092f3a6  51                   push ecx
// 0092f3a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0092f3ab  50                   push eax
// 0092f3ac  51                   push ecx
// 0092f3ad  52                   push edx
// 0092f3ae  e83dd9ffff           call 0x92ccf0
// 0092f3b3  83c41c               add esp, 0x1c
// 0092f3b6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
