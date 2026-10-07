// roc 2010-06 0060d670  unit: RBX::VScriptContext::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060d670
//
// 0060d670  6aff                 push -1
// 0060d672  684b1d9a00           push 0x9a1d4b
// 0060d677  64a100000000         mov eax, dword ptr fs:[0]
// 0060d67d  50                   push eax
// 0060d67e  64892500000000       mov dword ptr fs:[0], esp
// 0060d685  51                   push ecx
// 0060d686  56                   push esi
// 0060d687  6a28                 push 0x28
// 0060d689  8bf1                 mov esi, ecx
// 0060d68b  e810a31900           call 0x7a79a0
// 0060d690  83c404               add esp, 4
// 0060d693  89442404             mov dword ptr [esp + 4], eax
// 0060d697  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060d69f  85c0                 test eax, eax
// 0060d6a1  740e                 je 0x60d6b1
// 0060d6a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060d6a7  51                   push ecx
// 0060d6a8  8bc8                 mov ecx, eax
// 0060d6aa  e871e6ffff           call 0x60bd20
// 0060d6af  eb02                 jmp 0x60d6b3
// 0060d6b1  33c0                 xor eax, eax
// 0060d6b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060d6b7  8906                 mov dword ptr [esi], eax
// 0060d6b9  8bc6                 mov eax, esi
// 0060d6bb  5e                   pop esi
// 0060d6bc  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d6c3  83c410               add esp, 0x10
// 0060d6c6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
