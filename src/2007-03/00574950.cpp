// roc 2007-03 00574950  unit: seg_00570000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574950
//
// 00574950  83ec08               sub esp, 8
// 00574953  8b542414             mov edx, dword ptr [esp + 0x14]
// 00574957  53                   push ebx
// 00574958  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057495c  56                   push esi
// 0057495d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00574961  57                   push edi
// 00574962  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00574966  32c0                 xor al, al
// 00574968  88442410             mov byte ptr [esp + 0x10], al
// 0057496c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00574970  8844240c             mov byte ptr [esp + 0xc], al
// 00574974  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00574978  50                   push eax
// 00574979  51                   push ecx
// 0057497a  52                   push edx
// 0057497b  57                   push edi
// 0057497c  56                   push esi
// 0057497d  53                   push ebx
// 0057497e  e8addbffff           call 0x572530
// 00574983  2bf3                 sub esi, ebx
// 00574985  c1fe03               sar esi, 3
// 00574988  03f6                 add esi, esi
// 0057498a  83c418               add esp, 0x18
// 0057498d  03f6                 add esi, esi
// 0057498f  03f6                 add esi, esi
// 00574991  8bc7                 mov eax, edi
// 00574993  5f                   pop edi
// 00574994  2bc6                 sub eax, esi
// 00574996  5e                   pop esi
// 00574997  5b                   pop ebx
// 00574998  83c408               add esp, 8
// 0057499b  c3                   ret 
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ??$_Copy_backward_opt@PAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@@std@@YAPAV?$weak_ptr@VPartInstance@RBX@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
