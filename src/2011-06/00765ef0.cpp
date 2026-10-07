// roc 2011-06 00765ef0  unit: RBX::Lua::LuaArguments  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00765ef0
//
// 00765ef0  51                   push ecx
// 00765ef1  56                   push esi
// 00765ef2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00765ef6  33c0                 xor eax, eax
// 00765ef8  89442404             mov dword ptr [esp + 4], eax
// 00765efc  8b542410             mov edx, dword ptr [esp + 0x10]
// 00765f00  50                   push eax
// 00765f01  88442408             mov byte ptr [esp + 8], al
// 00765f05  8d442414             lea eax, [esp + 0x14]
// 00765f09  50                   push eax
// 00765f0a  51                   push ecx
// 00765f0b  8954241c             mov dword ptr [esp + 0x1c], edx
// 00765f0f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00765f13  52                   push edx
// 00765f14  56                   push esi
// 00765f15  83c104               add ecx, 4
// 00765f18  e873f5ffff           call 0x765490
// 00765f1d  8bc6                 mov eax, esi
// 00765f1f  5e                   pop esi
// 00765f20  59                   pop ecx
// 00765f21  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$?RV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$bind_t@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@V?$mf1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@Vcmdline@detail@program_options@boost@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@_mfi@boost@@V?$list2@V?$value@PAVcmdline@detail@program_options@boost@@@_bi@boost@@V?$arg@$00@3@@_bi@5@@_bi@boost@@QAE?AV?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
