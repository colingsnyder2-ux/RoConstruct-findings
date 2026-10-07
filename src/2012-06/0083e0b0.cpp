// roc 2012-06 0083e0b0  unit: seg_00830000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083e0b0
//
// 0083e0b0  56                   push esi
// 0083e0b1  8b742408             mov esi, dword ptr [esp + 8]
// 0083e0b5  6a04                 push 4
// 0083e0b7  56                   push esi
// 0083e0b8  e8834affff           call 0x832b40
// 0083e0bd  83c408               add esp, 8
// 0083e0c0  85c0                 test eax, eax
// 0083e0c2  7406                 je 0x83e0ca
// 0083e0c4  c70017000000         mov dword ptr [eax], 0x17
// 0083e0ca  a1d013de00           mov eax, dword ptr [0xde13d0]
// 0083e0cf  50                   push eax
// 0083e0d0  68f0d8ffff           push 0xffffd8f0
// 0083e0d5  56                   push esi
// 0083e0d6  e86542ffff           call 0x832340
// 0083e0db  6afe                 push -2
// 0083e0dd  56                   push esi
// 0083e0de  e8ed45ffff           call 0x8326d0
// 0083e0e3  83c414               add esp, 0x14
// 0083e0e6  b801000000           mov eax, 1
// 0083e0eb  5e                   pop esi
// 0083e0ec  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlue@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
