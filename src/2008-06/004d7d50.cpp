// roc 2008-06 004d7d50  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7d50
//
// 004d7d50  6aff                 push -1
// 004d7d52  683bf47b00           push 0x7bf43b
// 004d7d57  64a100000000         mov eax, dword ptr fs:[0]
// 004d7d5d  50                   push eax
// 004d7d5e  64892500000000       mov dword ptr fs:[0], esp
// 004d7d65  51                   push ecx
// 004d7d66  56                   push esi
// 004d7d67  6a28                 push 0x28
// 004d7d69  8bf1                 mov esi, ecx
// 004d7d6b  e8b08b1c00           call 0x6a0920
// 004d7d70  83c404               add esp, 4
// 004d7d73  89442404             mov dword ptr [esp + 4], eax
// 004d7d77  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d7d7f  85c0                 test eax, eax
// 004d7d81  740e                 je 0x4d7d91
// 004d7d83  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d7d87  51                   push ecx
// 004d7d88  8bc8                 mov ecx, eax
// 004d7d8a  e881fcffff           call 0x4d7a10
// 004d7d8f  eb02                 jmp 0x4d7d93
// 004d7d91  33c0                 xor eax, eax
// 004d7d93  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d7d97  8906                 mov dword ptr [esi], eax
// 004d7d99  8bc6                 mov eax, esi
// 004d7d9b  5e                   pop esi
// 004d7d9c  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7da3  83c410               add esp, 0x10
// 004d7da6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
