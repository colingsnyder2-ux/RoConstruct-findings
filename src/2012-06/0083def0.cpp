// roc 2012-06 0083def0  unit: seg_00830000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083def0
//
// 0083def0  56                   push esi
// 0083def1  8b742408             mov esi, dword ptr [esp + 8]
// 0083def5  6a04                 push 4
// 0083def7  56                   push esi
// 0083def8  e8434cffff           call 0x832b40
// 0083defd  83c408               add esp, 8
// 0083df00  85c0                 test eax, eax
// 0083df02  7406                 je 0x83df0a
// 0083df04  c70015000000         mov dword ptr [eax], 0x15
// 0083df0a  a1d013de00           mov eax, dword ptr [0xde13d0]
// 0083df0f  50                   push eax
// 0083df10  68f0d8ffff           push 0xffffd8f0
// 0083df15  56                   push esi
// 0083df16  e82544ffff           call 0x832340
// 0083df1b  6afe                 push -2
// 0083df1d  56                   push esi
// 0083df1e  e8ad47ffff           call 0x8326d0
// 0083df23  83c414               add esp, 0x14
// 0083df26  b801000000           mov eax, 1
// 0083df2b  5e                   pop esi
// 0083df2c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushRed@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
