// roc 2010-06 0072b0b0  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072b0b0
//
// 0072b0b0  56                   push esi
// 0072b0b1  8b742408             mov esi, dword ptr [esp + 8]
// 0072b0b5  6a04                 push 4
// 0072b0b7  56                   push esi
// 0072b0b8  e8e36effff           call 0x721fa0
// 0072b0bd  83c408               add esp, 8
// 0072b0c0  85c0                 test eax, eax
// 0072b0c2  7406                 je 0x72b0ca
// 0072b0c4  c70018000000         mov dword ptr [eax], 0x18
// 0072b0ca  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0072b0cf  50                   push eax
// 0072b0d0  68f0d8ffff           push 0xffffd8f0
// 0072b0d5  56                   push esi
// 0072b0d6  e8c566ffff           call 0x7217a0
// 0072b0db  6afe                 push -2
// 0072b0dd  56                   push esi
// 0072b0de  e84d6affff           call 0x721b30
// 0072b0e3  83c414               add esp, 0x14
// 0072b0e6  b801000000           mov eax, 1
// 0072b0eb  5e                   pop esi
// 0072b0ec  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushYellow@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
