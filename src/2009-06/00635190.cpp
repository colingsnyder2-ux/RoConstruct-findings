// roc 2009-06 00635190  unit: RBX::VScriptContext::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635190
//
// 00635190  6aff                 push -1
// 00635192  687b9c8600           push 0x869c7b
// 00635197  64a100000000         mov eax, dword ptr fs:[0]
// 0063519d  50                   push eax
// 0063519e  64892500000000       mov dword ptr fs:[0], esp
// 006351a5  51                   push ecx
// 006351a6  56                   push esi
// 006351a7  6a28                 push 0x28
// 006351a9  8bf1                 mov esi, ecx
// 006351ab  e888380e00           call 0x718a38
// 006351b0  83c404               add esp, 4
// 006351b3  89442404             mov dword ptr [esp + 4], eax
// 006351b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006351bf  85c0                 test eax, eax
// 006351c1  740e                 je 0x6351d1
// 006351c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006351c7  51                   push ecx
// 006351c8  8bc8                 mov ecx, eax
// 006351ca  e8c1e8ffff           call 0x633a90
// 006351cf  eb02                 jmp 0x6351d3
// 006351d1  33c0                 xor eax, eax
// 006351d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006351d7  8906                 mov dword ptr [esi], eax
// 006351d9  8bc6                 mov eax, esi
// 006351db  5e                   pop esi
// 006351dc  64890d00000000       mov dword ptr fs:[0], ecx
// 006351e3  83c410               add esp, 0x10
// 006351e6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
