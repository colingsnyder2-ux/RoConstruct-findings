// roc 2012-06 0083df30  unit: seg_00830000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083df30
//
// 0083df30  56                   push esi
// 0083df31  8b742408             mov esi, dword ptr [esp + 8]
// 0083df35  6a04                 push 4
// 0083df37  56                   push esi
// 0083df38  e8034cffff           call 0x832b40
// 0083df3d  83c408               add esp, 8
// 0083df40  85c0                 test eax, eax
// 0083df42  7406                 je 0x83df4a
// 0083df44  c70001000000         mov dword ptr [eax], 1
// 0083df4a  a1d013de00           mov eax, dword ptr [0xde13d0]
// 0083df4f  50                   push eax
// 0083df50  68f0d8ffff           push 0xffffd8f0
// 0083df55  56                   push esi
// 0083df56  e8e543ffff           call 0x832340
// 0083df5b  6afe                 push -2
// 0083df5d  56                   push esi
// 0083df5e  e86d47ffff           call 0x8326d0
// 0083df63  83c414               add esp, 0x14
// 0083df66  b801000000           mov eax, 1
// 0083df6b  5e                   pop esi
// 0083df6c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushWhite@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
