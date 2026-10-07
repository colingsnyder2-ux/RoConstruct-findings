// roc 2012-06 004fbe30  unit: Ogre::UTVertexPositionNormalStudsTex::?$SpecializedMeshGen  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004fbe30
//
// 004fbe30  51                   push ecx
// 004fbe31  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fbe35  56                   push esi
// 004fbe36  8b742410             mov esi, dword ptr [esp + 0x10]
// 004fbe3a  57                   push edi
// 004fbe3b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fbe3f  c644240800           mov byte ptr [esp + 8], 0
// 004fbe44  8b442408             mov eax, dword ptr [esp + 8]
// 004fbe48  50                   push eax
// 004fbe49  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fbe4d  52                   push edx
// 004fbe4e  51                   push ecx
// 004fbe4f  50                   push eax
// 004fbe50  56                   push esi
// 004fbe51  57                   push edi
// 004fbe52  e8b9feffff           call 0x4fbd10
// 004fbe57  8bc6                 mov eax, esi
// 004fbe59  83c418               add esp, 0x18
// 004fbe5c  c1e005               shl eax, 5
// 004fbe5f  03c7                 add eax, edi
// 004fbe61  5f                   pop edi
// 004fbe62  5e                   pop esi
// 004fbe63  59                   pop ecx
// 004fbe64  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
