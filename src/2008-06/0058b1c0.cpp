// roc 2008-06 0058b1c0  unit: RBX::Reflection::UTuple::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b1c0
//
// 0058b1c0  6aff                 push -1
// 0058b1c2  683bf47b00           push 0x7bf43b
// 0058b1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0058b1cd  50                   push eax
// 0058b1ce  64892500000000       mov dword ptr fs:[0], esp
// 0058b1d5  51                   push ecx
// 0058b1d6  56                   push esi
// 0058b1d7  6a1c                 push 0x1c
// 0058b1d9  8bf1                 mov esi, ecx
// 0058b1db  e840571100           call 0x6a0920
// 0058b1e0  83c404               add esp, 4
// 0058b1e3  89442404             mov dword ptr [esp + 4], eax
// 0058b1e7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058b1ef  85c0                 test eax, eax
// 0058b1f1  741b                 je 0x58b20e
// 0058b1f3  83c604               add esi, 4
// 0058b1f6  56                   push esi
// 0058b1f7  8bc8                 mov ecx, eax
// 0058b1f9  e862ffffff           call 0x58b160
// 0058b1fe  5e                   pop esi
// 0058b1ff  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058b203  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b20a  83c410               add esp, 0x10
// 0058b20d  c3                   ret 
// 0058b20e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b212  33c0                 xor eax, eax
// 0058b214  5e                   pop esi
// 0058b215  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b21c  83c410               add esp, 0x10
// 0058b21f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
