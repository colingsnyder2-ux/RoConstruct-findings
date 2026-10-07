// roc 2010-06 0072b030  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072b030
//
// 0072b030  56                   push esi
// 0072b031  8b742408             mov esi, dword ptr [esp + 8]
// 0072b035  6a04                 push 4
// 0072b037  56                   push esi
// 0072b038  e8636fffff           call 0x721fa0
// 0072b03d  83c408               add esp, 8
// 0072b040  85c0                 test eax, eax
// 0072b042  7406                 je 0x72b04a
// 0072b044  c700c7000000         mov dword ptr [eax], 0xc7
// 0072b04a  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0072b04f  50                   push eax
// 0072b050  68f0d8ffff           push 0xffffd8f0
// 0072b055  56                   push esi
// 0072b056  e84567ffff           call 0x7217a0
// 0072b05b  6afe                 push -2
// 0072b05d  56                   push esi
// 0072b05e  e8cd6affff           call 0x721b30
// 0072b063  83c414               add esp, 0x14
// 0072b066  b801000000           mov eax, 1
// 0072b06b  5e                   pop esi
// 0072b06c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushDarkGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
