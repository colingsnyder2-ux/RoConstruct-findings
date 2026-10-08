// from server: 100% by auto
// roc 2011-06 007747e0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007747e0
//
// 007747e0  6aff                 push -1
// 007747e2  6881669e00           push 0x9e6681
// 007747e7  64a100000000         mov eax, dword ptr fs:[0]
// 007747ed  50                   push eax
// 007747ee  64892500000000       mov dword ptr fs:[0], esp
// 007747f5  51                   push ecx
// 007747f6  8b442414             mov eax, dword ptr [esp + 0x14]
// 007747fa  89442414             mov dword ptr [esp + 0x14], eax
// 007747fe  890424               mov dword ptr [esp], eax
// 00774801  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00774809  85c0                 test eax, eax
// 0077480b  7425                 je 0x774832
// 0077480d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00774811  c70000000000         mov dword ptr [eax], 0
// 00774817  8b11                 mov edx, dword ptr [ecx]
// 00774819  85d2                 test edx, edx
// 0077481b  7415                 je 0x774832
// 0077481d  8910                 mov dword ptr [eax], edx
// 0077481f  8b11                 mov edx, dword ptr [ecx]
// 00774821  83c008               add eax, 8
// 00774824  6a00                 push 0
// 00774826  50                   push eax
// 00774827  8b02                 mov eax, dword ptr [edx]
// 00774829  83c108               add ecx, 8
// 0077482c  51                   push ecx
// 0077482d  ffd0                 call eax
// 0077482f  83c40c               add esp, 0xc
// 00774832  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00774836  64890d00000000       mov dword ptr fs:[0], ecx
// 0077483d  83c410               add esp, 0x10
// 00774840  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Construct@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
