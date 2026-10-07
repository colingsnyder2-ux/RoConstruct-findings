// roc 2009-06 006be580  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be580
//
// 006be580  56                   push esi
// 006be581  8b742408             mov esi, dword ptr [esp + 8]
// 006be585  6a04                 push 4
// 006be587  56                   push esi
// 006be588  e843b8ffff           call 0x6b9dd0
// 006be58d  83c408               add esp, 8
// 006be590  85c0                 test eax, eax
// 006be592  7406                 je 0x6be59a
// 006be594  c70001000000         mov dword ptr [eax], 1
// 006be59a  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be59f  50                   push eax
// 006be5a0  68f0d8ffff           push 0xffffd8f0
// 006be5a5  56                   push esi
// 006be5a6  e825b0ffff           call 0x6b95d0
// 006be5ab  6afe                 push -2
// 006be5ad  56                   push esi
// 006be5ae  e8adb3ffff           call 0x6b9960
// 006be5b3  83c414               add esp, 0x14
// 006be5b6  b801000000           mov eax, 1
// 006be5bb  5e                   pop esi
// 006be5bc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushWhite@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
