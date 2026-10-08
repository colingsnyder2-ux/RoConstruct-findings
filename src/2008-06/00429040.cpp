// from server: 100% by auto
// roc 2008-06 00429040  unit: MainLogManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00429040
//
// 00429040  6aff                 push -1
// 00429042  6811e87c00           push 0x7ce811
// 00429047  64a100000000         mov eax, dword ptr fs:[0]
// 0042904d  50                   push eax
// 0042904e  64892500000000       mov dword ptr fs:[0], esp
// 00429055  51                   push ecx
// 00429056  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042905a  89442414             mov dword ptr [esp + 0x14], eax
// 0042905e  890424               mov dword ptr [esp], eax
// 00429061  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00429069  85c0                 test eax, eax
// 0042906b  7425                 je 0x429092
// 0042906d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00429071  c70000000000         mov dword ptr [eax], 0
// 00429077  8b11                 mov edx, dword ptr [ecx]
// 00429079  85d2                 test edx, edx
// 0042907b  7415                 je 0x429092
// 0042907d  8910                 mov dword ptr [eax], edx
// 0042907f  8b11                 mov edx, dword ptr [ecx]
// 00429081  83c008               add eax, 8
// 00429084  6a00                 push 0
// 00429086  50                   push eax
// 00429087  8b02                 mov eax, dword ptr [edx]
// 00429089  83c108               add ecx, 8
// 0042908c  51                   push ecx
// 0042908d  ffd0                 call eax
// 0042908f  83c40c               add esp, 0xc
// 00429092  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00429096  64890d00000000       mov dword ptr fs:[0], ecx
// 0042909d  83c410               add esp, 0x10
// 004290a0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Construct@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
