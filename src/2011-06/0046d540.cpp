// from server: 100% by auto
// roc 2011-06 0046d540  unit: CRobloxControlColorSelector  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d540
//
// 0046d540  51                   push ecx
// 0046d541  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046d545  c6042400             mov byte ptr [esp], 0
// 0046d549  8b0424               mov eax, dword ptr [esp]
// 0046d54c  50                   push eax
// 0046d54d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046d551  52                   push edx
// 0046d552  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046d556  51                   push ecx
// 0046d557  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046d55b  50                   push eax
// 0046d55c  51                   push ecx
// 0046d55d  52                   push edx
// 0046d55e  e82dfeffff           call 0x46d390
// 0046d563  83c41c               add esp, 0x1c
// 0046d566  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
