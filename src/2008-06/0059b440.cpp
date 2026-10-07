// roc 2008-06 0059b440  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b440
//
// 0059b440  83ec08               sub esp, 8
// 0059b443  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059b447  53                   push ebx
// 0059b448  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059b44c  56                   push esi
// 0059b44d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0059b451  57                   push edi
// 0059b452  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0059b456  32c0                 xor al, al
// 0059b458  88442410             mov byte ptr [esp + 0x10], al
// 0059b45c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059b460  8844240c             mov byte ptr [esp + 0xc], al
// 0059b464  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059b468  50                   push eax
// 0059b469  51                   push ecx
// 0059b46a  52                   push edx
// 0059b46b  57                   push edi
// 0059b46c  56                   push esi
// 0059b46d  53                   push ebx
// 0059b46e  e85ddcffff           call 0x5990d0
// 0059b473  2bf3                 sub esi, ebx
// 0059b475  c1fe03               sar esi, 3
// 0059b478  03f6                 add esi, esi
// 0059b47a  83c418               add esp, 0x18
// 0059b47d  03f6                 add esi, esi
// 0059b47f  03f6                 add esi, esi
// 0059b481  8bc7                 mov eax, edi
// 0059b483  5f                   pop edi
// 0059b484  2bc6                 sub eax, esi
// 0059b486  5e                   pop esi
// 0059b487  5b                   pop ebx
// 0059b488  83c408               add esp, 8
// 0059b48b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
