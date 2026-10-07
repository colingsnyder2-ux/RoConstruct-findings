// roc 2007-08 0056fa20  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056fa20
//
// 0056fa20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056fa24  8b542404             mov edx, dword ptr [esp + 4]
// 0056fa28  8bc1                 mov eax, ecx
// 0056fa2a  2bc2                 sub eax, edx
// 0056fa2c  c1f802               sar eax, 2
// 0056fa2f  03c0                 add eax, eax
// 0056fa31  03c0                 add eax, eax
// 0056fa33  56                   push esi
// 0056fa34  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056fa38  57                   push edi
// 0056fa39  8bf8                 mov edi, eax
// 0056fa3b  8bc6                 mov eax, esi
// 0056fa3d  2bc7                 sub eax, edi
// 0056fa3f  3bd1                 cmp edx, ecx
// 0056fa41  740f                 je 0x56fa52
// 0056fa43  2bf1                 sub esi, ecx
// 0056fa45  8b79fc               mov edi, dword ptr [ecx - 4]
// 0056fa48  83e904               sub ecx, 4
// 0056fa4b  3bca                 cmp ecx, edx
// 0056fa4d  893c0e               mov dword ptr [esi + ecx], edi
// 0056fa50  75f3                 jne 0x56fa45
// 0056fa52  5f                   pop edi
// 0056fa53  5e                   pop esi
// 0056fa54  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??$_Copy_backward_opt@PAU?$digraph@G@re_detail@boost@@PAU123@@std@@YAPAU?$digraph@G@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
