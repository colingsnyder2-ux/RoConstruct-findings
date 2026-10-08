// roc 2009-12 0072b8c0  unit: RBX::BaseThreadPool::PoolData  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072b8c0
//
// 0072b8c0  6aff                 push -1
// 0072b8c2  6891939200           push 0x929391
// 0072b8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0072b8cd  50                   push eax
// 0072b8ce  64892500000000       mov dword ptr fs:[0], esp
// 0072b8d5  51                   push ecx
// 0072b8d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072b8da  89442414             mov dword ptr [esp + 0x14], eax
// 0072b8de  890424               mov dword ptr [esp], eax
// 0072b8e1  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0072b8e9  85c0                 test eax, eax
// 0072b8eb  7425                 je 0x72b912
// 0072b8ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072b8f1  c70000000000         mov dword ptr [eax], 0
// 0072b8f7  8b11                 mov edx, dword ptr [ecx]
// 0072b8f9  85d2                 test edx, edx
// 0072b8fb  7415                 je 0x72b912
// 0072b8fd  8910                 mov dword ptr [eax], edx
// 0072b8ff  8b11                 mov edx, dword ptr [ecx]
// 0072b901  83c008               add eax, 8
// 0072b904  6a00                 push 0
// 0072b906  50                   push eax
// 0072b907  8b02                 mov eax, dword ptr [edx]
// 0072b909  83c108               add ecx, 8
// 0072b90c  51                   push ecx
// 0072b90d  ffd0                 call eax
// 0072b90f  83c40c               add esp, 0xc
// 0072b912  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0072b916  64890d00000000       mov dword ptr fs:[0], ecx
// 0072b91d  83c410               add esp, 0x10
// 0072b920  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Construct@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
