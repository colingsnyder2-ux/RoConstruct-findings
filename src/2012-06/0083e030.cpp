// roc 2012-06 0083e030  unit: seg_00830000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083e030
//
// 0083e030  56                   push esi
// 0083e031  8b742408             mov esi, dword ptr [esp + 8]
// 0083e035  6a04                 push 4
// 0083e037  56                   push esi
// 0083e038  e8034bffff           call 0x832b40
// 0083e03d  83c408               add esp, 8
// 0083e040  85c0                 test eax, eax
// 0083e042  7406                 je 0x83e04a
// 0083e044  c70018000000         mov dword ptr [eax], 0x18
// 0083e04a  a1d013de00           mov eax, dword ptr [0xde13d0]
// 0083e04f  50                   push eax
// 0083e050  68f0d8ffff           push 0xffffd8f0
// 0083e055  56                   push esi
// 0083e056  e8e542ffff           call 0x832340
// 0083e05b  6afe                 push -2
// 0083e05d  56                   push esi
// 0083e05e  e86d46ffff           call 0x8326d0
// 0083e063  83c414               add esp, 0x14
// 0083e066  b801000000           mov eax, 1
// 0083e06b  5e                   pop esi
// 0083e06c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushYellow@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
