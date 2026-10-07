// roc 2012-06 00722120  unit: RBX::$$A6AXABVHeartbeat::?$signal::Vslot::?$callable  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00722120
//
// 00722120  51                   push ecx
// 00722121  8b542410             mov edx, dword ptr [esp + 0x10]
// 00722125  c6042400             mov byte ptr [esp], 0
// 00722129  8b0424               mov eax, dword ptr [esp]
// 0072212c  50                   push eax
// 0072212d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00722131  52                   push edx
// 00722132  8b542410             mov edx, dword ptr [esp + 0x10]
// 00722136  51                   push ecx
// 00722137  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072213b  50                   push eax
// 0072213c  51                   push ecx
// 0072213d  52                   push edx
// 0072213e  e87deeffff           call 0x720fc0
// 00722143  83c41c               add esp, 0x1c
// 00722146  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
