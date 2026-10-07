// roc 2012-06 00950fa0  unit: RBX::AdvRotateTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00950fa0
//
// 00950fa0  51                   push ecx
// 00950fa1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00950fa5  c6042400             mov byte ptr [esp], 0
// 00950fa9  8b0424               mov eax, dword ptr [esp]
// 00950fac  50                   push eax
// 00950fad  8b442414             mov eax, dword ptr [esp + 0x14]
// 00950fb1  52                   push edx
// 00950fb2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00950fb6  51                   push ecx
// 00950fb7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00950fbb  50                   push eax
// 00950fbc  51                   push ecx
// 00950fbd  52                   push edx
// 00950fbe  e85df5ffff           call 0x950520
// 00950fc3  83c41c               add esp, 0x1c
// 00950fc6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
