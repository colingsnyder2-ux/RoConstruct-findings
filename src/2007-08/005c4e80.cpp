// roc 2007-08 005c4e80  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4e80
//
// 005c4e80  83ec08               sub esp, 8
// 005c4e83  8b542414             mov edx, dword ptr [esp + 0x14]
// 005c4e87  53                   push ebx
// 005c4e88  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005c4e8c  56                   push esi
// 005c4e8d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c4e91  57                   push edi
// 005c4e92  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005c4e96  32c0                 xor al, al
// 005c4e98  88442410             mov byte ptr [esp + 0x10], al
// 005c4e9c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c4ea0  8844240c             mov byte ptr [esp + 0xc], al
// 005c4ea4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c4ea8  50                   push eax
// 005c4ea9  51                   push ecx
// 005c4eaa  52                   push edx
// 005c4eab  56                   push esi
// 005c4eac  57                   push edi
// 005c4ead  53                   push ebx
// 005c4eae  e84dfdffff           call 0x5c4c00
// 005c4eb3  8bc7                 mov eax, edi
// 005c4eb5  2bc3                 sub eax, ebx
// 005c4eb7  83c418               add esp, 0x18
// 005c4eba  c1f804               sar eax, 4
// 005c4ebd  c1e004               shl eax, 4
// 005c4ec0  5f                   pop edi
// 005c4ec1  03c6                 add eax, esi
// 005c4ec3  5e                   pop esi
// 005c4ec4  5b                   pop ebx
// 005c4ec5  83c408               add esp, 8
// 005c4ec8  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
