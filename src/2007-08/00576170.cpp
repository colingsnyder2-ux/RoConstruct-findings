// roc 2007-08 00576170  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576170
//
// 00576170  83ec08               sub esp, 8
// 00576173  8b542414             mov edx, dword ptr [esp + 0x14]
// 00576177  53                   push ebx
// 00576178  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057617c  56                   push esi
// 0057617d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00576181  57                   push edi
// 00576182  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00576186  32c0                 xor al, al
// 00576188  88442410             mov byte ptr [esp + 0x10], al
// 0057618c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00576190  8844240c             mov byte ptr [esp + 0xc], al
// 00576194  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00576198  50                   push eax
// 00576199  51                   push ecx
// 0057619a  52                   push edx
// 0057619b  57                   push edi
// 0057619c  56                   push esi
// 0057619d  53                   push ebx
// 0057619e  e84dd9ffff           call 0x573af0
// 005761a3  2bf3                 sub esi, ebx
// 005761a5  c1fe03               sar esi, 3
// 005761a8  03f6                 add esi, esi
// 005761aa  83c418               add esp, 0x18
// 005761ad  03f6                 add esi, esi
// 005761af  03f6                 add esi, esi
// 005761b1  8bc7                 mov eax, edi
// 005761b3  5f                   pop edi
// 005761b4  2bc6                 sub eax, esi
// 005761b6  5e                   pop esi
// 005761b7  5b                   pop ebx
// 005761b8  83c408               add esp, 8
// 005761bb  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
