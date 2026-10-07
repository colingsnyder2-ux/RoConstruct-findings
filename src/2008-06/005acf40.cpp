// roc 2008-06 005acf40  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005acf40
//
// 005acf40  6aff                 push -1
// 005acf42  683bf47b00           push 0x7bf43b
// 005acf47  64a100000000         mov eax, dword ptr fs:[0]
// 005acf4d  50                   push eax
// 005acf4e  64892500000000       mov dword ptr fs:[0], esp
// 005acf55  51                   push ecx
// 005acf56  56                   push esi
// 005acf57  6a1c                 push 0x1c
// 005acf59  8bf1                 mov esi, ecx
// 005acf5b  e8c0390f00           call 0x6a0920
// 005acf60  83c404               add esp, 4
// 005acf63  89442404             mov dword ptr [esp + 4], eax
// 005acf67  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005acf6f  85c0                 test eax, eax
// 005acf71  740e                 je 0x5acf81
// 005acf73  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005acf77  51                   push ecx
// 005acf78  8bc8                 mov ecx, eax
// 005acf7a  e831fdffff           call 0x5accb0
// 005acf7f  eb02                 jmp 0x5acf83
// 005acf81  33c0                 xor eax, eax
// 005acf83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005acf87  8906                 mov dword ptr [esi], eax
// 005acf89  8bc6                 mov eax, esi
// 005acf8b  5e                   pop esi
// 005acf8c  64890d00000000       mov dword ptr fs:[0], ecx
// 005acf93  83c410               add esp, 0x10
// 005acf96  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@QAE@ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
