// roc 2008-06 00577d00  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577d00
//
// 00577d00  6aff                 push -1
// 00577d02  683bf47b00           push 0x7bf43b
// 00577d07  64a100000000         mov eax, dword ptr fs:[0]
// 00577d0d  50                   push eax
// 00577d0e  64892500000000       mov dword ptr fs:[0], esp
// 00577d15  51                   push ecx
// 00577d16  56                   push esi
// 00577d17  6a28                 push 0x28
// 00577d19  8bf1                 mov esi, ecx
// 00577d1b  e8008c1200           call 0x6a0920
// 00577d20  83c404               add esp, 4
// 00577d23  89442404             mov dword ptr [esp + 4], eax
// 00577d27  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00577d2f  85c0                 test eax, eax
// 00577d31  740e                 je 0x577d41
// 00577d33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00577d37  51                   push ecx
// 00577d38  8bc8                 mov ecx, eax
// 00577d3a  e861feffff           call 0x577ba0
// 00577d3f  eb02                 jmp 0x577d43
// 00577d41  33c0                 xor eax, eax
// 00577d43  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577d47  8906                 mov dword ptr [esi], eax
// 00577d49  8bc6                 mov eax, esi
// 00577d4b  5e                   pop esi
// 00577d4c  64890d00000000       mov dword ptr fs:[0], ecx
// 00577d53  83c410               add esp, 0x10
// 00577d56  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
