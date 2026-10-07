// roc 2011-06 00689d30  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689d30
//
// 00689d30  51                   push ecx
// 00689d31  8b542410             mov edx, dword ptr [esp + 0x10]
// 00689d35  56                   push esi
// 00689d36  8b742410             mov esi, dword ptr [esp + 0x10]
// 00689d3a  57                   push edi
// 00689d3b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00689d3f  c644240800           mov byte ptr [esp + 8], 0
// 00689d44  8b442408             mov eax, dword ptr [esp + 8]
// 00689d48  50                   push eax
// 00689d49  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00689d4d  52                   push edx
// 00689d4e  51                   push ecx
// 00689d4f  50                   push eax
// 00689d50  56                   push esi
// 00689d51  57                   push edi
// 00689d52  e819ffffff           call 0x689c70
// 00689d57  8bc6                 mov eax, esi
// 00689d59  83c418               add esp, 0x18
// 00689d5c  c1e005               shl eax, 5
// 00689d5f  03c7                 add eax, edi
// 00689d61  5f                   pop edi
// 00689d62  5e                   pop esi
// 00689d63  59                   pop ecx
// 00689d64  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
