// roc 2009-06 005dbb90  unit: RBX::VInstance::?$NonFactoryProduct  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dbb90
//
// 005dbb90  56                   push esi
// 005dbb91  8b742408             mov esi, dword ptr [esp + 8]
// 005dbb95  57                   push edi
// 005dbb96  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005dbb9a  3bf7                 cmp esi, edi
// 005dbb9c  7415                 je 0x5dbbb3
// 005dbb9e  53                   push ebx
// 005dbb9f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005dbba3  53                   push ebx
// 005dbba4  8bce                 mov ecx, esi
// 005dbba6  e805f1ffff           call 0x5dacb0
// 005dbbab  83c620               add esi, 0x20
// 005dbbae  3bf7                 cmp esi, edi
// 005dbbb0  75f1                 jne 0x5dbba3
// 005dbbb2  5b                   pop ebx
// 005dbbb3  5f                   pop edi
// 005dbbb4  5e                   pop esi
// 005dbbb5  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Fill@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
