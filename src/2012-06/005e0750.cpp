// roc 2012-06 005e0750  unit: RBX::BeveledBlockBuilder  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005e0750
//
// 005e0750  51                   push ecx
// 005e0751  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e0755  c6042400             mov byte ptr [esp], 0
// 005e0759  8b0424               mov eax, dword ptr [esp]
// 005e075c  50                   push eax
// 005e075d  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e0761  52                   push edx
// 005e0762  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e0766  51                   push ecx
// 005e0767  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e076b  50                   push eax
// 005e076c  51                   push ecx
// 005e076d  52                   push edx
// 005e076e  e8cdfeffff           call 0x5e0640
// 005e0773  83c41c               add esp, 0x1c
// 005e0776  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
