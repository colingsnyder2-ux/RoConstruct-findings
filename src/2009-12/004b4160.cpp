// roc 2009-12 004b4160  unit: Ogre::RbxMaterialAdapter  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b4160
//
// 004b4160  83ec08               sub esp, 8
// 004b4163  8b542414             mov edx, dword ptr [esp + 0x14]
// 004b4167  53                   push ebx
// 004b4168  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004b416c  56                   push esi
// 004b416d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b4171  57                   push edi
// 004b4172  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004b4176  32c0                 xor al, al
// 004b4178  88442410             mov byte ptr [esp + 0x10], al
// 004b417c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b4180  8844240c             mov byte ptr [esp + 0xc], al
// 004b4184  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b4188  50                   push eax
// 004b4189  51                   push ecx
// 004b418a  52                   push edx
// 004b418b  57                   push edi
// 004b418c  56                   push esi
// 004b418d  53                   push ebx
// 004b418e  e80df7ffff           call 0x4b38a0
// 004b4193  2bf3                 sub esi, ebx
// 004b4195  b8310cc330           mov eax, 0x30c30c31
// 004b419a  f7ee                 imul esi
// 004b419c  c1fa04               sar edx, 4
// 004b419f  8bc2                 mov eax, edx
// 004b41a1  c1e81f               shr eax, 0x1f
// 004b41a4  03c2                 add eax, edx
// 004b41a6  8bc8                 mov ecx, eax
// 004b41a8  6bc954               imul ecx, ecx, 0x54
// 004b41ab  83c418               add esp, 0x18
// 004b41ae  8bc7                 mov eax, edi
// 004b41b0  5f                   pop edi
// 004b41b1  5e                   pop esi
// 004b41b2  2bc1                 sub eax, ecx
// 004b41b4  5b                   pop ebx
// 004b41b5  83c408               add esp, 8
// 004b41b8  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$basic_option@D@program_options@boost@@PAV123@@std@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
