// roc 2009-06 006be640  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be640
//
// 006be640  56                   push esi
// 006be641  8b742408             mov esi, dword ptr [esp + 8]
// 006be645  6a04                 push 4
// 006be647  56                   push esi
// 006be648  e883b7ffff           call 0x6b9dd0
// 006be64d  83c408               add esp, 8
// 006be650  85c0                 test eax, eax
// 006be652  7406                 je 0x6be65a
// 006be654  c7001a000000         mov dword ptr [eax], 0x1a
// 006be65a  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be65f  50                   push eax
// 006be660  68f0d8ffff           push 0xffffd8f0
// 006be665  56                   push esi
// 006be666  e865afffff           call 0x6b95d0
// 006be66b  6afe                 push -2
// 006be66d  56                   push esi
// 006be66e  e8edb2ffff           call 0x6b9960
// 006be673  83c414               add esp, 0x14
// 006be676  b801000000           mov eax, 1
// 006be67b  5e                   pop esi
// 006be67c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlack@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
