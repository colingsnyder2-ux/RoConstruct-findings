// roc 2012-06 0083dfb0  unit: seg_00830000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083dfb0
//
// 0083dfb0  56                   push esi
// 0083dfb1  8b742408             mov esi, dword ptr [esp + 8]
// 0083dfb5  6a04                 push 4
// 0083dfb7  56                   push esi
// 0083dfb8  e8834bffff           call 0x832b40
// 0083dfbd  83c408               add esp, 8
// 0083dfc0  85c0                 test eax, eax
// 0083dfc2  7406                 je 0x83dfca
// 0083dfc4  c700c7000000         mov dword ptr [eax], 0xc7
// 0083dfca  a1d013de00           mov eax, dword ptr [0xde13d0]
// 0083dfcf  50                   push eax
// 0083dfd0  68f0d8ffff           push 0xffffd8f0
// 0083dfd5  56                   push esi
// 0083dfd6  e86543ffff           call 0x832340
// 0083dfdb  6afe                 push -2
// 0083dfdd  56                   push esi
// 0083dfde  e8ed46ffff           call 0x8326d0
// 0083dfe3  83c414               add esp, 0x14
// 0083dfe6  b801000000           mov eax, 1
// 0083dfeb  5e                   pop esi
// 0083dfec  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushDarkGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
