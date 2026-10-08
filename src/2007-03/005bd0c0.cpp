// roc 2007-03 005bd0c0  unit: seg_005b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd0c0
//
// 005bd0c0  56                   push esi
// 005bd0c1  8b742408             mov esi, dword ptr [esp + 8]
// 005bd0c5  6a04                 push 4
// 005bd0c7  56                   push esi
// 005bd0c8  e8b3c9ffff           call 0x5b9a80
// 005bd0cd  83c408               add esp, 8
// 005bd0d0  85c0                 test eax, eax
// 005bd0d2  7406                 je 0x5bd0da
// 005bd0d4  c700c7000000         mov dword ptr [eax], 0xc7
// 005bd0da  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd0df  50                   push eax
// 005bd0e0  68f0d8ffff           push 0xffffd8f0
// 005bd0e5  56                   push esi
// 005bd0e6  e8e5c1ffff           call 0x5b92d0
// 005bd0eb  6afe                 push -2
// 005bd0ed  56                   push esi
// 005bd0ee  e83dc5ffff           call 0x5b9630
// 005bd0f3  83c414               add esp, 0x14
// 005bd0f6  b801000000           mov eax, 1
// 005bd0fb  5e                   pop esi
// 005bd0fc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushDarkGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
