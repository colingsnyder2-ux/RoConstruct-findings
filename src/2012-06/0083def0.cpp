// from server: 100% by tester
// roc 2007-03 005bd000  unit: seg_005b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd000
//
// 005bd000  56                   push esi
// 005bd001  8b742408             mov esi, dword ptr [esp + 8]
// 005bd005  6a04                 push 4
// 005bd007  56                   push esi
// 005bd008  e873caffff           call 0x5b9a80
// 005bd00d  83c408               add esp, 8
// 005bd010  85c0                 test eax, eax
// 005bd012  7406                 je 0x5bd01a
// 005bd014  c70015000000         mov dword ptr [eax], 0x15
// 005bd01a  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd01f  50                   push eax
// 005bd020  68f0d8ffff           push 0xffffd8f0
// 005bd025  56                   push esi
// 005bd026  e8a5c2ffff           call 0x5b92d0
// 005bd02b  6afe                 push -2
// 005bd02d  56                   push esi
// 005bd02e  e8fdc5ffff           call 0x5b9630
// 005bd033  83c414               add esp, 0x14
// 005bd036  b801000000           mov eax, 1
// 005bd03b  5e                   pop esi
// 005bd03c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushRed@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
