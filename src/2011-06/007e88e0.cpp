// roc 2011-06 007e88e0  unit: RBX::AdvRotateTool  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e88e0
//
// 007e88e0  51                   push ecx
// 007e88e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e88e5  56                   push esi
// 007e88e6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007e88ea  57                   push edi
// 007e88eb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007e88ef  c644240800           mov byte ptr [esp + 8], 0
// 007e88f4  8b442408             mov eax, dword ptr [esp + 8]
// 007e88f8  50                   push eax
// 007e88f9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007e88fd  52                   push edx
// 007e88fe  51                   push ecx
// 007e88ff  50                   push eax
// 007e8900  56                   push esi
// 007e8901  57                   push edi
// 007e8902  e8a9fdffff           call 0x7e86b0
// 007e8907  8bc6                 mov eax, esi
// 007e8909  83c418               add esp, 0x18
// 007e890c  c1e005               shl eax, 5
// 007e890f  03c7                 add eax, edi
// 007e8911  5f                   pop edi
// 007e8912  5e                   pop esi
// 007e8913  59                   pop ecx
// 007e8914  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
