// roc 2007-03 0053b490  unit: seg_00530000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b490
//
// 0053b490  6aff                 push -1
// 0053b492  686bc37500           push 0x75c36b
// 0053b497  64a100000000         mov eax, dword ptr fs:[0]
// 0053b49d  50                   push eax
// 0053b49e  64892500000000       mov dword ptr fs:[0], esp
// 0053b4a5  51                   push ecx
// 0053b4a6  56                   push esi
// 0053b4a7  6a14                 push 0x14
// 0053b4a9  8bf1                 mov esi, ecx
// 0053b4ab  e8582c0e00           call 0x61e108
// 0053b4b0  83c404               add esp, 4
// 0053b4b3  89442404             mov dword ptr [esp + 4], eax
// 0053b4b7  85c0                 test eax, eax
// 0053b4b9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053b4c1  740e                 je 0x53b4d1
// 0053b4c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053b4c7  51                   push ecx
// 0053b4c8  8bc8                 mov ecx, eax
// 0053b4ca  e8e1f9ffff           call 0x53aeb0
// 0053b4cf  eb02                 jmp 0x53b4d3
// 0053b4d1  33c0                 xor eax, eax
// 0053b4d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053b4d7  8906                 mov dword ptr [esi], eax
// 0053b4d9  8bc6                 mov eax, esi
// 0053b4db  5e                   pop esi
// 0053b4dc  64890d00000000       mov dword ptr fs:[0], ecx
// 0053b4e3  83c410               add esp, 0x10
// 0053b4e6  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@QAE@ABV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
