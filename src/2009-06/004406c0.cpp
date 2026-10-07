// roc 2009-06 004406c0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004406c0
//
// 004406c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004406c4  8b542404             mov edx, dword ptr [esp + 4]
// 004406c8  8bc1                 mov eax, ecx
// 004406ca  2bc2                 sub eax, edx
// 004406cc  c1f802               sar eax, 2
// 004406cf  03c0                 add eax, eax
// 004406d1  03c0                 add eax, eax
// 004406d3  56                   push esi
// 004406d4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004406d8  57                   push edi
// 004406d9  8bf8                 mov edi, eax
// 004406db  8bc6                 mov eax, esi
// 004406dd  2bc7                 sub eax, edi
// 004406df  3bd1                 cmp edx, ecx
// 004406e1  740f                 je 0x4406f2
// 004406e3  2bf1                 sub esi, ecx
// 004406e5  8b79fc               mov edi, dword ptr [ecx - 4]
// 004406e8  83e904               sub ecx, 4
// 004406eb  893c0e               mov dword ptr [esi + ecx], edi
// 004406ee  3bca                 cmp ecx, edx
// 004406f0  75f3                 jne 0x4406e5
// 004406f2  5f                   pop edi
// 004406f3  5e                   pop esi
// 004406f4  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??$_Copy_backward_opt@PAU?$digraph@G@re_detail@boost@@PAU123@@std@@YAPAU?$digraph@G@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
