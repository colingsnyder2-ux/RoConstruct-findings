// roc 2008-06 0058b220  unit: RBX::Reflection::UTuple::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b220
//
// 0058b220  6aff                 push -1
// 0058b222  683bf47b00           push 0x7bf43b
// 0058b227  64a100000000         mov eax, dword ptr fs:[0]
// 0058b22d  50                   push eax
// 0058b22e  64892500000000       mov dword ptr fs:[0], esp
// 0058b235  51                   push ecx
// 0058b236  56                   push esi
// 0058b237  6a1c                 push 0x1c
// 0058b239  8bf1                 mov esi, ecx
// 0058b23b  e8e0561100           call 0x6a0920
// 0058b240  83c404               add esp, 4
// 0058b243  89442404             mov dword ptr [esp + 4], eax
// 0058b247  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058b24f  85c0                 test eax, eax
// 0058b251  740e                 je 0x58b261
// 0058b253  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058b257  51                   push ecx
// 0058b258  8bc8                 mov ecx, eax
// 0058b25a  e801ffffff           call 0x58b160
// 0058b25f  eb02                 jmp 0x58b263
// 0058b261  33c0                 xor eax, eax
// 0058b263  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b267  8906                 mov dword ptr [esi], eax
// 0058b269  8bc6                 mov eax, esi
// 0058b26b  5e                   pop esi
// 0058b26c  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b273  83c410               add esp, 0x10
// 0058b276  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@QAE@ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
