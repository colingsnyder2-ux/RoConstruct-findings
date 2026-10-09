// roc 2009-12 00792940  unit: seg_00790000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00792940
//
// 00792940  56                   push esi
// 00792941  8b742408             mov esi, dword ptr [esp + 8]
// 00792945  6a04                 push 4
// 00792947  56                   push esi
// 00792948  e8a36effff           call 0x7897f0
// 0079294d  83c408               add esp, 8
// 00792950  85c0                 test eax, eax
// 00792952  7406                 je 0x79295a
// 00792954  c700c7000000         mov dword ptr [eax], 0xc7
// 0079295a  a1502bb600           mov eax, dword ptr [0xb62b50]
// 0079295f  50                   push eax
// 00792960  68f0d8ffff           push 0xffffd8f0
// 00792965  56                   push esi
// 00792966  e88566ffff           call 0x788ff0
// 0079296b  6afe                 push -2
// 0079296d  56                   push esi
// 0079296e  e80d6affff           call 0x789380
// 00792973  83c414               add esp, 0x14
// 00792976  b801000000           mov eax, 1
// 0079297b  5e                   pop esi
// 0079297c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushDarkGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
