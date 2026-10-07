// roc 2009-06 005fedf0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fedf0
//
// 005fedf0  6aff                 push -1
// 005fedf2  687b9c8600           push 0x869c7b
// 005fedf7  64a100000000         mov eax, dword ptr fs:[0]
// 005fedfd  50                   push eax
// 005fedfe  64892500000000       mov dword ptr fs:[0], esp
// 005fee05  51                   push ecx
// 005fee06  56                   push esi
// 005fee07  6a1c                 push 0x1c
// 005fee09  8bf1                 mov esi, ecx
// 005fee0b  e8289c1100           call 0x718a38
// 005fee10  83c404               add esp, 4
// 005fee13  89442404             mov dword ptr [esp + 4], eax
// 005fee17  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fee1f  85c0                 test eax, eax
// 005fee21  741b                 je 0x5fee3e
// 005fee23  83c604               add esi, 4
// 005fee26  56                   push esi
// 005fee27  8bc8                 mov ecx, eax
// 005fee29  e862ffffff           call 0x5fed90
// 005fee2e  5e                   pop esi
// 005fee2f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fee33  64890d00000000       mov dword ptr fs:[0], ecx
// 005fee3a  83c410               add esp, 0x10
// 005fee3d  c3                   ret 
// 005fee3e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fee42  33c0                 xor eax, eax
// 005fee44  5e                   pop esi
// 005fee45  64890d00000000       mov dword ptr fs:[0], ecx
// 005fee4c  83c410               add esp, 0x10
// 005fee4f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
