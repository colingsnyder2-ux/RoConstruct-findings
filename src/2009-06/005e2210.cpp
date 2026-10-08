// from server: 100% by auto
// roc 2009-06 005e2210  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e2210
//
// 005e2210  6aff                 push -1
// 005e2212  6851ed8400           push 0x84ed51
// 005e2217  64a100000000         mov eax, dword ptr fs:[0]
// 005e221d  50                   push eax
// 005e221e  64892500000000       mov dword ptr fs:[0], esp
// 005e2225  51                   push ecx
// 005e2226  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e222a  89442414             mov dword ptr [esp + 0x14], eax
// 005e222e  890424               mov dword ptr [esp], eax
// 005e2231  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e2239  85c0                 test eax, eax
// 005e223b  7425                 je 0x5e2262
// 005e223d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e2241  c70000000000         mov dword ptr [eax], 0
// 005e2247  8b11                 mov edx, dword ptr [ecx]
// 005e2249  85d2                 test edx, edx
// 005e224b  7415                 je 0x5e2262
// 005e224d  8910                 mov dword ptr [eax], edx
// 005e224f  8b11                 mov edx, dword ptr [ecx]
// 005e2251  83c008               add eax, 8
// 005e2254  6a00                 push 0
// 005e2256  50                   push eax
// 005e2257  8b02                 mov eax, dword ptr [edx]
// 005e2259  83c108               add ecx, 8
// 005e225c  51                   push ecx
// 005e225d  ffd0                 call eax
// 005e225f  83c40c               add esp, 0xc
// 005e2262  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e2266  64890d00000000       mov dword ptr fs:[0], ecx
// 005e226d  83c410               add esp, 0x10
// 005e2270  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Construct@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
