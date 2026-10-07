// roc 2008-06 004b1aa0  unit: std::X::$$A6AXXZV?$allocator::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1aa0
//
// 004b1aa0  6aff                 push -1
// 004b1aa2  683bf47b00           push 0x7bf43b
// 004b1aa7  64a100000000         mov eax, dword ptr fs:[0]
// 004b1aad  50                   push eax
// 004b1aae  64892500000000       mov dword ptr fs:[0], esp
// 004b1ab5  51                   push ecx
// 004b1ab6  56                   push esi
// 004b1ab7  6a28                 push 0x28
// 004b1ab9  8bf1                 mov esi, ecx
// 004b1abb  e860ee1e00           call 0x6a0920
// 004b1ac0  83c404               add esp, 4
// 004b1ac3  89442404             mov dword ptr [esp + 4], eax
// 004b1ac7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b1acf  85c0                 test eax, eax
// 004b1ad1  740e                 je 0x4b1ae1
// 004b1ad3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b1ad7  51                   push ecx
// 004b1ad8  8bc8                 mov ecx, eax
// 004b1ada  e861feffff           call 0x4b1940
// 004b1adf  eb02                 jmp 0x4b1ae3
// 004b1ae1  33c0                 xor eax, eax
// 004b1ae3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1ae7  8906                 mov dword ptr [esi], eax
// 004b1ae9  8bc6                 mov eax, esi
// 004b1aeb  5e                   pop esi
// 004b1aec  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1af3  83c410               add esp, 0x10
// 004b1af6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
