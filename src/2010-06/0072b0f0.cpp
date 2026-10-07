// roc 2010-06 0072b0f0  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072b0f0
//
// 0072b0f0  56                   push esi
// 0072b0f1  8b742408             mov esi, dword ptr [esp + 8]
// 0072b0f5  6a04                 push 4
// 0072b0f7  56                   push esi
// 0072b0f8  e8a36effff           call 0x721fa0
// 0072b0fd  83c408               add esp, 8
// 0072b100  85c0                 test eax, eax
// 0072b102  7406                 je 0x72b10a
// 0072b104  c7001c000000         mov dword ptr [eax], 0x1c
// 0072b10a  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0072b10f  50                   push eax
// 0072b110  68f0d8ffff           push 0xffffd8f0
// 0072b115  56                   push esi
// 0072b116  e88566ffff           call 0x7217a0
// 0072b11b  6afe                 push -2
// 0072b11d  56                   push esi
// 0072b11e  e80d6affff           call 0x721b30
// 0072b123  83c414               add esp, 0x14
// 0072b126  b801000000           mov eax, 1
// 0072b12b  5e                   pop esi
// 0072b12c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGreen@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
