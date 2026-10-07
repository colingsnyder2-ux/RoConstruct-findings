// roc 2008-06 00556060  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556060
//
// 00556060  6aff                 push -1
// 00556062  683bf47b00           push 0x7bf43b
// 00556067  64a100000000         mov eax, dword ptr fs:[0]
// 0055606d  50                   push eax
// 0055606e  64892500000000       mov dword ptr fs:[0], esp
// 00556075  51                   push ecx
// 00556076  56                   push esi
// 00556077  6a28                 push 0x28
// 00556079  8bf1                 mov esi, ecx
// 0055607b  e8a0a81400           call 0x6a0920
// 00556080  83c404               add esp, 4
// 00556083  89442404             mov dword ptr [esp + 4], eax
// 00556087  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055608f  85c0                 test eax, eax
// 00556091  740e                 je 0x5560a1
// 00556093  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00556097  51                   push ecx
// 00556098  8bc8                 mov ecx, eax
// 0055609a  e861feffff           call 0x555f00
// 0055609f  eb02                 jmp 0x5560a3
// 005560a1  33c0                 xor eax, eax
// 005560a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005560a7  8906                 mov dword ptr [esi], eax
// 005560a9  8bc6                 mov eax, esi
// 005560ab  5e                   pop esi
// 005560ac  64890d00000000       mov dword ptr fs:[0], ecx
// 005560b3  83c410               add esp, 0x10
// 005560b6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
