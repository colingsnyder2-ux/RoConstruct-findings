// roc 2012-06 004fad80  unit: Ogre::UTVertexTangent3DTexColorIndexSurfaceTex::?$SpecializedMeshGen  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004fad80
//
// 004fad80  51                   push ecx
// 004fad81  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fad85  56                   push esi
// 004fad86  8b742410             mov esi, dword ptr [esp + 0x10]
// 004fad8a  57                   push edi
// 004fad8b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fad8f  c644240800           mov byte ptr [esp + 8], 0
// 004fad94  8b442408             mov eax, dword ptr [esp + 8]
// 004fad98  50                   push eax
// 004fad99  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fad9d  52                   push edx
// 004fad9e  51                   push ecx
// 004fad9f  50                   push eax
// 004fada0  56                   push esi
// 004fada1  57                   push edi
// 004fada2  e839feffff           call 0x4fabe0
// 004fada7  8d0cf6               lea ecx, [esi + esi*8]
// 004fadaa  83c418               add esp, 0x18
// 004fadad  8d04cf               lea eax, [edi + ecx*8]
// 004fadb0  5f                   pop edi
// 004fadb1  5e                   pop esi
// 004fadb2  59                   pop ecx
// 004fadb3  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
