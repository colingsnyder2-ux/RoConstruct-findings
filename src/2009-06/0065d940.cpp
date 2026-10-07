// roc 2009-06 0065d940  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d940
//
// 0065d940  83ec08               sub esp, 8
// 0065d943  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065d947  53                   push ebx
// 0065d948  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065d94c  56                   push esi
// 0065d94d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065d951  57                   push edi
// 0065d952  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0065d956  32c0                 xor al, al
// 0065d958  88442410             mov byte ptr [esp + 0x10], al
// 0065d95c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065d960  8844240c             mov byte ptr [esp + 0xc], al
// 0065d964  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065d968  50                   push eax
// 0065d969  51                   push ecx
// 0065d96a  52                   push edx
// 0065d96b  57                   push edi
// 0065d96c  56                   push esi
// 0065d96d  53                   push ebx
// 0065d96e  e80de5ffff           call 0x65be80
// 0065d973  2bf3                 sub esi, ebx
// 0065d975  c1fe03               sar esi, 3
// 0065d978  03f6                 add esi, esi
// 0065d97a  83c418               add esp, 0x18
// 0065d97d  03f6                 add esi, esi
// 0065d97f  03f6                 add esi, esi
// 0065d981  8bc7                 mov eax, edi
// 0065d983  5f                   pop edi
// 0065d984  2bc6                 sub eax, esi
// 0065d986  5e                   pop esi
// 0065d987  5b                   pop ebx
// 0065d988  83c408               add esp, 8
// 0065d98b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
