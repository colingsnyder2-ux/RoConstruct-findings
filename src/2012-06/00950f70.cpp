// from server: 100% by auto
// roc 2012-06 00950f70  unit: RBX::AdvRotateTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00950f70
//
// 00950f70  51                   push ecx
// 00950f71  8b542410             mov edx, dword ptr [esp + 0x10]
// 00950f75  c6042400             mov byte ptr [esp], 0
// 00950f79  8b0424               mov eax, dword ptr [esp]
// 00950f7c  50                   push eax
// 00950f7d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00950f81  52                   push edx
// 00950f82  8b542410             mov edx, dword ptr [esp + 0x10]
// 00950f86  51                   push ecx
// 00950f87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00950f8b  50                   push eax
// 00950f8c  51                   push ecx
// 00950f8d  52                   push edx
// 00950f8e  e8ddf4ffff           call 0x950470
// 00950f93  83c41c               add esp, 0x1c
// 00950f96  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
