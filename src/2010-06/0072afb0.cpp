// roc 2010-06 0072afb0  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072afb0
//
// 0072afb0  56                   push esi
// 0072afb1  8b742408             mov esi, dword ptr [esp + 8]
// 0072afb5  6a04                 push 4
// 0072afb7  56                   push esi
// 0072afb8  e8e36fffff           call 0x721fa0
// 0072afbd  83c408               add esp, 8
// 0072afc0  85c0                 test eax, eax
// 0072afc2  7406                 je 0x72afca
// 0072afc4  c70001000000         mov dword ptr [eax], 1
// 0072afca  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0072afcf  50                   push eax
// 0072afd0  68f0d8ffff           push 0xffffd8f0
// 0072afd5  56                   push esi
// 0072afd6  e8c567ffff           call 0x7217a0
// 0072afdb  6afe                 push -2
// 0072afdd  56                   push esi
// 0072afde  e84d6bffff           call 0x721b30
// 0072afe3  83c414               add esp, 0x14
// 0072afe6  b801000000           mov eax, 1
// 0072afeb  5e                   pop esi
// 0072afec  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushWhite@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
