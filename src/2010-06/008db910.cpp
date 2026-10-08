// from server: 100% by auto
// roc 2010-06 008db910  unit: Ogre::VGpuProgramParameters::?$SharedPtr  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008db910
//
// 008db910  83ec08               sub esp, 8
// 008db913  8b542414             mov edx, dword ptr [esp + 0x14]
// 008db917  53                   push ebx
// 008db918  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008db91c  56                   push esi
// 008db91d  8b742418             mov esi, dword ptr [esp + 0x18]
// 008db921  57                   push edi
// 008db922  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008db926  32c0                 xor al, al
// 008db928  88442410             mov byte ptr [esp + 0x10], al
// 008db92c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008db930  8844240c             mov byte ptr [esp + 0xc], al
// 008db934  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008db938  50                   push eax
// 008db939  51                   push ecx
// 008db93a  52                   push edx
// 008db93b  57                   push edi
// 008db93c  56                   push esi
// 008db93d  53                   push ebx
// 008db93e  e88dfbffff           call 0x8db4d0
// 008db943  2bf3                 sub esi, ebx
// 008db945  b879787878           mov eax, 0x78787879
// 008db94a  f7ee                 imul esi
// 008db94c  c1fa05               sar edx, 5
// 008db94f  8bc2                 mov eax, edx
// 008db951  c1e81f               shr eax, 0x1f
// 008db954  03c2                 add eax, edx
// 008db956  8bc8                 mov ecx, eax
// 008db958  c1e104               shl ecx, 4
// 008db95b  83c418               add esp, 0x18
// 008db95e  03c8                 add ecx, eax
// 008db960  8bc7                 mov eax, edi
// 008db962  03c9                 add ecx, ecx
// 008db964  5f                   pop edi
// 008db965  03c9                 add ecx, ecx
// 008db967  5e                   pop esi
// 008db968  2bc1                 sub eax, ecx
// 008db96a  5b                   pop ebx
// 008db96b  83c408               add esp, 8
// 008db96e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$basic_option@D@program_options@boost@@PAV123@@std@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
