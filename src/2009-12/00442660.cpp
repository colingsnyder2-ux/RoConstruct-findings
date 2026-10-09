// roc 2009-12 00442660  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442660
//
// 00442660  83ec08               sub esp, 8
// 00442663  8b542414             mov edx, dword ptr [esp + 0x14]
// 00442667  53                   push ebx
// 00442668  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0044266c  56                   push esi
// 0044266d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00442671  57                   push edi
// 00442672  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00442676  32c0                 xor al, al
// 00442678  88442410             mov byte ptr [esp + 0x10], al
// 0044267c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00442680  8844240c             mov byte ptr [esp + 0xc], al
// 00442684  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00442688  50                   push eax
// 00442689  51                   push ecx
// 0044268a  52                   push edx
// 0044268b  56                   push esi
// 0044268c  57                   push edi
// 0044268d  53                   push ebx
// 0044268e  e8fdfcffff           call 0x442390
// 00442693  8bc7                 mov eax, edi
// 00442695  2bc3                 sub eax, ebx
// 00442697  83c418               add esp, 0x18
// 0044269a  c1f804               sar eax, 4
// 0044269d  c1e004               shl eax, 4
// 004426a0  5f                   pop edi
// 004426a1  03c6                 add eax, esi
// 004426a3  5e                   pop esi
// 004426a4  5b                   pop ebx
// 004426a5  83c408               add esp, 8
// 004426a8  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
