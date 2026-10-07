// roc 2010-06 0072aff0  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072aff0
//
// 0072aff0  56                   push esi
// 0072aff1  8b742408             mov esi, dword ptr [esp + 8]
// 0072aff5  6a04                 push 4
// 0072aff7  56                   push esi
// 0072aff8  e8a36fffff           call 0x721fa0
// 0072affd  83c408               add esp, 8
// 0072b000  85c0                 test eax, eax
// 0072b002  7406                 je 0x72b00a
// 0072b004  c700c2000000         mov dword ptr [eax], 0xc2
// 0072b00a  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0072b00f  50                   push eax
// 0072b010  68f0d8ffff           push 0xffffd8f0
// 0072b015  56                   push esi
// 0072b016  e88567ffff           call 0x7217a0
// 0072b01b  6afe                 push -2
// 0072b01d  56                   push esi
// 0072b01e  e80d6bffff           call 0x721b30
// 0072b023  83c414               add esp, 0x14
// 0072b026  b801000000           mov eax, 1
// 0072b02b  5e                   pop esi
// 0072b02c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
