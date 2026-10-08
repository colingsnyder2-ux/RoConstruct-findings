// from server: 100% by auto
// roc 2008-06 0055ebf0  unit: RBX::MD5HasherImpl  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055ebf0
//
// 0055ebf0  56                   push esi
// 0055ebf1  8b742408             mov esi, dword ptr [esp + 8]
// 0055ebf5  57                   push edi
// 0055ebf6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0055ebfa  3bf7                 cmp esi, edi
// 0055ebfc  7415                 je 0x55ec13
// 0055ebfe  53                   push ebx
// 0055ebff  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0055ec03  53                   push ebx
// 0055ec04  8bce                 mov ecx, esi
// 0055ec06  e88563ffff           call 0x554f90
// 0055ec0b  83c620               add esi, 0x20
// 0055ec0e  3bf7                 cmp esi, edi
// 0055ec10  75f1                 jne 0x55ec03
// 0055ec12  5b                   pop ebx
// 0055ec13  5f                   pop edi
// 0055ec14  5e                   pop esi
// 0055ec15  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Fill@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V12@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
