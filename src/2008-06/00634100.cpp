// roc 2008-06 00634100  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634100
//
// 00634100  6aff                 push -1
// 00634102  683bf47b00           push 0x7bf43b
// 00634107  64a100000000         mov eax, dword ptr fs:[0]
// 0063410d  50                   push eax
// 0063410e  64892500000000       mov dword ptr fs:[0], esp
// 00634115  51                   push ecx
// 00634116  56                   push esi
// 00634117  6a28                 push 0x28
// 00634119  8bf1                 mov esi, ecx
// 0063411b  e800c80600           call 0x6a0920
// 00634120  83c404               add esp, 4
// 00634123  89442404             mov dword ptr [esp + 4], eax
// 00634127  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063412f  85c0                 test eax, eax
// 00634131  740e                 je 0x634141
// 00634133  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00634137  51                   push ecx
// 00634138  8bc8                 mov ecx, eax
// 0063413a  e861feffff           call 0x633fa0
// 0063413f  eb02                 jmp 0x634143
// 00634141  33c0                 xor eax, eax
// 00634143  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634147  8906                 mov dword ptr [esi], eax
// 00634149  8bc6                 mov eax, esi
// 0063414b  5e                   pop esi
// 0063414c  64890d00000000       mov dword ptr fs:[0], ecx
// 00634153  83c410               add esp, 0x10
// 00634156  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
