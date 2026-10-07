// roc 2009-06 005cc760  unit: RBX::Reflection::UTuple::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc760
//
// 005cc760  6aff                 push -1
// 005cc762  687b9c8600           push 0x869c7b
// 005cc767  64a100000000         mov eax, dword ptr fs:[0]
// 005cc76d  50                   push eax
// 005cc76e  64892500000000       mov dword ptr fs:[0], esp
// 005cc775  51                   push ecx
// 005cc776  56                   push esi
// 005cc777  6a1c                 push 0x1c
// 005cc779  8bf1                 mov esi, ecx
// 005cc77b  e8b8c21400           call 0x718a38
// 005cc780  83c404               add esp, 4
// 005cc783  89442404             mov dword ptr [esp + 4], eax
// 005cc787  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cc78f  85c0                 test eax, eax
// 005cc791  740e                 je 0x5cc7a1
// 005cc793  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005cc797  51                   push ecx
// 005cc798  8bc8                 mov ecx, eax
// 005cc79a  e801ffffff           call 0x5cc6a0
// 005cc79f  eb02                 jmp 0x5cc7a3
// 005cc7a1  33c0                 xor eax, eax
// 005cc7a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cc7a7  8906                 mov dword ptr [esi], eax
// 005cc7a9  8bc6                 mov eax, esi
// 005cc7ab  5e                   pop esi
// 005cc7ac  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc7b3  83c410               add esp, 0x10
// 005cc7b6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@QAE@ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
