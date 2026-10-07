// roc 2012-06 00978540  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00978540
//
// 00978540  51                   push ecx
// 00978541  8b542410             mov edx, dword ptr [esp + 0x10]
// 00978545  c6042400             mov byte ptr [esp], 0
// 00978549  8b0424               mov eax, dword ptr [esp]
// 0097854c  50                   push eax
// 0097854d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00978551  52                   push edx
// 00978552  8b542410             mov edx, dword ptr [esp + 0x10]
// 00978556  51                   push ecx
// 00978557  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0097855b  50                   push eax
// 0097855c  51                   push ecx
// 0097855d  52                   push edx
// 0097855e  e81d03baff           call 0x518880
// 00978563  83c41c               add esp, 0x1c
// 00978566  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
