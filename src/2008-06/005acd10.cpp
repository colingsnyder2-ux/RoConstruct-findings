// roc 2008-06 005acd10  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005acd10
//
// 005acd10  6aff                 push -1
// 005acd12  683bf47b00           push 0x7bf43b
// 005acd17  64a100000000         mov eax, dword ptr fs:[0]
// 005acd1d  50                   push eax
// 005acd1e  64892500000000       mov dword ptr fs:[0], esp
// 005acd25  51                   push ecx
// 005acd26  56                   push esi
// 005acd27  6a1c                 push 0x1c
// 005acd29  8bf1                 mov esi, ecx
// 005acd2b  e8f03b0f00           call 0x6a0920
// 005acd30  83c404               add esp, 4
// 005acd33  89442404             mov dword ptr [esp + 4], eax
// 005acd37  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005acd3f  85c0                 test eax, eax
// 005acd41  741b                 je 0x5acd5e
// 005acd43  83c604               add esi, 4
// 005acd46  56                   push esi
// 005acd47  8bc8                 mov ecx, eax
// 005acd49  e862ffffff           call 0x5accb0
// 005acd4e  5e                   pop esi
// 005acd4f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005acd53  64890d00000000       mov dword ptr fs:[0], ecx
// 005acd5a  83c410               add esp, 0x10
// 005acd5d  c3                   ret 
// 005acd5e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005acd62  33c0                 xor eax, eax
// 005acd64  5e                   pop esi
// 005acd65  64890d00000000       mov dword ptr fs:[0], ecx
// 005acd6c  83c410               add esp, 0x10
// 005acd6f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
