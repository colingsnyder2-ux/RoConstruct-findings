// roc 2007-03 005bd040  unit: seg_005b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd040
//
// 005bd040  56                   push esi
// 005bd041  8b742408             mov esi, dword ptr [esp + 8]
// 005bd045  6a04                 push 4
// 005bd047  56                   push esi
// 005bd048  e833caffff           call 0x5b9a80
// 005bd04d  83c408               add esp, 8
// 005bd050  85c0                 test eax, eax
// 005bd052  7406                 je 0x5bd05a
// 005bd054  c70001000000         mov dword ptr [eax], 1
// 005bd05a  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd05f  50                   push eax
// 005bd060  68f0d8ffff           push 0xffffd8f0
// 005bd065  56                   push esi
// 005bd066  e865c2ffff           call 0x5b92d0
// 005bd06b  6afe                 push -2
// 005bd06d  56                   push esi
// 005bd06e  e8bdc5ffff           call 0x5b9630
// 005bd073  83c414               add esp, 0x14
// 005bd076  b801000000           mov eax, 1
// 005bd07b  5e                   pop esi
// 005bd07c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushWhite@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
