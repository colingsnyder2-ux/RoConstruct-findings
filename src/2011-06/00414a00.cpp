// from server: 100% by auto
// roc 2011-06 00414a00  unit: boost::Vbad_weak_ptr::U?$error_info_injector::?$clone_impl  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00414a00
//
// 00414a00  51                   push ecx
// 00414a01  8b542410             mov edx, dword ptr [esp + 0x10]
// 00414a05  c6042400             mov byte ptr [esp], 0
// 00414a09  8b0424               mov eax, dword ptr [esp]
// 00414a0c  50                   push eax
// 00414a0d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00414a11  52                   push edx
// 00414a12  8b542410             mov edx, dword ptr [esp + 0x10]
// 00414a16  51                   push ecx
// 00414a17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00414a1b  50                   push eax
// 00414a1c  51                   push ecx
// 00414a1d  52                   push edx
// 00414a1e  e8cdb23e00           call 0x7ffcf0
// 00414a23  83c41c               add esp, 0x1c
// 00414a26  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
