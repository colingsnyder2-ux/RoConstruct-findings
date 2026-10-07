// roc 2008-06 00633900  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633900
//
// 00633900  6aff                 push -1
// 00633902  683bf47b00           push 0x7bf43b
// 00633907  64a100000000         mov eax, dword ptr fs:[0]
// 0063390d  50                   push eax
// 0063390e  64892500000000       mov dword ptr fs:[0], esp
// 00633915  51                   push ecx
// 00633916  56                   push esi
// 00633917  6a28                 push 0x28
// 00633919  8bf1                 mov esi, ecx
// 0063391b  e800d00600           call 0x6a0920
// 00633920  83c404               add esp, 4
// 00633923  89442404             mov dword ptr [esp + 4], eax
// 00633927  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063392f  85c0                 test eax, eax
// 00633931  740e                 je 0x633941
// 00633933  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00633937  51                   push ecx
// 00633938  8bc8                 mov ecx, eax
// 0063393a  e861feffff           call 0x6337a0
// 0063393f  eb02                 jmp 0x633943
// 00633941  33c0                 xor eax, eax
// 00633943  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633947  8906                 mov dword ptr [esi], eax
// 00633949  8bc6                 mov eax, esi
// 0063394b  5e                   pop esi
// 0063394c  64890d00000000       mov dword ptr fs:[0], ecx
// 00633953  83c410               add esp, 0x10
// 00633956  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
