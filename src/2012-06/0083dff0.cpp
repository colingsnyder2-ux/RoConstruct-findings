// roc 2012-06 0083dff0  unit: seg_00830000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083dff0
//
// 0083dff0  56                   push esi
// 0083dff1  8b742408             mov esi, dword ptr [esp + 8]
// 0083dff5  6a04                 push 4
// 0083dff7  56                   push esi
// 0083dff8  e8434bffff           call 0x832b40
// 0083dffd  83c408               add esp, 8
// 0083e000  85c0                 test eax, eax
// 0083e002  7406                 je 0x83e00a
// 0083e004  c7001a000000         mov dword ptr [eax], 0x1a
// 0083e00a  a1d013de00           mov eax, dword ptr [0xde13d0]
// 0083e00f  50                   push eax
// 0083e010  68f0d8ffff           push 0xffffd8f0
// 0083e015  56                   push esi
// 0083e016  e82543ffff           call 0x832340
// 0083e01b  6afe                 push -2
// 0083e01d  56                   push esi
// 0083e01e  e8ad46ffff           call 0x8326d0
// 0083e023  83c414               add esp, 0x14
// 0083e026  b801000000           mov eax, 1
// 0083e02b  5e                   pop esi
// 0083e02c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlack@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
