// roc 2009-12 00792a00  unit: seg_00790000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00792a00
//
// 00792a00  56                   push esi
// 00792a01  8b742408             mov esi, dword ptr [esp + 8]
// 00792a05  6a04                 push 4
// 00792a07  56                   push esi
// 00792a08  e8e36dffff           call 0x7897f0
// 00792a0d  83c408               add esp, 8
// 00792a10  85c0                 test eax, eax
// 00792a12  7406                 je 0x792a1a
// 00792a14  c7001c000000         mov dword ptr [eax], 0x1c
// 00792a1a  a1502bb600           mov eax, dword ptr [0xb62b50]
// 00792a1f  50                   push eax
// 00792a20  68f0d8ffff           push 0xffffd8f0
// 00792a25  56                   push esi
// 00792a26  e8c565ffff           call 0x788ff0
// 00792a2b  6afe                 push -2
// 00792a2d  56                   push esi
// 00792a2e  e84d69ffff           call 0x789380
// 00792a33  83c414               add esp, 0x14
// 00792a36  b801000000           mov eax, 1
// 00792a3b  5e                   pop esi
// 00792a3c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGreen@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
