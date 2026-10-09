// roc 2009-12 004267c0  unit: RBX::Security::VContext::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004267c0
//
// 004267c0  6aff                 push -1
// 004267c2  6891939200           push 0x929391
// 004267c7  64a100000000         mov eax, dword ptr fs:[0]
// 004267cd  50                   push eax
// 004267ce  64892500000000       mov dword ptr fs:[0], esp
// 004267d5  51                   push ecx
// 004267d6  56                   push esi
// 004267d7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004267db  89742418             mov dword ptr [esp + 0x18], esi
// 004267df  89742404             mov dword ptr [esp + 4], esi
// 004267e3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004267eb  85f6                 test esi, esi
// 004267ed  742e                 je 0x42681d
// 004267ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004267f3  8b08                 mov ecx, dword ptr [eax]
// 004267f5  890e                 mov dword ptr [esi], ecx
// 004267f7  8b4804               mov ecx, dword ptr [eax + 4]
// 004267fa  85c9                 test ecx, ecx
// 004267fc  741a                 je 0x426818
// 004267fe  8b11                 mov edx, dword ptr [ecx]
// 00426800  8b4208               mov eax, dword ptr [edx + 8]
// 00426803  ffd0                 call eax
// 00426805  894604               mov dword ptr [esi + 4], eax
// 00426808  5e                   pop esi
// 00426809  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042680d  64890d00000000       mov dword ptr fs:[0], ecx
// 00426814  83c410               add esp, 0x10
// 00426817  c3                   ret 
// 00426818  33c0                 xor eax, eax
// 0042681a  894604               mov dword ptr [esi + 4], eax
// 0042681d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00426821  5e                   pop esi
// 00426822  64890d00000000       mov dword ptr fs:[0], ecx
// 00426829  83c410               add esp, 0x10
// 0042682c  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Construct@VValue@Reflection@RBX@@V123@@std@@YAXPAVValue@Reflection@RBX@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
