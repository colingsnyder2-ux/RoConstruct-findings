// from server: 100% by auto
// roc 2010-06 006aa830  unit: boost::Vthread::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006aa830
//
// 006aa830  6aff                 push -1
// 006aa832  6811a69a00           push 0x9aa611
// 006aa837  64a100000000         mov eax, dword ptr fs:[0]
// 006aa83d  50                   push eax
// 006aa83e  64892500000000       mov dword ptr fs:[0], esp
// 006aa845  51                   push ecx
// 006aa846  8b442414             mov eax, dword ptr [esp + 0x14]
// 006aa84a  89442414             mov dword ptr [esp + 0x14], eax
// 006aa84e  890424               mov dword ptr [esp], eax
// 006aa851  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006aa859  85c0                 test eax, eax
// 006aa85b  7425                 je 0x6aa882
// 006aa85d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006aa861  c70000000000         mov dword ptr [eax], 0
// 006aa867  8b11                 mov edx, dword ptr [ecx]
// 006aa869  85d2                 test edx, edx
// 006aa86b  7415                 je 0x6aa882
// 006aa86d  8910                 mov dword ptr [eax], edx
// 006aa86f  8b11                 mov edx, dword ptr [ecx]
// 006aa871  83c008               add eax, 8
// 006aa874  6a00                 push 0
// 006aa876  50                   push eax
// 006aa877  8b02                 mov eax, dword ptr [edx]
// 006aa879  83c108               add ecx, 8
// 006aa87c  51                   push ecx
// 006aa87d  ffd0                 call eax
// 006aa87f  83c40c               add esp, 0xc
// 006aa882  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006aa886  64890d00000000       mov dword ptr fs:[0], ecx
// 006aa88d  83c410               add esp, 0x10
// 006aa890  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Construct@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
