// roc 2010-06 008dc230  unit: Ogre::RbxMaterialAdapter  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008dc230
//
// 008dc230  83ec08               sub esp, 8
// 008dc233  8b542414             mov edx, dword ptr [esp + 0x14]
// 008dc237  53                   push ebx
// 008dc238  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008dc23c  56                   push esi
// 008dc23d  8b742418             mov esi, dword ptr [esp + 0x18]
// 008dc241  57                   push edi
// 008dc242  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008dc246  32c0                 xor al, al
// 008dc248  88442410             mov byte ptr [esp + 0x10], al
// 008dc24c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008dc250  8844240c             mov byte ptr [esp + 0xc], al
// 008dc254  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008dc258  50                   push eax
// 008dc259  51                   push ecx
// 008dc25a  52                   push edx
// 008dc25b  57                   push edi
// 008dc25c  56                   push esi
// 008dc25d  53                   push ebx
// 008dc25e  e80df7ffff           call 0x8db970
// 008dc263  2bf3                 sub esi, ebx
// 008dc265  b8310cc330           mov eax, 0x30c30c31
// 008dc26a  f7ee                 imul esi
// 008dc26c  c1fa04               sar edx, 4
// 008dc26f  8bc2                 mov eax, edx
// 008dc271  c1e81f               shr eax, 0x1f
// 008dc274  03c2                 add eax, edx
// 008dc276  8bc8                 mov ecx, eax
// 008dc278  6bc954               imul ecx, ecx, 0x54
// 008dc27b  83c418               add esp, 0x18
// 008dc27e  8bc7                 mov eax, edi
// 008dc280  5f                   pop edi
// 008dc281  5e                   pop esi
// 008dc282  2bc1                 sub eax, ecx
// 008dc284  5b                   pop ebx
// 008dc285  83c408               add esp, 8
// 008dc288  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$basic_option@D@program_options@boost@@PAV123@@std@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
