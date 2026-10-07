// roc 2010-06 00426c00  unit: RBX::Security::VContext::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00426c00
//
// 00426c00  6aff                 push -1
// 00426c02  6811a69a00           push 0x9aa611
// 00426c07  64a100000000         mov eax, dword ptr fs:[0]
// 00426c0d  50                   push eax
// 00426c0e  64892500000000       mov dword ptr fs:[0], esp
// 00426c15  51                   push ecx
// 00426c16  56                   push esi
// 00426c17  8b742418             mov esi, dword ptr [esp + 0x18]
// 00426c1b  89742418             mov dword ptr [esp + 0x18], esi
// 00426c1f  89742404             mov dword ptr [esp + 4], esi
// 00426c23  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00426c2b  85f6                 test esi, esi
// 00426c2d  742e                 je 0x426c5d
// 00426c2f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00426c33  8b08                 mov ecx, dword ptr [eax]
// 00426c35  890e                 mov dword ptr [esi], ecx
// 00426c37  8b4804               mov ecx, dword ptr [eax + 4]
// 00426c3a  85c9                 test ecx, ecx
// 00426c3c  741a                 je 0x426c58
// 00426c3e  8b11                 mov edx, dword ptr [ecx]
// 00426c40  8b4208               mov eax, dword ptr [edx + 8]
// 00426c43  ffd0                 call eax
// 00426c45  894604               mov dword ptr [esi + 4], eax
// 00426c48  5e                   pop esi
// 00426c49  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00426c4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00426c54  83c410               add esp, 0x10
// 00426c57  c3                   ret 
// 00426c58  33c0                 xor eax, eax
// 00426c5a  894604               mov dword ptr [esi + 4], eax
// 00426c5d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00426c61  5e                   pop esi
// 00426c62  64890d00000000       mov dword ptr fs:[0], ecx
// 00426c69  83c410               add esp, 0x10
// 00426c6c  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Construct@VValue@Reflection@RBX@@V123@@std@@YAXPAVValue@Reflection@RBX@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
