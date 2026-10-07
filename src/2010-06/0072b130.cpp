// roc 2010-06 0072b130  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072b130
//
// 0072b130  56                   push esi
// 0072b131  8b742408             mov esi, dword ptr [esp + 8]
// 0072b135  6a04                 push 4
// 0072b137  56                   push esi
// 0072b138  e8636effff           call 0x721fa0
// 0072b13d  83c408               add esp, 8
// 0072b140  85c0                 test eax, eax
// 0072b142  7406                 je 0x72b14a
// 0072b144  c70017000000         mov dword ptr [eax], 0x17
// 0072b14a  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0072b14f  50                   push eax
// 0072b150  68f0d8ffff           push 0xffffd8f0
// 0072b155  56                   push esi
// 0072b156  e84566ffff           call 0x7217a0
// 0072b15b  6afe                 push -2
// 0072b15d  56                   push esi
// 0072b15e  e8cd69ffff           call 0x721b30
// 0072b163  83c414               add esp, 0x14
// 0072b166  b801000000           mov eax, 1
// 0072b16b  5e                   pop esi
// 0072b16c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlue@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
