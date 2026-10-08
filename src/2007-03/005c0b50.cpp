// roc 2007-03 005c0b50  unit: seg_005c0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0b50
//
// 005c0b50  83ec08               sub esp, 8
// 005c0b53  8b542414             mov edx, dword ptr [esp + 0x14]
// 005c0b57  53                   push ebx
// 005c0b58  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005c0b5c  56                   push esi
// 005c0b5d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c0b61  57                   push edi
// 005c0b62  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005c0b66  32c0                 xor al, al
// 005c0b68  88442410             mov byte ptr [esp + 0x10], al
// 005c0b6c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c0b70  8844240c             mov byte ptr [esp + 0xc], al
// 005c0b74  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c0b78  50                   push eax
// 005c0b79  51                   push ecx
// 005c0b7a  52                   push edx
// 005c0b7b  56                   push esi
// 005c0b7c  57                   push edi
// 005c0b7d  53                   push ebx
// 005c0b7e  e84dfdffff           call 0x5c08d0
// 005c0b83  8bc7                 mov eax, edi
// 005c0b85  2bc3                 sub eax, ebx
// 005c0b87  83c418               add esp, 0x18
// 005c0b8a  c1f804               sar eax, 4
// 005c0b8d  c1e004               shl eax, 4
// 005c0b90  5f                   pop edi
// 005c0b91  03c6                 add eax, esi
// 005c0b93  5e                   pop esi
// 005c0b94  5b                   pop ebx
// 005c0b95  83c408               add esp, 8
// 005c0b98  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
