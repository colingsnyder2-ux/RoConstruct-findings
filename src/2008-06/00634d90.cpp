// roc 2008-06 00634d90  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634d90
//
// 00634d90  6aff                 push -1
// 00634d92  683bf47b00           push 0x7bf43b
// 00634d97  64a100000000         mov eax, dword ptr fs:[0]
// 00634d9d  50                   push eax
// 00634d9e  64892500000000       mov dword ptr fs:[0], esp
// 00634da5  51                   push ecx
// 00634da6  56                   push esi
// 00634da7  6a28                 push 0x28
// 00634da9  8bf1                 mov esi, ecx
// 00634dab  e870bb0600           call 0x6a0920
// 00634db0  83c404               add esp, 4
// 00634db3  89442404             mov dword ptr [esp + 4], eax
// 00634db7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00634dbf  85c0                 test eax, eax
// 00634dc1  740e                 je 0x634dd1
// 00634dc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00634dc7  51                   push ecx
// 00634dc8  8bc8                 mov ecx, eax
// 00634dca  e861feffff           call 0x634c30
// 00634dcf  eb02                 jmp 0x634dd3
// 00634dd1  33c0                 xor eax, eax
// 00634dd3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634dd7  8906                 mov dword ptr [esi], eax
// 00634dd9  8bc6                 mov eax, esi
// 00634ddb  5e                   pop esi
// 00634ddc  64890d00000000       mov dword ptr fs:[0], ecx
// 00634de3  83c410               add esp, 0x10
// 00634de6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
