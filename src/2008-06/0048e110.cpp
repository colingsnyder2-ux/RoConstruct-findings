// roc 2008-06 0048e110  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e110
//
// 0048e110  6aff                 push -1
// 0048e112  683bf47b00           push 0x7bf43b
// 0048e117  64a100000000         mov eax, dword ptr fs:[0]
// 0048e11d  50                   push eax
// 0048e11e  64892500000000       mov dword ptr fs:[0], esp
// 0048e125  51                   push ecx
// 0048e126  56                   push esi
// 0048e127  6a28                 push 0x28
// 0048e129  8bf1                 mov esi, ecx
// 0048e12b  e8f0272100           call 0x6a0920
// 0048e130  83c404               add esp, 4
// 0048e133  89442404             mov dword ptr [esp + 4], eax
// 0048e137  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048e13f  85c0                 test eax, eax
// 0048e141  740e                 je 0x48e151
// 0048e143  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048e147  51                   push ecx
// 0048e148  8bc8                 mov ecx, eax
// 0048e14a  e861feffff           call 0x48dfb0
// 0048e14f  eb02                 jmp 0x48e153
// 0048e151  33c0                 xor eax, eax
// 0048e153  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e157  8906                 mov dword ptr [esi], eax
// 0048e159  8bc6                 mov eax, esi
// 0048e15b  5e                   pop esi
// 0048e15c  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e163  83c410               add esp, 0x10
// 0048e166  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
