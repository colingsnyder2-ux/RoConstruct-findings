// roc 2009-06 006be600  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be600
//
// 006be600  56                   push esi
// 006be601  8b742408             mov esi, dword ptr [esp + 8]
// 006be605  6a04                 push 4
// 006be607  56                   push esi
// 006be608  e8c3b7ffff           call 0x6b9dd0
// 006be60d  83c408               add esp, 8
// 006be610  85c0                 test eax, eax
// 006be612  7406                 je 0x6be61a
// 006be614  c700c7000000         mov dword ptr [eax], 0xc7
// 006be61a  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be61f  50                   push eax
// 006be620  68f0d8ffff           push 0xffffd8f0
// 006be625  56                   push esi
// 006be626  e8a5afffff           call 0x6b95d0
// 006be62b  6afe                 push -2
// 006be62d  56                   push esi
// 006be62e  e82db3ffff           call 0x6b9960
// 006be633  83c414               add esp, 0x14
// 006be636  b801000000           mov eax, 1
// 006be63b  5e                   pop esi
// 006be63c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushDarkGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
