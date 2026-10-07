// roc 2008-06 004b1f20  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1f20
//
// 004b1f20  6aff                 push -1
// 004b1f22  683bf47b00           push 0x7bf43b
// 004b1f27  64a100000000         mov eax, dword ptr fs:[0]
// 004b1f2d  50                   push eax
// 004b1f2e  64892500000000       mov dword ptr fs:[0], esp
// 004b1f35  51                   push ecx
// 004b1f36  56                   push esi
// 004b1f37  6a28                 push 0x28
// 004b1f39  8bf1                 mov esi, ecx
// 004b1f3b  e8e0e91e00           call 0x6a0920
// 004b1f40  83c404               add esp, 4
// 004b1f43  89442404             mov dword ptr [esp + 4], eax
// 004b1f47  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b1f4f  85c0                 test eax, eax
// 004b1f51  740e                 je 0x4b1f61
// 004b1f53  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b1f57  51                   push ecx
// 004b1f58  8bc8                 mov ecx, eax
// 004b1f5a  e861feffff           call 0x4b1dc0
// 004b1f5f  eb02                 jmp 0x4b1f63
// 004b1f61  33c0                 xor eax, eax
// 004b1f63  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1f67  8906                 mov dword ptr [esi], eax
// 004b1f69  8bc6                 mov eax, esi
// 004b1f6b  5e                   pop esi
// 004b1f6c  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1f73  83c410               add esp, 0x10
// 004b1f76  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
