// roc 2009-12 006ad2e0  unit: RBX::Accoutrement  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ad2e0
//
// 006ad2e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ad2e4  8b542404             mov edx, dword ptr [esp + 4]
// 006ad2e8  8bc1                 mov eax, ecx
// 006ad2ea  2bc2                 sub eax, edx
// 006ad2ec  c1f802               sar eax, 2
// 006ad2ef  03c0                 add eax, eax
// 006ad2f1  03c0                 add eax, eax
// 006ad2f3  56                   push esi
// 006ad2f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ad2f8  57                   push edi
// 006ad2f9  8bf8                 mov edi, eax
// 006ad2fb  8bc6                 mov eax, esi
// 006ad2fd  2bc7                 sub eax, edi
// 006ad2ff  3bd1                 cmp edx, ecx
// 006ad301  740f                 je 0x6ad312
// 006ad303  2bf1                 sub esi, ecx
// 006ad305  8b79fc               mov edi, dword ptr [ecx - 4]
// 006ad308  83e904               sub ecx, 4
// 006ad30b  893c0e               mov dword ptr [esi + ecx], edi
// 006ad30e  3bca                 cmp ecx, edx
// 006ad310  75f3                 jne 0x6ad305
// 006ad312  5f                   pop edi
// 006ad313  5e                   pop esi
// 006ad314  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??$_Copy_backward_opt@PAU?$digraph@G@re_detail@boost@@PAU123@@std@@YAPAU?$digraph@G@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
