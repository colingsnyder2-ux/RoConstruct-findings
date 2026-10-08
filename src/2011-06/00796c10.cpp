// from server: 100% by auto
// roc 2011-06 00796c10  unit: RBX::VHttp::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00796c10
//
// 00796c10  51                   push ecx
// 00796c11  8b542410             mov edx, dword ptr [esp + 0x10]
// 00796c15  c6042400             mov byte ptr [esp], 0
// 00796c19  8b0424               mov eax, dword ptr [esp]
// 00796c1c  50                   push eax
// 00796c1d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00796c21  52                   push edx
// 00796c22  8b542410             mov edx, dword ptr [esp + 0x10]
// 00796c26  51                   push ecx
// 00796c27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00796c2b  50                   push eax
// 00796c2c  51                   push ecx
// 00796c2d  52                   push edx
// 00796c2e  e8cdf1ffff           call 0x795e00
// 00796c33  83c41c               add esp, 0x1c
// 00796c36  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
