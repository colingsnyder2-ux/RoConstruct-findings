// roc 2012-06 00623450  unit: RBX::WedgeBuilder  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00623450
//
// 00623450  51                   push ecx
// 00623451  8b542410             mov edx, dword ptr [esp + 0x10]
// 00623455  c6042400             mov byte ptr [esp], 0
// 00623459  8b0424               mov eax, dword ptr [esp]
// 0062345c  50                   push eax
// 0062345d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00623461  52                   push edx
// 00623462  8b542410             mov edx, dword ptr [esp + 0x10]
// 00623466  51                   push ecx
// 00623467  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062346b  50                   push eax
// 0062346c  51                   push ecx
// 0062346d  52                   push edx
// 0062346e  e82dfdffff           call 0x6231a0
// 00623473  83c41c               add esp, 0x1c
// 00623476  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
