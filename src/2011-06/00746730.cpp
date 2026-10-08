// from server: 100% by auto
// roc 2011-06 00746730  unit: RBX::Animator  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00746730
//
// 00746730  51                   push ecx
// 00746731  8b542410             mov edx, dword ptr [esp + 0x10]
// 00746735  c6042400             mov byte ptr [esp], 0
// 00746739  8b0424               mov eax, dword ptr [esp]
// 0074673c  50                   push eax
// 0074673d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00746741  52                   push edx
// 00746742  8b542410             mov edx, dword ptr [esp + 0x10]
// 00746746  51                   push ecx
// 00746747  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074674b  50                   push eax
// 0074674c  51                   push ecx
// 0074674d  52                   push edx
// 0074674e  e84df9ffff           call 0x7460a0
// 00746753  83c41c               add esp, 0x1c
// 00746756  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
