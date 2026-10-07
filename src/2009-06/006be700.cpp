// roc 2009-06 006be700  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be700
//
// 006be700  56                   push esi
// 006be701  8b742408             mov esi, dword ptr [esp + 8]
// 006be705  6a04                 push 4
// 006be707  56                   push esi
// 006be708  e8c3b6ffff           call 0x6b9dd0
// 006be70d  83c408               add esp, 8
// 006be710  85c0                 test eax, eax
// 006be712  7406                 je 0x6be71a
// 006be714  c70017000000         mov dword ptr [eax], 0x17
// 006be71a  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be71f  50                   push eax
// 006be720  68f0d8ffff           push 0xffffd8f0
// 006be725  56                   push esi
// 006be726  e8a5aeffff           call 0x6b95d0
// 006be72b  6afe                 push -2
// 006be72d  56                   push esi
// 006be72e  e82db2ffff           call 0x6b9960
// 006be733  83c414               add esp, 0x14
// 006be736  b801000000           mov eax, 1
// 006be73b  5e                   pop esi
// 006be73c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlue@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
