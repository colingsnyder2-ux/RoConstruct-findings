// roc 2007-03 005bd100  unit: seg_005b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd100
//
// 005bd100  56                   push esi
// 005bd101  8b742408             mov esi, dword ptr [esp + 8]
// 005bd105  6a04                 push 4
// 005bd107  56                   push esi
// 005bd108  e873c9ffff           call 0x5b9a80
// 005bd10d  83c408               add esp, 8
// 005bd110  85c0                 test eax, eax
// 005bd112  7406                 je 0x5bd11a
// 005bd114  c7001a000000         mov dword ptr [eax], 0x1a
// 005bd11a  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd11f  50                   push eax
// 005bd120  68f0d8ffff           push 0xffffd8f0
// 005bd125  56                   push esi
// 005bd126  e8a5c1ffff           call 0x5b92d0
// 005bd12b  6afe                 push -2
// 005bd12d  56                   push esi
// 005bd12e  e8fdc4ffff           call 0x5b9630
// 005bd133  83c414               add esp, 0x14
// 005bd136  b801000000           mov eax, 1
// 005bd13b  5e                   pop esi
// 005bd13c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlack@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
