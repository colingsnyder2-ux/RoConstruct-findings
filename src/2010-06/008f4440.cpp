// roc 2010-06 008f4440  unit: Ogre::UTVertexTangent3DTex::?$SpecializedMeshGen  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008f4440
//
// 008f4440  83ec08               sub esp, 8
// 008f4443  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f4447  53                   push ebx
// 008f4448  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008f444c  56                   push esi
// 008f444d  8b742418             mov esi, dword ptr [esp + 0x18]
// 008f4451  57                   push edi
// 008f4452  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008f4456  32c0                 xor al, al
// 008f4458  88442410             mov byte ptr [esp + 0x10], al
// 008f445c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f4460  8844240c             mov byte ptr [esp + 0xc], al
// 008f4464  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f4468  50                   push eax
// 008f4469  51                   push ecx
// 008f446a  52                   push edx
// 008f446b  57                   push edi
// 008f446c  56                   push esi
// 008f446d  53                   push ebx
// 008f446e  e8bdfeffff           call 0x8f4330
// 008f4473  2bf3                 sub esi, ebx
// 008f4475  b889888888           mov eax, 0x88888889
// 008f447a  f7ee                 imul esi
// 008f447c  03d6                 add edx, esi
// 008f447e  c1fa05               sar edx, 5
// 008f4481  8bc2                 mov eax, edx
// 008f4483  c1e81f               shr eax, 0x1f
// 008f4486  03c2                 add eax, edx
// 008f4488  8bc8                 mov ecx, eax
// 008f448a  c1e104               shl ecx, 4
// 008f448d  83c418               add esp, 0x18
// 008f4490  2bc8                 sub ecx, eax
// 008f4492  8bc7                 mov eax, edi
// 008f4494  03c9                 add ecx, ecx
// 008f4496  5f                   pop edi
// 008f4497  03c9                 add ecx, ecx
// 008f4499  5e                   pop esi
// 008f449a  2bc1                 sub eax, ecx
// 008f449c  5b                   pop ebx
// 008f449d  83c408               add esp, 8
// 008f44a0  c3                   ret 
// library boost-1.44.0/libs\regex\src\instances.cpp (function ??$_Copy_backward_opt@PAU?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@PAU123@@std@@YAPAU?$recursion_info@V?$match_results@PBDV?$allocator@U?$sub_match@PBD@boost@@@std@@@boost@@@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.44.0 libs/regex/src/instances.cpp
