// roc 2011-06 00955760  unit: Ogre::UTVertexTangent3DTexColorIndexSurfaceTex::?$SpecializedMeshGen  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00955760
//
// 00955760  51                   push ecx
// 00955761  8b542410             mov edx, dword ptr [esp + 0x10]
// 00955765  56                   push esi
// 00955766  8b742410             mov esi, dword ptr [esp + 0x10]
// 0095576a  57                   push edi
// 0095576b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0095576f  c644240800           mov byte ptr [esp + 8], 0
// 00955774  8b442408             mov eax, dword ptr [esp + 8]
// 00955778  50                   push eax
// 00955779  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0095577d  52                   push edx
// 0095577e  51                   push ecx
// 0095577f  50                   push eax
// 00955780  56                   push esi
// 00955781  57                   push edi
// 00955782  e839feffff           call 0x9555c0
// 00955787  8d0cf6               lea ecx, [esi + esi*8]
// 0095578a  83c418               add esp, 0x18
// 0095578d  8d04cf               lea eax, [edi + ecx*8]
// 00955790  5f                   pop edi
// 00955791  5e                   pop esi
// 00955792  59                   pop ecx
// 00955793  c20c00               ret 0xc
// library boost-1.44.0/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@V?$allocator@U?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@@std@@@std@@IAEPAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
