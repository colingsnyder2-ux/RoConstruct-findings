// from server: 100% by auto
// roc 2010-06 008f5460  unit: Ogre::UTVertexBasic::?$SpecializedMeshGen  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008f5460
//
// 008f5460  83ec08               sub esp, 8
// 008f5463  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f5467  53                   push ebx
// 008f5468  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008f546c  56                   push esi
// 008f546d  8b742418             mov esi, dword ptr [esp + 0x18]
// 008f5471  57                   push edi
// 008f5472  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008f5476  32c0                 xor al, al
// 008f5478  88442410             mov byte ptr [esp + 0x10], al
// 008f547c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f5480  8844240c             mov byte ptr [esp + 0xc], al
// 008f5484  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f5488  50                   push eax
// 008f5489  51                   push ecx
// 008f548a  52                   push edx
// 008f548b  57                   push edi
// 008f548c  56                   push esi
// 008f548d  53                   push ebx
// 008f548e  e89dfeffff           call 0x8f5330
// 008f5493  2bf3                 sub esi, ebx
// 008f5495  b879787878           mov eax, 0x78787879
// 008f549a  f7ee                 imul esi
// 008f549c  c1fa05               sar edx, 5
// 008f549f  8bc2                 mov eax, edx
// 008f54a1  c1e81f               shr eax, 0x1f
// 008f54a4  03c2                 add eax, edx
// 008f54a6  8bc8                 mov ecx, eax
// 008f54a8  c1e104               shl ecx, 4
// 008f54ab  83c418               add esp, 0x18
// 008f54ae  03c8                 add ecx, eax
// 008f54b0  8bc7                 mov eax, edi
// 008f54b2  03c9                 add ecx, ecx
// 008f54b4  5f                   pop edi
// 008f54b5  03c9                 add ecx, ecx
// 008f54b7  5e                   pop esi
// 008f54b8  2bc1                 sub eax, ecx
// 008f54ba  5b                   pop ebx
// 008f54bb  83c408               add esp, 8
// 008f54be  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$basic_option@D@program_options@boost@@PAV123@@std@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
