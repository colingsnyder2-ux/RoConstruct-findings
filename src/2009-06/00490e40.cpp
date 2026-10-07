// roc 2009-06 00490e40  unit: Ogre::RbxMaterialAdapter  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00490e40
//
// 00490e40  83ec08               sub esp, 8
// 00490e43  8b542414             mov edx, dword ptr [esp + 0x14]
// 00490e47  53                   push ebx
// 00490e48  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00490e4c  56                   push esi
// 00490e4d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00490e51  57                   push edi
// 00490e52  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00490e56  32c0                 xor al, al
// 00490e58  88442410             mov byte ptr [esp + 0x10], al
// 00490e5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00490e60  8844240c             mov byte ptr [esp + 0xc], al
// 00490e64  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00490e68  50                   push eax
// 00490e69  51                   push ecx
// 00490e6a  52                   push edx
// 00490e6b  57                   push edi
// 00490e6c  56                   push esi
// 00490e6d  53                   push ebx
// 00490e6e  e8cdfdffff           call 0x490c40
// 00490e73  2bf3                 sub esi, ebx
// 00490e75  b879787878           mov eax, 0x78787879
// 00490e7a  f7ee                 imul esi
// 00490e7c  c1fa05               sar edx, 5
// 00490e7f  8bc2                 mov eax, edx
// 00490e81  c1e81f               shr eax, 0x1f
// 00490e84  03c2                 add eax, edx
// 00490e86  8bc8                 mov ecx, eax
// 00490e88  c1e104               shl ecx, 4
// 00490e8b  83c418               add esp, 0x18
// 00490e8e  03c8                 add ecx, eax
// 00490e90  8bc7                 mov eax, edi
// 00490e92  03c9                 add ecx, ecx
// 00490e94  5f                   pop edi
// 00490e95  03c9                 add ecx, ecx
// 00490e97  5e                   pop esi
// 00490e98  2bc1                 sub eax, ecx
// 00490e9a  5b                   pop ebx
// 00490e9b  83c408               add esp, 8
// 00490e9e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$basic_option@D@program_options@boost@@PAV123@@std@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
