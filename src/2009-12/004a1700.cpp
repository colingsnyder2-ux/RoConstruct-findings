// roc 2009-12 004a1700  unit: Ogre::UTVertexTangent3DTexSurfaceTex::?$SpecializedMeshGen  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004a1700
//
// 004a1700  83ec08               sub esp, 8
// 004a1703  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a1707  53                   push ebx
// 004a1708  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004a170c  56                   push esi
// 004a170d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a1711  57                   push edi
// 004a1712  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004a1716  32c0                 xor al, al
// 004a1718  88442410             mov byte ptr [esp + 0x10], al
// 004a171c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a1720  8844240c             mov byte ptr [esp + 0xc], al
// 004a1724  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a1728  50                   push eax
// 004a1729  51                   push ecx
// 004a172a  52                   push edx
// 004a172b  57                   push edi
// 004a172c  56                   push esi
// 004a172d  53                   push ebx
// 004a172e  e89dfeffff           call 0x4a15d0
// 004a1733  2bf3                 sub esi, ebx
// 004a1735  b879787878           mov eax, 0x78787879
// 004a173a  f7ee                 imul esi
// 004a173c  c1fa05               sar edx, 5
// 004a173f  8bc2                 mov eax, edx
// 004a1741  c1e81f               shr eax, 0x1f
// 004a1744  03c2                 add eax, edx
// 004a1746  8bc8                 mov ecx, eax
// 004a1748  c1e104               shl ecx, 4
// 004a174b  83c418               add esp, 0x18
// 004a174e  03c8                 add ecx, eax
// 004a1750  8bc7                 mov eax, edi
// 004a1752  03c9                 add ecx, ecx
// 004a1754  5f                   pop edi
// 004a1755  03c9                 add ecx, ecx
// 004a1757  5e                   pop esi
// 004a1758  2bc1                 sub eax, ecx
// 004a175a  5b                   pop ebx
// 004a175b  83c408               add esp, 8
// 004a175e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$basic_option@D@program_options@boost@@PAV123@@std@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
