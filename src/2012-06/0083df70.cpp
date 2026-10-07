// roc 2012-06 0083df70  unit: seg_00830000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083df70
//
// 0083df70  56                   push esi
// 0083df71  8b742408             mov esi, dword ptr [esp + 8]
// 0083df75  6a04                 push 4
// 0083df77  56                   push esi
// 0083df78  e8c34bffff           call 0x832b40
// 0083df7d  83c408               add esp, 8
// 0083df80  85c0                 test eax, eax
// 0083df82  7406                 je 0x83df8a
// 0083df84  c700c2000000         mov dword ptr [eax], 0xc2
// 0083df8a  a1d013de00           mov eax, dword ptr [0xde13d0]
// 0083df8f  50                   push eax
// 0083df90  68f0d8ffff           push 0xffffd8f0
// 0083df95  56                   push esi
// 0083df96  e8a543ffff           call 0x832340
// 0083df9b  6afe                 push -2
// 0083df9d  56                   push esi
// 0083df9e  e82d47ffff           call 0x8326d0
// 0083dfa3  83c414               add esp, 0x14
// 0083dfa6  b801000000           mov eax, 1
// 0083dfab  5e                   pop esi
// 0083dfac  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
