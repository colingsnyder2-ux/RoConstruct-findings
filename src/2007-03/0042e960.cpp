// roc 2007-03 0042e960  unit: seg_00420000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e960
//
// 0042e960  83ec08               sub esp, 8
// 0042e963  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042e967  53                   push ebx
// 0042e968  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0042e96c  56                   push esi
// 0042e96d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042e971  57                   push edi
// 0042e972  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0042e976  32c0                 xor al, al
// 0042e978  88442410             mov byte ptr [esp + 0x10], al
// 0042e97c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042e980  8844240c             mov byte ptr [esp + 0xc], al
// 0042e984  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042e988  50                   push eax
// 0042e989  51                   push ecx
// 0042e98a  52                   push edx
// 0042e98b  57                   push edi
// 0042e98c  56                   push esi
// 0042e98d  53                   push ebx
// 0042e98e  e84dfdffff           call 0x42e6e0
// 0042e993  2bf3                 sub esi, ebx
// 0042e995  c1fe03               sar esi, 3
// 0042e998  03f6                 add esi, esi
// 0042e99a  83c418               add esp, 0x18
// 0042e99d  03f6                 add esi, esi
// 0042e99f  03f6                 add esi, esi
// 0042e9a1  8bc7                 mov eax, edi
// 0042e9a3  5f                   pop edi
// 0042e9a4  2bc6                 sub eax, esi
// 0042e9a6  5e                   pop esi
// 0042e9a7  5b                   pop ebx
// 0042e9a8  83c408               add esp, 8
// 0042e9ab  c3                   ret 
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ??$_Copy_backward_opt@PAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@@std@@YAPAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
