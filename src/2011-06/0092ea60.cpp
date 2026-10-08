// from server: 100% by auto
// roc 2011-06 0092ea60  unit: Ogre::GfxClustererPart  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092ea60
//
// 0092ea60  51                   push ecx
// 0092ea61  8b542410             mov edx, dword ptr [esp + 0x10]
// 0092ea65  56                   push esi
// 0092ea66  8b742410             mov esi, dword ptr [esp + 0x10]
// 0092ea6a  57                   push edi
// 0092ea6b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0092ea6f  c644240800           mov byte ptr [esp + 8], 0
// 0092ea74  8b442408             mov eax, dword ptr [esp + 8]
// 0092ea78  50                   push eax
// 0092ea79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0092ea7d  52                   push edx
// 0092ea7e  51                   push ecx
// 0092ea7f  50                   push eax
// 0092ea80  56                   push esi
// 0092ea81  57                   push edi
// 0092ea82  e869f2ffff           call 0x92dcf0
// 0092ea87  8bc6                 mov eax, esi
// 0092ea89  83c418               add esp, 0x18
// 0092ea8c  c1e005               shl eax, 5
// 0092ea8f  03c7                 add eax, edi
// 0092ea91  5f                   pop edi
// 0092ea92  5e                   pop esi
// 0092ea93  59                   pop ecx
// 0092ea94  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
