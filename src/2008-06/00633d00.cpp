// roc 2008-06 00633d00  unit: std::X::ZV?$allocator::$$A6AXN::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633d00
//
// 00633d00  6aff                 push -1
// 00633d02  683bf47b00           push 0x7bf43b
// 00633d07  64a100000000         mov eax, dword ptr fs:[0]
// 00633d0d  50                   push eax
// 00633d0e  64892500000000       mov dword ptr fs:[0], esp
// 00633d15  51                   push ecx
// 00633d16  56                   push esi
// 00633d17  6a28                 push 0x28
// 00633d19  8bf1                 mov esi, ecx
// 00633d1b  e800cc0600           call 0x6a0920
// 00633d20  83c404               add esp, 4
// 00633d23  89442404             mov dword ptr [esp + 4], eax
// 00633d27  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633d2f  85c0                 test eax, eax
// 00633d31  740e                 je 0x633d41
// 00633d33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00633d37  51                   push ecx
// 00633d38  8bc8                 mov ecx, eax
// 00633d3a  e861feffff           call 0x633ba0
// 00633d3f  eb02                 jmp 0x633d43
// 00633d41  33c0                 xor eax, eax
// 00633d43  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633d47  8906                 mov dword ptr [esi], eax
// 00633d49  8bc6                 mov eax, esi
// 00633d4b  5e                   pop esi
// 00633d4c  64890d00000000       mov dword ptr fs:[0], ecx
// 00633d53  83c410               add esp, 0x10
// 00633d56  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
