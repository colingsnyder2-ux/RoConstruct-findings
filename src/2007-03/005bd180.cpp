// roc 2007-03 005bd180  unit: seg_005b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd180
//
// 005bd180  56                   push esi
// 005bd181  8b742408             mov esi, dword ptr [esp + 8]
// 005bd185  6a04                 push 4
// 005bd187  56                   push esi
// 005bd188  e8f3c8ffff           call 0x5b9a80
// 005bd18d  83c408               add esp, 8
// 005bd190  85c0                 test eax, eax
// 005bd192  7406                 je 0x5bd19a
// 005bd194  c7001c000000         mov dword ptr [eax], 0x1c
// 005bd19a  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd19f  50                   push eax
// 005bd1a0  68f0d8ffff           push 0xffffd8f0
// 005bd1a5  56                   push esi
// 005bd1a6  e825c1ffff           call 0x5b92d0
// 005bd1ab  6afe                 push -2
// 005bd1ad  56                   push esi
// 005bd1ae  e87dc4ffff           call 0x5b9630
// 005bd1b3  83c414               add esp, 0x14
// 005bd1b6  b801000000           mov eax, 1
// 005bd1bb  5e                   pop esi
// 005bd1bc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGreen@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
