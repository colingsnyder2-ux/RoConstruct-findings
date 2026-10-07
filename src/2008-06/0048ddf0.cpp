// roc 2008-06 0048ddf0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ddf0
//
// 0048ddf0  6aff                 push -1
// 0048ddf2  683bf47b00           push 0x7bf43b
// 0048ddf7  64a100000000         mov eax, dword ptr fs:[0]
// 0048ddfd  50                   push eax
// 0048ddfe  64892500000000       mov dword ptr fs:[0], esp
// 0048de05  51                   push ecx
// 0048de06  56                   push esi
// 0048de07  6a28                 push 0x28
// 0048de09  8bf1                 mov esi, ecx
// 0048de0b  e8102b2100           call 0x6a0920
// 0048de10  83c404               add esp, 4
// 0048de13  89442404             mov dword ptr [esp + 4], eax
// 0048de17  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048de1f  85c0                 test eax, eax
// 0048de21  740e                 je 0x48de31
// 0048de23  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048de27  51                   push ecx
// 0048de28  8bc8                 mov ecx, eax
// 0048de2a  e801feffff           call 0x48dc30
// 0048de2f  eb02                 jmp 0x48de33
// 0048de31  33c0                 xor eax, eax
// 0048de33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048de37  8906                 mov dword ptr [esi], eax
// 0048de39  8bc6                 mov eax, esi
// 0048de3b  5e                   pop esi
// 0048de3c  64890d00000000       mov dword ptr fs:[0], ecx
// 0048de43  83c410               add esp, 0x10
// 0048de46  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
