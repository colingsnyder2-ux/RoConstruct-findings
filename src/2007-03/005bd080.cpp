// roc 2007-03 005bd080  unit: seg_005b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd080
//
// 005bd080  56                   push esi
// 005bd081  8b742408             mov esi, dword ptr [esp + 8]
// 005bd085  6a04                 push 4
// 005bd087  56                   push esi
// 005bd088  e8f3c9ffff           call 0x5b9a80
// 005bd08d  83c408               add esp, 8
// 005bd090  85c0                 test eax, eax
// 005bd092  7406                 je 0x5bd09a
// 005bd094  c700c2000000         mov dword ptr [eax], 0xc2
// 005bd09a  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd09f  50                   push eax
// 005bd0a0  68f0d8ffff           push 0xffffd8f0
// 005bd0a5  56                   push esi
// 005bd0a6  e825c2ffff           call 0x5b92d0
// 005bd0ab  6afe                 push -2
// 005bd0ad  56                   push esi
// 005bd0ae  e87dc5ffff           call 0x5b9630
// 005bd0b3  83c414               add esp, 0x14
// 005bd0b6  b801000000           mov eax, 1
// 005bd0bb  5e                   pop esi
// 005bd0bc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
