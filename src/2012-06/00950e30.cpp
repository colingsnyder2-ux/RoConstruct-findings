// roc 2012-06 00950e30  unit: RBX::AdvRotateTool  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00950e30
//
// 00950e30  51                   push ecx
// 00950e31  8b542410             mov edx, dword ptr [esp + 0x10]
// 00950e35  56                   push esi
// 00950e36  8b742410             mov esi, dword ptr [esp + 0x10]
// 00950e3a  57                   push edi
// 00950e3b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00950e3f  c644240800           mov byte ptr [esp + 8], 0
// 00950e44  8b442408             mov eax, dword ptr [esp + 8]
// 00950e48  50                   push eax
// 00950e49  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00950e4d  52                   push edx
// 00950e4e  51                   push ecx
// 00950e4f  50                   push eax
// 00950e50  56                   push esi
// 00950e51  57                   push edi
// 00950e52  e849fcffff           call 0x950aa0
// 00950e57  8bc6                 mov eax, esi
// 00950e59  83c418               add esp, 0x18
// 00950e5c  c1e005               shl eax, 5
// 00950e5f  03c7                 add eax, edi
// 00950e61  5f                   pop edi
// 00950e62  5e                   pop esi
// 00950e63  59                   pop ecx
// 00950e64  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
