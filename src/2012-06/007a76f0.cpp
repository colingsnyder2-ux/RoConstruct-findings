// from server: 100% by auto
// roc 2012-06 007a76f0  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a76f0
//
// 007a76f0  51                   push ecx
// 007a76f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a76f5  56                   push esi
// 007a76f6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a76fa  57                   push edi
// 007a76fb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a76ff  c644240800           mov byte ptr [esp + 8], 0
// 007a7704  8b442408             mov eax, dword ptr [esp + 8]
// 007a7708  50                   push eax
// 007a7709  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a770d  52                   push edx
// 007a770e  51                   push ecx
// 007a770f  50                   push eax
// 007a7710  56                   push esi
// 007a7711  57                   push edi
// 007a7712  e859ffffff           call 0x7a7670
// 007a7717  8bc6                 mov eax, esi
// 007a7719  83c418               add esp, 0x18
// 007a771c  c1e005               shl eax, 5
// 007a771f  03c7                 add eax, edi
// 007a7721  5f                   pop edi
// 007a7722  5e                   pop esi
// 007a7723  59                   pop ecx
// 007a7724  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
