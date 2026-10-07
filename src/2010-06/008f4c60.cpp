// roc 2010-06 008f4c60  unit: Ogre::UTVertexTangent3DTexColorIndexSurfaceTex::?$SpecializedMeshGen  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008f4c60
//
// 008f4c60  83ec08               sub esp, 8
// 008f4c63  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f4c67  53                   push ebx
// 008f4c68  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008f4c6c  56                   push esi
// 008f4c6d  8b742418             mov esi, dword ptr [esp + 0x18]
// 008f4c71  57                   push edi
// 008f4c72  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008f4c76  32c0                 xor al, al
// 008f4c78  88442410             mov byte ptr [esp + 0x10], al
// 008f4c7c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f4c80  8844240c             mov byte ptr [esp + 0xc], al
// 008f4c84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f4c88  50                   push eax
// 008f4c89  51                   push ecx
// 008f4c8a  52                   push edx
// 008f4c8b  57                   push edi
// 008f4c8c  56                   push esi
// 008f4c8d  53                   push ebx
// 008f4c8e  e89dfeffff           call 0x8f4b30
// 008f4c93  2bf3                 sub esi, ebx
// 008f4c95  b8398ee338           mov eax, 0x38e38e39
// 008f4c9a  f7ee                 imul esi
// 008f4c9c  c1fa04               sar edx, 4
// 008f4c9f  8bc2                 mov eax, edx
// 008f4ca1  c1e81f               shr eax, 0x1f
// 008f4ca4  03c2                 add eax, edx
// 008f4ca6  8d04c0               lea eax, [eax + eax*8]
// 008f4ca9  03c0                 add eax, eax
// 008f4cab  03c0                 add eax, eax
// 008f4cad  03c0                 add eax, eax
// 008f4caf  83c418               add esp, 0x18
// 008f4cb2  8bc8                 mov ecx, eax
// 008f4cb4  8bc7                 mov eax, edi
// 008f4cb6  5f                   pop edi
// 008f4cb7  5e                   pop esi
// 008f4cb8  2bc1                 sub eax, ecx
// 008f4cba  5b                   pop ebx
// 008f4cbb  83c408               add esp, 8
// 008f4cbe  c3                   ret 
// library boost-1.44.0/libs\regex\src\instances.cpp (function ??$_Copy_backward_opt@PAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU123@@std@@YAPAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
