// roc 2008-06 00634990  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634990
//
// 00634990  6aff                 push -1
// 00634992  683bf47b00           push 0x7bf43b
// 00634997  64a100000000         mov eax, dword ptr fs:[0]
// 0063499d  50                   push eax
// 0063499e  64892500000000       mov dword ptr fs:[0], esp
// 006349a5  51                   push ecx
// 006349a6  56                   push esi
// 006349a7  6a28                 push 0x28
// 006349a9  8bf1                 mov esi, ecx
// 006349ab  e870bf0600           call 0x6a0920
// 006349b0  83c404               add esp, 4
// 006349b3  89442404             mov dword ptr [esp + 4], eax
// 006349b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006349bf  85c0                 test eax, eax
// 006349c1  740e                 je 0x6349d1
// 006349c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006349c7  51                   push ecx
// 006349c8  8bc8                 mov ecx, eax
// 006349ca  e861feffff           call 0x634830
// 006349cf  eb02                 jmp 0x6349d3
// 006349d1  33c0                 xor eax, eax
// 006349d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006349d7  8906                 mov dword ptr [esi], eax
// 006349d9  8bc6                 mov eax, esi
// 006349db  5e                   pop esi
// 006349dc  64890d00000000       mov dword ptr fs:[0], ecx
// 006349e3  83c410               add esp, 0x10
// 006349e6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
