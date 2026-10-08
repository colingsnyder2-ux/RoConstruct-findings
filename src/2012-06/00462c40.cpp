// from server: 100% by auto
// roc 2012-06 00462c40  unit: RBX::MergeBinder  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462c40
//
// 00462c40  51                   push ecx
// 00462c41  8b542410             mov edx, dword ptr [esp + 0x10]
// 00462c45  c6042400             mov byte ptr [esp], 0
// 00462c49  8b0424               mov eax, dword ptr [esp]
// 00462c4c  50                   push eax
// 00462c4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00462c51  52                   push edx
// 00462c52  8b542410             mov edx, dword ptr [esp + 0x10]
// 00462c56  51                   push ecx
// 00462c57  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00462c5b  50                   push eax
// 00462c5c  51                   push ecx
// 00462c5d  52                   push edx
// 00462c5e  e81dffffff           call 0x462b80
// 00462c63  83c41c               add esp, 0x1c
// 00462c66  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
