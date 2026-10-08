// roc 2010-06 00443b50  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00443b50
//
// 00443b50  83ec08               sub esp, 8
// 00443b53  8b542414             mov edx, dword ptr [esp + 0x14]
// 00443b57  53                   push ebx
// 00443b58  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00443b5c  56                   push esi
// 00443b5d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00443b61  57                   push edi
// 00443b62  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00443b66  32c0                 xor al, al
// 00443b68  88442410             mov byte ptr [esp + 0x10], al
// 00443b6c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00443b70  8844240c             mov byte ptr [esp + 0xc], al
// 00443b74  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00443b78  50                   push eax
// 00443b79  51                   push ecx
// 00443b7a  52                   push edx
// 00443b7b  56                   push esi
// 00443b7c  57                   push edi
// 00443b7d  53                   push ebx
// 00443b7e  e8fdfcffff           call 0x443880
// 00443b83  8bc7                 mov eax, edi
// 00443b85  2bc3                 sub eax, ebx
// 00443b87  83c418               add esp, 0x18
// 00443b8a  c1f804               sar eax, 4
// 00443b8d  c1e004               shl eax, 4
// 00443b90  5f                   pop edi
// 00443b91  03c6                 add eax, esi
// 00443b93  5e                   pop esi
// 00443b94  5b                   pop ebx
// 00443b95  83c408               add esp, 8
// 00443b98  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
