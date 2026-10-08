// roc 2007-03 005c0bf0  unit: seg_005c0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0bf0
//
// 005c0bf0  83ec08               sub esp, 8
// 005c0bf3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005c0bf7  53                   push ebx
// 005c0bf8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005c0bfc  56                   push esi
// 005c0bfd  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c0c01  57                   push edi
// 005c0c02  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005c0c06  32c0                 xor al, al
// 005c0c08  88442410             mov byte ptr [esp + 0x10], al
// 005c0c0c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c0c10  8844240c             mov byte ptr [esp + 0xc], al
// 005c0c14  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c0c18  50                   push eax
// 005c0c19  51                   push ecx
// 005c0c1a  52                   push edx
// 005c0c1b  57                   push edi
// 005c0c1c  56                   push esi
// 005c0c1d  53                   push ebx
// 005c0c1e  e83dfdffff           call 0x5c0960
// 005c0c23  2bf3                 sub esi, ebx
// 005c0c25  83c418               add esp, 0x18
// 005c0c28  c1fe04               sar esi, 4
// 005c0c2b  c1e604               shl esi, 4
// 005c0c2e  8bc7                 mov eax, edi
// 005c0c30  5f                   pop edi
// 005c0c31  2bc6                 sub eax, esi
// 005c0c33  5e                   pop esi
// 005c0c34  5b                   pop ebx
// 005c0c35  83c408               add esp, 8
// 005c0c38  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_backward_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
