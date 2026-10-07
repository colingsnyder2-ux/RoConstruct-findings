// roc 2007-08 005c1f30  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1f30
//
// 005c1f30  56                   push esi
// 005c1f31  8b742408             mov esi, dword ptr [esp + 8]
// 005c1f35  6a04                 push 4
// 005c1f37  56                   push esi
// 005c1f38  e873c6ffff           call 0x5be5b0
// 005c1f3d  83c408               add esp, 8
// 005c1f40  85c0                 test eax, eax
// 005c1f42  7406                 je 0x5c1f4a
// 005c1f44  c7001a000000         mov dword ptr [eax], 0x1a
// 005c1f4a  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005c1f4f  50                   push eax
// 005c1f50  68f0d8ffff           push 0xffffd8f0
// 005c1f55  56                   push esi
// 005c1f56  e8a5beffff           call 0x5bde00
// 005c1f5b  6afe                 push -2
// 005c1f5d  56                   push esi
// 005c1f5e  e8fdc1ffff           call 0x5be160
// 005c1f63  83c414               add esp, 0x14
// 005c1f66  b801000000           mov eax, 1
// 005c1f6b  5e                   pop esi
// 005c1f6c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlack@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
