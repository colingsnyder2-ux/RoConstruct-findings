// from server: 100% by auto
// roc 2008-06 00615030  unit: RBX::RevoluteLink  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615030
//
// 00615030  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00615034  8b542404             mov edx, dword ptr [esp + 4]
// 00615038  8bc1                 mov eax, ecx
// 0061503a  2bc2                 sub eax, edx
// 0061503c  c1f802               sar eax, 2
// 0061503f  03c0                 add eax, eax
// 00615041  03c0                 add eax, eax
// 00615043  56                   push esi
// 00615044  8b742410             mov esi, dword ptr [esp + 0x10]
// 00615048  57                   push edi
// 00615049  8bf8                 mov edi, eax
// 0061504b  8bc6                 mov eax, esi
// 0061504d  2bc7                 sub eax, edi
// 0061504f  3bd1                 cmp edx, ecx
// 00615051  740f                 je 0x615062
// 00615053  2bf1                 sub esi, ecx
// 00615055  8b79fc               mov edi, dword ptr [ecx - 4]
// 00615058  83e904               sub ecx, 4
// 0061505b  893c0e               mov dword ptr [esi + ecx], edi
// 0061505e  3bca                 cmp ecx, edx
// 00615060  75f3                 jne 0x615055
// 00615062  5f                   pop edi
// 00615063  5e                   pop esi
// 00615064  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??$_Copy_backward_opt@PAU?$digraph@G@re_detail@boost@@PAU123@@std@@YAPAU?$digraph@G@re_detail@boost@@PAU123@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
