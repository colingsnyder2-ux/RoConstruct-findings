// roc 2009-06 0043e010  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e010
//
// 0043e010  83ec08               sub esp, 8
// 0043e013  8b542414             mov edx, dword ptr [esp + 0x14]
// 0043e017  53                   push ebx
// 0043e018  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0043e01c  56                   push esi
// 0043e01d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043e021  57                   push edi
// 0043e022  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0043e026  32c0                 xor al, al
// 0043e028  88442410             mov byte ptr [esp + 0x10], al
// 0043e02c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043e030  8844240c             mov byte ptr [esp + 0xc], al
// 0043e034  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043e038  50                   push eax
// 0043e039  51                   push ecx
// 0043e03a  52                   push edx
// 0043e03b  56                   push esi
// 0043e03c  57                   push edi
// 0043e03d  53                   push ebx
// 0043e03e  e83dfdffff           call 0x43dd80
// 0043e043  8bc7                 mov eax, edi
// 0043e045  2bc3                 sub eax, ebx
// 0043e047  83c418               add esp, 0x18
// 0043e04a  c1f804               sar eax, 4
// 0043e04d  c1e004               shl eax, 4
// 0043e050  5f                   pop edi
// 0043e051  03c6                 add eax, esi
// 0043e053  5e                   pop esi
// 0043e054  5b                   pop ebx
// 0043e055  83c408               add esp, 8
// 0043e058  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
