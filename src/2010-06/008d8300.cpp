// roc 2010-06 008d8300  unit: Ogre::RbxTextureCompositorSceneManager  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d8300
//
// 008d8300  83ec08               sub esp, 8
// 008d8303  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d8307  53                   push ebx
// 008d8308  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008d830c  56                   push esi
// 008d830d  8b742418             mov esi, dword ptr [esp + 0x18]
// 008d8311  57                   push edi
// 008d8312  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008d8316  32c0                 xor al, al
// 008d8318  88442410             mov byte ptr [esp + 0x10], al
// 008d831c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d8320  8844240c             mov byte ptr [esp + 0xc], al
// 008d8324  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d8328  50                   push eax
// 008d8329  51                   push ecx
// 008d832a  52                   push edx
// 008d832b  57                   push edi
// 008d832c  56                   push esi
// 008d832d  53                   push ebx
// 008d832e  e88df1ffff           call 0x8d74c0
// 008d8333  2bf3                 sub esi, ebx
// 008d8335  b8398ee338           mov eax, 0x38e38e39
// 008d833a  f7ee                 imul esi
// 008d833c  c1fa04               sar edx, 4
// 008d833f  8bc2                 mov eax, edx
// 008d8341  c1e81f               shr eax, 0x1f
// 008d8344  03c2                 add eax, edx
// 008d8346  8d04c0               lea eax, [eax + eax*8]
// 008d8349  03c0                 add eax, eax
// 008d834b  03c0                 add eax, eax
// 008d834d  03c0                 add eax, eax
// 008d834f  83c418               add esp, 0x18
// 008d8352  8bc8                 mov ecx, eax
// 008d8354  8bc7                 mov eax, edi
// 008d8356  5f                   pop edi
// 008d8357  5e                   pop esi
// 008d8358  2bc1                 sub eax, ecx
// 008d835a  5b                   pop ebx
// 008d835b  83c408               add esp, 8
// 008d835e  c3                   ret 
// library boost-1.44.0/libs\regex\src\instances.cpp (function ??$_Copy_backward_opt@PAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU123@@std@@YAPAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
