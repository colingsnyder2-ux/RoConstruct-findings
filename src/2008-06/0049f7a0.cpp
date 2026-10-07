// roc 2008-06 0049f7a0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f7a0
//
// 0049f7a0  6aff                 push -1
// 0049f7a2  683bf47b00           push 0x7bf43b
// 0049f7a7  64a100000000         mov eax, dword ptr fs:[0]
// 0049f7ad  50                   push eax
// 0049f7ae  64892500000000       mov dword ptr fs:[0], esp
// 0049f7b5  51                   push ecx
// 0049f7b6  56                   push esi
// 0049f7b7  6a28                 push 0x28
// 0049f7b9  8bf1                 mov esi, ecx
// 0049f7bb  e860112000           call 0x6a0920
// 0049f7c0  83c404               add esp, 4
// 0049f7c3  89442404             mov dword ptr [esp + 4], eax
// 0049f7c7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049f7cf  85c0                 test eax, eax
// 0049f7d1  740e                 je 0x49f7e1
// 0049f7d3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049f7d7  51                   push ecx
// 0049f7d8  8bc8                 mov ecx, eax
// 0049f7da  e8d1fdffff           call 0x49f5b0
// 0049f7df  eb02                 jmp 0x49f7e3
// 0049f7e1  33c0                 xor eax, eax
// 0049f7e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049f7e7  8906                 mov dword ptr [esi], eax
// 0049f7e9  8bc6                 mov eax, esi
// 0049f7eb  5e                   pop esi
// 0049f7ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f7f3  83c410               add esp, 0x10
// 0049f7f6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
