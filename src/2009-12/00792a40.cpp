// roc 2009-12 00792a40  unit: seg_00790000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00792a40
//
// 00792a40  56                   push esi
// 00792a41  8b742408             mov esi, dword ptr [esp + 8]
// 00792a45  6a04                 push 4
// 00792a47  56                   push esi
// 00792a48  e8a36dffff           call 0x7897f0
// 00792a4d  83c408               add esp, 8
// 00792a50  85c0                 test eax, eax
// 00792a52  7406                 je 0x792a5a
// 00792a54  c70017000000         mov dword ptr [eax], 0x17
// 00792a5a  a1502bb600           mov eax, dword ptr [0xb62b50]
// 00792a5f  50                   push eax
// 00792a60  68f0d8ffff           push 0xffffd8f0
// 00792a65  56                   push esi
// 00792a66  e88565ffff           call 0x788ff0
// 00792a6b  6afe                 push -2
// 00792a6d  56                   push esi
// 00792a6e  e80d69ffff           call 0x789380
// 00792a73  83c414               add esp, 0x14
// 00792a76  b801000000           mov eax, 1
// 00792a7b  5e                   pop esi
// 00792a7c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlue@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
