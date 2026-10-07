// roc 2012-06 00864ce0  unit: RBX::BaseThreadPool::UPoolData::XP6AXV?$shared_ptr::V?$bind_t::?$thread_data  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00864ce0
//
// 00864ce0  51                   push ecx
// 00864ce1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00864ce5  c6042400             mov byte ptr [esp], 0
// 00864ce9  8b0424               mov eax, dword ptr [esp]
// 00864cec  50                   push eax
// 00864ced  8b442414             mov eax, dword ptr [esp + 0x14]
// 00864cf1  52                   push edx
// 00864cf2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00864cf6  51                   push ecx
// 00864cf7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00864cfb  50                   push eax
// 00864cfc  51                   push ecx
// 00864cfd  52                   push edx
// 00864cfe  e87df4ffff           call 0x864180
// 00864d03  83c41c               add esp, 0x1c
// 00864d06  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
