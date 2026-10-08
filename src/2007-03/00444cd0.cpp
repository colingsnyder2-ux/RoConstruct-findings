// roc 2007-03 00444cd0  unit: seg_00440000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444cd0
//
// 00444cd0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00444cd4  8b542404             mov edx, dword ptr [esp + 4]
// 00444cd8  8bc1                 mov eax, ecx
// 00444cda  2bc2                 sub eax, edx
// 00444cdc  c1f802               sar eax, 2
// 00444cdf  03c0                 add eax, eax
// 00444ce1  03c0                 add eax, eax
// 00444ce3  56                   push esi
// 00444ce4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00444ce8  57                   push edi
// 00444ce9  8bf8                 mov edi, eax
// 00444ceb  8bc6                 mov eax, esi
// 00444ced  2bc7                 sub eax, edi
// 00444cef  3bd1                 cmp edx, ecx
// 00444cf1  740f                 je 0x444d02
// 00444cf3  2bf1                 sub esi, ecx
// 00444cf5  8b79fc               mov edi, dword ptr [ecx - 4]
// 00444cf8  83e904               sub ecx, 4
// 00444cfb  3bca                 cmp ecx, edx
// 00444cfd  893c0e               mov dword ptr [esi + ecx], edi
// 00444d00  75f3                 jne 0x444cf5
// 00444d02  5f                   pop edi
// 00444d03  5e                   pop esi
// 00444d04  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??$_Copy_backward_opt@PAVBrickColor@RBX@@PAV12@@std@@YAPAVBrickColor@RBX@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
