// roc 2009-06 005cc700  unit: RBX::Reflection::UTuple::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc700
//
// 005cc700  6aff                 push -1
// 005cc702  687b9c8600           push 0x869c7b
// 005cc707  64a100000000         mov eax, dword ptr fs:[0]
// 005cc70d  50                   push eax
// 005cc70e  64892500000000       mov dword ptr fs:[0], esp
// 005cc715  51                   push ecx
// 005cc716  56                   push esi
// 005cc717  6a1c                 push 0x1c
// 005cc719  8bf1                 mov esi, ecx
// 005cc71b  e818c31400           call 0x718a38
// 005cc720  83c404               add esp, 4
// 005cc723  89442404             mov dword ptr [esp + 4], eax
// 005cc727  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cc72f  85c0                 test eax, eax
// 005cc731  741b                 je 0x5cc74e
// 005cc733  83c604               add esi, 4
// 005cc736  56                   push esi
// 005cc737  8bc8                 mov ecx, eax
// 005cc739  e862ffffff           call 0x5cc6a0
// 005cc73e  5e                   pop esi
// 005cc73f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005cc743  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc74a  83c410               add esp, 0x10
// 005cc74d  c3                   ret 
// 005cc74e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cc752  33c0                 xor eax, eax
// 005cc754  5e                   pop esi
// 005cc755  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc75c  83c410               add esp, 0x10
// 005cc75f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
