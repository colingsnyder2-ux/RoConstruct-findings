// roc 2009-06 006be680  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006be680
//
// 006be680  56                   push esi
// 006be681  8b742408             mov esi, dword ptr [esp + 8]
// 006be685  6a04                 push 4
// 006be687  56                   push esi
// 006be688  e843b7ffff           call 0x6b9dd0
// 006be68d  83c408               add esp, 8
// 006be690  85c0                 test eax, eax
// 006be692  7406                 je 0x6be69a
// 006be694  c70018000000         mov dword ptr [eax], 0x18
// 006be69a  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006be69f  50                   push eax
// 006be6a0  68f0d8ffff           push 0xffffd8f0
// 006be6a5  56                   push esi
// 006be6a6  e825afffff           call 0x6b95d0
// 006be6ab  6afe                 push -2
// 006be6ad  56                   push esi
// 006be6ae  e8adb2ffff           call 0x6b9960
// 006be6b3  83c414               add esp, 0x14
// 006be6b6  b801000000           mov eax, 1
// 006be6bb  5e                   pop esi
// 006be6bc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushYellow@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
