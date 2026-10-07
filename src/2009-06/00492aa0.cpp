// roc 2009-06 00492aa0  unit: Ogre::RbxMaterialAdapter  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00492aa0
//
// 00492aa0  51                   push ecx
// 00492aa1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00492aa5  56                   push esi
// 00492aa6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00492aaa  57                   push edi
// 00492aab  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00492aaf  c644240800           mov byte ptr [esp + 8], 0
// 00492ab4  8b442408             mov eax, dword ptr [esp + 8]
// 00492ab8  50                   push eax
// 00492ab9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00492abd  52                   push edx
// 00492abe  83c108               add ecx, 8
// 00492ac1  51                   push ecx
// 00492ac2  50                   push eax
// 00492ac3  56                   push esi
// 00492ac4  57                   push edi
// 00492ac5  e8e6fcffff           call 0x4927b0
// 00492aca  8d04b6               lea eax, [esi + esi*4]
// 00492acd  83c418               add esp, 0x18
// 00492ad0  c1e004               shl eax, 4
// 00492ad3  03c7                 add eax, edi
// 00492ad5  5f                   pop edi
// 00492ad6  5e                   pop esi
// 00492ad7  59                   pop ecx
// 00492ad8  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
