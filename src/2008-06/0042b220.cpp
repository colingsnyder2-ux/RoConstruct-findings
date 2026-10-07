// roc 2008-06 0042b220  unit: EventHandler  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b220
//
// 0042b220  6aff                 push -1
// 0042b222  683bf47b00           push 0x7bf43b
// 0042b227  64a100000000         mov eax, dword ptr fs:[0]
// 0042b22d  50                   push eax
// 0042b22e  64892500000000       mov dword ptr fs:[0], esp
// 0042b235  51                   push ecx
// 0042b236  56                   push esi
// 0042b237  6a28                 push 0x28
// 0042b239  8bf1                 mov esi, ecx
// 0042b23b  e8e0562700           call 0x6a0920
// 0042b240  83c404               add esp, 4
// 0042b243  89442404             mov dword ptr [esp + 4], eax
// 0042b247  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042b24f  85c0                 test eax, eax
// 0042b251  740e                 je 0x42b261
// 0042b253  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042b257  51                   push ecx
// 0042b258  8bc8                 mov ecx, eax
// 0042b25a  e8b1fdffff           call 0x42b010
// 0042b25f  eb02                 jmp 0x42b263
// 0042b261  33c0                 xor eax, eax
// 0042b263  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042b267  8906                 mov dword ptr [esi], eax
// 0042b269  8bc6                 mov eax, esi
// 0042b26b  5e                   pop esi
// 0042b26c  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b273  83c410               add esp, 0x10
// 0042b276  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
