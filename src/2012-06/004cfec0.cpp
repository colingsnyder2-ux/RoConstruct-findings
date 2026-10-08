// from server: 100% by auto
// roc 2012-06 004cfec0  unit: Ogre::GfxClustererPart  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cfec0
//
// 004cfec0  51                   push ecx
// 004cfec1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cfec5  56                   push esi
// 004cfec6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cfeca  57                   push edi
// 004cfecb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cfecf  c644240800           mov byte ptr [esp + 8], 0
// 004cfed4  8b442408             mov eax, dword ptr [esp + 8]
// 004cfed8  50                   push eax
// 004cfed9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004cfedd  52                   push edx
// 004cfede  51                   push ecx
// 004cfedf  50                   push eax
// 004cfee0  56                   push esi
// 004cfee1  57                   push edi
// 004cfee2  e8c9f0ffff           call 0x4cefb0
// 004cfee7  8bc6                 mov eax, esi
// 004cfee9  83c418               add esp, 0x18
// 004cfeec  c1e005               shl eax, 5
// 004cfeef  03c7                 add eax, edi
// 004cfef1  5f                   pop edi
// 004cfef2  5e                   pop esi
// 004cfef3  59                   pop ecx
// 004cfef4  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
