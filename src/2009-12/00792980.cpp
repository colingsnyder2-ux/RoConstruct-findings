// roc 2009-12 00792980  unit: seg_00790000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00792980
//
// 00792980  56                   push esi
// 00792981  8b742408             mov esi, dword ptr [esp + 8]
// 00792985  6a04                 push 4
// 00792987  56                   push esi
// 00792988  e8636effff           call 0x7897f0
// 0079298d  83c408               add esp, 8
// 00792990  85c0                 test eax, eax
// 00792992  7406                 je 0x79299a
// 00792994  c7001a000000         mov dword ptr [eax], 0x1a
// 0079299a  a1502bb600           mov eax, dword ptr [0xb62b50]
// 0079299f  50                   push eax
// 007929a0  68f0d8ffff           push 0xffffd8f0
// 007929a5  56                   push esi
// 007929a6  e84566ffff           call 0x788ff0
// 007929ab  6afe                 push -2
// 007929ad  56                   push esi
// 007929ae  e8cd69ffff           call 0x789380
// 007929b3  83c414               add esp, 0x14
// 007929b6  b801000000           mov eax, 1
// 007929bb  5e                   pop esi
// 007929bc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlack@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
