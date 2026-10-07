// roc 2009-06 005ff300  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ff300
//
// 005ff300  6aff                 push -1
// 005ff302  687b9c8600           push 0x869c7b
// 005ff307  64a100000000         mov eax, dword ptr fs:[0]
// 005ff30d  50                   push eax
// 005ff30e  64892500000000       mov dword ptr fs:[0], esp
// 005ff315  51                   push ecx
// 005ff316  56                   push esi
// 005ff317  6a1c                 push 0x1c
// 005ff319  8bf1                 mov esi, ecx
// 005ff31b  e818971100           call 0x718a38
// 005ff320  83c404               add esp, 4
// 005ff323  89442404             mov dword ptr [esp + 4], eax
// 005ff327  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ff32f  85c0                 test eax, eax
// 005ff331  740e                 je 0x5ff341
// 005ff333  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ff337  51                   push ecx
// 005ff338  8bc8                 mov ecx, eax
// 005ff33a  e851faffff           call 0x5fed90
// 005ff33f  eb02                 jmp 0x5ff343
// 005ff341  33c0                 xor eax, eax
// 005ff343  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff347  8906                 mov dword ptr [esi], eax
// 005ff349  8bc6                 mov eax, esi
// 005ff34b  5e                   pop esi
// 005ff34c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff353  83c410               add esp, 0x10
// 005ff356  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@QAE@ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
