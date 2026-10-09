// roc 2009-12 007928c0  unit: seg_00790000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007928c0
//
// 007928c0  56                   push esi
// 007928c1  8b742408             mov esi, dword ptr [esp + 8]
// 007928c5  6a04                 push 4
// 007928c7  56                   push esi
// 007928c8  e8236fffff           call 0x7897f0
// 007928cd  83c408               add esp, 8
// 007928d0  85c0                 test eax, eax
// 007928d2  7406                 je 0x7928da
// 007928d4  c70001000000         mov dword ptr [eax], 1
// 007928da  a1502bb600           mov eax, dword ptr [0xb62b50]
// 007928df  50                   push eax
// 007928e0  68f0d8ffff           push 0xffffd8f0
// 007928e5  56                   push esi
// 007928e6  e80567ffff           call 0x788ff0
// 007928eb  6afe                 push -2
// 007928ed  56                   push esi
// 007928ee  e88d6affff           call 0x789380
// 007928f3  83c414               add esp, 0x14
// 007928f6  b801000000           mov eax, 1
// 007928fb  5e                   pop esi
// 007928fc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushWhite@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
