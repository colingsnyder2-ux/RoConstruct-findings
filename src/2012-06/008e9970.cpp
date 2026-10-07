// roc 2012-06 008e9970  unit: RBX::FloorWire  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e9970
//
// 008e9970  51                   push ecx
// 008e9971  56                   push esi
// 008e9972  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e9976  33c0                 xor eax, eax
// 008e9978  89442404             mov dword ptr [esp + 4], eax
// 008e997c  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e9980  50                   push eax
// 008e9981  88442408             mov byte ptr [esp + 8], al
// 008e9985  8d442414             lea eax, [esp + 0x14]
// 008e9989  50                   push eax
// 008e998a  51                   push ecx
// 008e998b  8954241c             mov dword ptr [esp + 0x1c], edx
// 008e998f  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e9993  52                   push edx
// 008e9994  56                   push esi
// 008e9995  83c104               add ecx, 4
// 008e9998  e8d3feffff           call 0x8e9870
// 008e999d  8bc6                 mov eax, esi
// 008e999f  5e                   pop esi
// 008e99a0  59                   pop ecx
// 008e99a1  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$?RV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$bind_t@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@V?$mf1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@Vcmdline@detail@program_options@boost@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@_mfi@boost@@V?$list2@V?$value@PAVcmdline@detail@program_options@boost@@@_bi@boost@@V?$arg@$00@3@@_bi@5@@_bi@boost@@QAE?AV?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
