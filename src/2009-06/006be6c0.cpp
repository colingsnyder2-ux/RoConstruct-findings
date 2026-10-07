// roc 2009-06 006be6c0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be6c0
//
// 006be6c0  56                   push esi
// 006be6c1  8b742408             mov esi, dword ptr [esp + 8]
// 006be6c5  6a04                 push 4
// 006be6c7  56                   push esi
// 006be6c8  e803b7ffff           call 0x6b9dd0
// 006be6cd  83c408               add esp, 8
// 006be6d0  85c0                 test eax, eax
// 006be6d2  7406                 je 0x6be6da
// 006be6d4  c7001c000000         mov dword ptr [eax], 0x1c
// 006be6da  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be6df  50                   push eax
// 006be6e0  68f0d8ffff           push 0xffffd8f0
// 006be6e5  56                   push esi
// 006be6e6  e8e5aeffff           call 0x6b95d0
// 006be6eb  6afe                 push -2
// 006be6ed  56                   push esi
// 006be6ee  e86db2ffff           call 0x6b9960
// 006be6f3  83c414               add esp, 0x14
// 006be6f6  b801000000           mov eax, 1
// 006be6fb  5e                   pop esi
// 006be6fc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGreen@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
