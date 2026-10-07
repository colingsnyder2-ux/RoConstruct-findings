// roc 2011-06 009566d0  unit: Ogre::UTVertexPositionNormalStudsTex::?$SpecializedMeshGen  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009566d0
//
// 009566d0  51                   push ecx
// 009566d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 009566d5  56                   push esi
// 009566d6  8b742410             mov esi, dword ptr [esp + 0x10]
// 009566da  57                   push edi
// 009566db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009566df  c644240800           mov byte ptr [esp + 8], 0
// 009566e4  8b442408             mov eax, dword ptr [esp + 8]
// 009566e8  50                   push eax
// 009566e9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009566ed  52                   push edx
// 009566ee  51                   push ecx
// 009566ef  50                   push eax
// 009566f0  56                   push esi
// 009566f1  57                   push edi
// 009566f2  e8b9feffff           call 0x9565b0
// 009566f7  8bc6                 mov eax, esi
// 009566f9  83c418               add esp, 0x18
// 009566fc  c1e005               shl eax, 5
// 009566ff  03c7                 add eax, edi
// 00956701  5f                   pop edi
// 00956702  5e                   pop esi
// 00956703  59                   pop ecx
// 00956704  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
