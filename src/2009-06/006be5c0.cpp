// roc 2009-06 006be5c0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be5c0
//
// 006be5c0  56                   push esi
// 006be5c1  8b742408             mov esi, dword ptr [esp + 8]
// 006be5c5  6a04                 push 4
// 006be5c7  56                   push esi
// 006be5c8  e803b8ffff           call 0x6b9dd0
// 006be5cd  83c408               add esp, 8
// 006be5d0  85c0                 test eax, eax
// 006be5d2  7406                 je 0x6be5da
// 006be5d4  c700c2000000         mov dword ptr [eax], 0xc2
// 006be5da  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be5df  50                   push eax
// 006be5e0  68f0d8ffff           push 0xffffd8f0
// 006be5e5  56                   push esi
// 006be5e6  e8e5afffff           call 0x6b95d0
// 006be5eb  6afe                 push -2
// 006be5ed  56                   push esi
// 006be5ee  e86db3ffff           call 0x6b9960
// 006be5f3  83c414               add esp, 0x14
// 006be5f6  b801000000           mov eax, 1
// 006be5fb  5e                   pop esi
// 006be5fc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
