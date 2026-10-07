// roc 2010-06 008ffda0  unit: Ogre::RbxSceneUpdater  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ffda0
//
// 008ffda0  51                   push ecx
// 008ffda1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ffda5  56                   push esi
// 008ffda6  8b742410             mov esi, dword ptr [esp + 0x10]
// 008ffdaa  57                   push edi
// 008ffdab  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008ffdaf  c644240800           mov byte ptr [esp + 8], 0
// 008ffdb4  8b442408             mov eax, dword ptr [esp + 8]
// 008ffdb8  50                   push eax
// 008ffdb9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ffdbd  52                   push edx
// 008ffdbe  83c108               add ecx, 8
// 008ffdc1  51                   push ecx
// 008ffdc2  50                   push eax
// 008ffdc3  56                   push esi
// 008ffdc4  57                   push edi
// 008ffdc5  e8d6fdffff           call 0x8ffba0
// 008ffdca  8d04b6               lea eax, [esi + esi*4]
// 008ffdcd  83c418               add esp, 0x18
// 008ffdd0  c1e004               shl eax, 4
// 008ffdd3  03c7                 add eax, edi
// 008ffdd5  5f                   pop edi
// 008ffdd6  5e                   pop esi
// 008ffdd7  59                   pop ecx
// 008ffdd8  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
