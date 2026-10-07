// roc 2009-06 006be540  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be540
//
// 006be540  56                   push esi
// 006be541  8b742408             mov esi, dword ptr [esp + 8]
// 006be545  6a04                 push 4
// 006be547  56                   push esi
// 006be548  e883b8ffff           call 0x6b9dd0
// 006be54d  83c408               add esp, 8
// 006be550  85c0                 test eax, eax
// 006be552  7406                 je 0x6be55a
// 006be554  c70015000000         mov dword ptr [eax], 0x15
// 006be55a  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be55f  50                   push eax
// 006be560  68f0d8ffff           push 0xffffd8f0
// 006be565  56                   push esi
// 006be566  e865b0ffff           call 0x6b95d0
// 006be56b  6afe                 push -2
// 006be56d  56                   push esi
// 006be56e  e8edb3ffff           call 0x6b9960
// 006be573  83c414               add esp, 0x14
// 006be576  b801000000           mov eax, 1
// 006be57b  5e                   pop esi
// 006be57c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushRed@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
