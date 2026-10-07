// roc 2007-08 005c1ff0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1ff0
//
// 005c1ff0  56                   push esi
// 005c1ff1  8b742408             mov esi, dword ptr [esp + 8]
// 005c1ff5  6a04                 push 4
// 005c1ff7  56                   push esi
// 005c1ff8  e8b3c5ffff           call 0x5be5b0
// 005c1ffd  83c408               add esp, 8
// 005c2000  85c0                 test eax, eax
// 005c2002  7406                 je 0x5c200a
// 005c2004  c70017000000         mov dword ptr [eax], 0x17
// 005c200a  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 005c200f  50                   push eax
// 005c2010  68f0d8ffff           push 0xffffd8f0
// 005c2015  56                   push esi
// 005c2016  e8e5bdffff           call 0x5bde00
// 005c201b  6afe                 push -2
// 005c201d  56                   push esi
// 005c201e  e83dc1ffff           call 0x5be160
// 005c2023  83c414               add esp, 0x14
// 005c2026  b801000000           mov eax, 1
// 005c202b  5e                   pop esi
// 005c202c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlue@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
