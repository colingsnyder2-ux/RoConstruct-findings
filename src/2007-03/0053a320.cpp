// roc 2007-03 0053a320  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053a320
//
// 0053a320  83ec08               sub esp, 8
// 0053a323  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053a327  53                   push ebx
// 0053a328  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0053a32c  56                   push esi
// 0053a32d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0053a331  57                   push edi
// 0053a332  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053a336  32c0                 xor al, al
// 0053a338  88442410             mov byte ptr [esp + 0x10], al
// 0053a33c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053a340  8844240c             mov byte ptr [esp + 0xc], al
// 0053a344  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053a348  50                   push eax
// 0053a349  51                   push ecx
// 0053a34a  52                   push edx
// 0053a34b  57                   push edi
// 0053a34c  56                   push esi
// 0053a34d  53                   push ebx
// 0053a34e  e87d41edff           call 0x40e4d0
// 0053a353  2bf3                 sub esi, ebx
// 0053a355  c1fe03               sar esi, 3
// 0053a358  03f6                 add esi, esi
// 0053a35a  83c418               add esp, 0x18
// 0053a35d  03f6                 add esi, esi
// 0053a35f  03f6                 add esi, esi
// 0053a361  8bc7                 mov eax, edi
// 0053a363  5f                   pop edi
// 0053a364  2bc6                 sub eax, esi
// 0053a366  5e                   pop esi
// 0053a367  5b                   pop ebx
// 0053a368  83c408               add esp, 8
// 0053a36b  c3                   ret 
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ??$_Copy_backward_opt@PAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@@std@@YAPAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
