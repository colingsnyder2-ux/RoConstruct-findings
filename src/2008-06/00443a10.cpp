// roc 2008-06 00443a10  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443a10
//
// 00443a10  83ec08               sub esp, 8
// 00443a13  8b542414             mov edx, dword ptr [esp + 0x14]
// 00443a17  53                   push ebx
// 00443a18  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00443a1c  56                   push esi
// 00443a1d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00443a21  57                   push edi
// 00443a22  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00443a26  32c0                 xor al, al
// 00443a28  88442410             mov byte ptr [esp + 0x10], al
// 00443a2c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00443a30  8844240c             mov byte ptr [esp + 0xc], al
// 00443a34  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00443a38  50                   push eax
// 00443a39  51                   push ecx
// 00443a3a  52                   push edx
// 00443a3b  56                   push esi
// 00443a3c  57                   push edi
// 00443a3d  53                   push ebx
// 00443a3e  e8bdf9ffff           call 0x443400
// 00443a43  8bc7                 mov eax, edi
// 00443a45  2bc3                 sub eax, ebx
// 00443a47  83c418               add esp, 0x18
// 00443a4a  c1f804               sar eax, 4
// 00443a4d  c1e004               shl eax, 4
// 00443a50  5f                   pop edi
// 00443a51  03c6                 add eax, esi
// 00443a53  5e                   pop esi
// 00443a54  5b                   pop ebx
// 00443a55  83c408               add esp, 8
// 00443a58  c3                   ret 
// library rbxgs/script\ScriptEvent.cpp (function ??$_Copy_opt@PAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@@std@@YAPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU1234@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
