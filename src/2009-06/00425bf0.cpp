// roc 2009-06 00425bf0  unit: RBX::Security::VContext::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00425bf0
//
// 00425bf0  6aff                 push -1
// 00425bf2  6851ed8400           push 0x84ed51
// 00425bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00425bfd  50                   push eax
// 00425bfe  64892500000000       mov dword ptr fs:[0], esp
// 00425c05  51                   push ecx
// 00425c06  56                   push esi
// 00425c07  8b742418             mov esi, dword ptr [esp + 0x18]
// 00425c0b  89742418             mov dword ptr [esp + 0x18], esi
// 00425c0f  89742404             mov dword ptr [esp + 4], esi
// 00425c13  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00425c1b  85f6                 test esi, esi
// 00425c1d  742e                 je 0x425c4d
// 00425c1f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00425c23  8b08                 mov ecx, dword ptr [eax]
// 00425c25  890e                 mov dword ptr [esi], ecx
// 00425c27  8b4804               mov ecx, dword ptr [eax + 4]
// 00425c2a  85c9                 test ecx, ecx
// 00425c2c  741a                 je 0x425c48
// 00425c2e  8b11                 mov edx, dword ptr [ecx]
// 00425c30  8b4208               mov eax, dword ptr [edx + 8]
// 00425c33  ffd0                 call eax
// 00425c35  894604               mov dword ptr [esi + 4], eax
// 00425c38  5e                   pop esi
// 00425c39  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00425c3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00425c44  83c410               add esp, 0x10
// 00425c47  c3                   ret 
// 00425c48  33c0                 xor eax, eax
// 00425c4a  894604               mov dword ptr [esi + 4], eax
// 00425c4d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00425c51  5e                   pop esi
// 00425c52  64890d00000000       mov dword ptr fs:[0], ecx
// 00425c59  83c410               add esp, 0x10
// 00425c5c  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Construct@VValue@Reflection@RBX@@V123@@std@@YAXPAVValue@Reflection@RBX@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
