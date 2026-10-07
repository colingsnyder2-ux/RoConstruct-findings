// roc 2009-06 004919a0  unit: Ogre::RbxMaterialAdapter  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004919a0
//
// 004919a0  83ec08               sub esp, 8
// 004919a3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004919a7  53                   push ebx
// 004919a8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004919ac  56                   push esi
// 004919ad  8b742418             mov esi, dword ptr [esp + 0x18]
// 004919b1  57                   push edi
// 004919b2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004919b6  32c0                 xor al, al
// 004919b8  88442410             mov byte ptr [esp + 0x10], al
// 004919bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004919c0  8844240c             mov byte ptr [esp + 0xc], al
// 004919c4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004919c8  50                   push eax
// 004919c9  51                   push ecx
// 004919ca  52                   push edx
// 004919cb  57                   push edi
// 004919cc  56                   push esi
// 004919cd  53                   push ebx
// 004919ce  e8cdf4ffff           call 0x490ea0
// 004919d3  2bf3                 sub esi, ebx
// 004919d5  b867666666           mov eax, 0x66666667
// 004919da  f7ee                 imul esi
// 004919dc  c1fa05               sar edx, 5
// 004919df  8bc2                 mov eax, edx
// 004919e1  c1e81f               shr eax, 0x1f
// 004919e4  03c2                 add eax, edx
// 004919e6  8d0480               lea eax, [eax + eax*4]
// 004919e9  c1e004               shl eax, 4
// 004919ec  83c418               add esp, 0x18
// 004919ef  8bc8                 mov ecx, eax
// 004919f1  8bc7                 mov eax, edi
// 004919f3  5f                   pop edi
// 004919f4  5e                   pop esi
// 004919f5  2bc1                 sub eax, ecx
// 004919f7  5b                   pop ebx
// 004919f8  83c408               add esp, 8
// 004919fb  c3                   ret 
// library boost-1.44.0/libs\regex\src\instances.cpp (function ??$_Copy_backward_opt@PAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU123@@std@@YAPAU?$recursion_info@V?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
