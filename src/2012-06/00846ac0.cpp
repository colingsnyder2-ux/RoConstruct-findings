// roc 2012-06 00846ac0  unit: seg_00840000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00846ac0
//
// 00846ac0  6aff                 push -1
// 00846ac2  6851f6aa00           push 0xaaf651
// 00846ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00846acd  50                   push eax
// 00846ace  64892500000000       mov dword ptr fs:[0], esp
// 00846ad5  51                   push ecx
// 00846ad6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00846ada  89442414             mov dword ptr [esp + 0x14], eax
// 00846ade  890424               mov dword ptr [esp], eax
// 00846ae1  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00846ae9  85c0                 test eax, eax
// 00846aeb  7425                 je 0x846b12
// 00846aed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00846af1  c70000000000         mov dword ptr [eax], 0
// 00846af7  8b11                 mov edx, dword ptr [ecx]
// 00846af9  85d2                 test edx, edx
// 00846afb  7415                 je 0x846b12
// 00846afd  8910                 mov dword ptr [eax], edx
// 00846aff  8b11                 mov edx, dword ptr [ecx]
// 00846b01  83c008               add eax, 8
// 00846b04  6a00                 push 0
// 00846b06  50                   push eax
// 00846b07  8b02                 mov eax, dword ptr [edx]
// 00846b09  83c108               add ecx, 8
// 00846b0c  51                   push ecx
// 00846b0d  ffd0                 call eax
// 00846b0f  83c40c               add esp, 0xc
// 00846b12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00846b16  64890d00000000       mov dword ptr fs:[0], ecx
// 00846b1d  83c410               add esp, 0x10
// 00846b20  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Construct@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
