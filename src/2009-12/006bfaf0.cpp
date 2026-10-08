// roc 2009-12 006bfaf0  unit: RBX::VInstance::?$NonFactoryProduct  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bfaf0
//
// 006bfaf0  56                   push esi
// 006bfaf1  8b742408             mov esi, dword ptr [esp + 8]
// 006bfaf5  57                   push edi
// 006bfaf6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006bfafa  3bf7                 cmp esi, edi
// 006bfafc  7415                 je 0x6bfb13
// 006bfafe  53                   push ebx
// 006bfaff  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006bfb03  53                   push ebx
// 006bfb04  8bce                 mov ecx, esi
// 006bfb06  e8f53f0400           call 0x703b00
// 006bfb0b  83c620               add esi, 0x20
// 006bfb0e  3bf7                 cmp esi, edi
// 006bfb10  75f1                 jne 0x6bfb03
// 006bfb12  5b                   pop ebx
// 006bfb13  5f                   pop edi
// 006bfb14  5e                   pop esi
// 006bfb15  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Fill@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
