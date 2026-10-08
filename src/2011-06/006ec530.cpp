// from server: 100% by auto
// roc 2011-06 006ec530  unit: RBX::BaseThreadPool::UPoolData::XP6AXV?$shared_ptr::V?$bind_t::?$thread_data  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ec530
//
// 006ec530  51                   push ecx
// 006ec531  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ec535  c6042400             mov byte ptr [esp], 0
// 006ec539  8b0424               mov eax, dword ptr [esp]
// 006ec53c  50                   push eax
// 006ec53d  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ec541  52                   push edx
// 006ec542  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ec546  51                   push ecx
// 006ec547  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ec54b  50                   push eax
// 006ec54c  51                   push ecx
// 006ec54d  52                   push edx
// 006ec54e  e83df5ffff           call 0x6eba90
// 006ec553  83c41c               add esp, 0x1c
// 006ec556  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
