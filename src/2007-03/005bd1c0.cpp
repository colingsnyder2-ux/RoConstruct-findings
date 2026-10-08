// roc 2007-03 005bd1c0  unit: seg_005b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd1c0
//
// 005bd1c0  56                   push esi
// 005bd1c1  8b742408             mov esi, dword ptr [esp + 8]
// 005bd1c5  6a04                 push 4
// 005bd1c7  56                   push esi
// 005bd1c8  e8b3c8ffff           call 0x5b9a80
// 005bd1cd  83c408               add esp, 8
// 005bd1d0  85c0                 test eax, eax
// 005bd1d2  7406                 je 0x5bd1da
// 005bd1d4  c70017000000         mov dword ptr [eax], 0x17
// 005bd1da  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd1df  50                   push eax
// 005bd1e0  68f0d8ffff           push 0xffffd8f0
// 005bd1e5  56                   push esi
// 005bd1e6  e8e5c0ffff           call 0x5b92d0
// 005bd1eb  6afe                 push -2
// 005bd1ed  56                   push esi
// 005bd1ee  e83dc4ffff           call 0x5b9630
// 005bd1f3  83c414               add esp, 0x14
// 005bd1f6  b801000000           mov eax, 1
// 005bd1fb  5e                   pop esi
// 005bd1fc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlue@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
