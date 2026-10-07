// roc 2012-06 0041c270  unit: RBX::Reflection::$$CBUTuple::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041c270
//
// 0041c270  51                   push ecx
// 0041c271  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041c275  c6042400             mov byte ptr [esp], 0
// 0041c279  8b0424               mov eax, dword ptr [esp]
// 0041c27c  50                   push eax
// 0041c27d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0041c281  52                   push edx
// 0041c282  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041c286  51                   push ecx
// 0041c287  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0041c28b  50                   push eax
// 0041c28c  51                   push ecx
// 0041c28d  52                   push edx
// 0041c28e  e8bdf6ffff           call 0x41b950
// 0041c293  83c41c               add esp, 0x1c
// 0041c296  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
