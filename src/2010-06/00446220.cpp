// roc 2010-06 00446220  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00446220
//
// 00446220  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00446224  8b542404             mov edx, dword ptr [esp + 4]
// 00446228  8bc1                 mov eax, ecx
// 0044622a  2bc2                 sub eax, edx
// 0044622c  c1f802               sar eax, 2
// 0044622f  03c0                 add eax, eax
// 00446231  03c0                 add eax, eax
// 00446233  56                   push esi
// 00446234  8b742410             mov esi, dword ptr [esp + 0x10]
// 00446238  57                   push edi
// 00446239  8bf8                 mov edi, eax
// 0044623b  8bc6                 mov eax, esi
// 0044623d  2bc7                 sub eax, edi
// 0044623f  3bd1                 cmp edx, ecx
// 00446241  740f                 je 0x446252
// 00446243  2bf1                 sub esi, ecx
// 00446245  8b79fc               mov edi, dword ptr [ecx - 4]
// 00446248  83e904               sub ecx, 4
// 0044624b  893c0e               mov dword ptr [esi + ecx], edi
// 0044624e  3bca                 cmp ecx, edx
// 00446250  75f3                 jne 0x446245
// 00446252  5f                   pop edi
// 00446253  5e                   pop esi
// 00446254  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??$_Copy_backward_opt@PAU?$digraph@G@re_detail@boost@@PAU123@@std@@YAPAU?$digraph@G@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
