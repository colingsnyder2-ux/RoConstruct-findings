// roc 2009-12 007929c0  unit: seg_00790000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007929c0
//
// 007929c0  56                   push esi
// 007929c1  8b742408             mov esi, dword ptr [esp + 8]
// 007929c5  6a04                 push 4
// 007929c7  56                   push esi
// 007929c8  e8236effff           call 0x7897f0
// 007929cd  83c408               add esp, 8
// 007929d0  85c0                 test eax, eax
// 007929d2  7406                 je 0x7929da
// 007929d4  c70018000000         mov dword ptr [eax], 0x18
// 007929da  a1502bb600           mov eax, dword ptr [0xb62b50]
// 007929df  50                   push eax
// 007929e0  68f0d8ffff           push 0xffffd8f0
// 007929e5  56                   push esi
// 007929e6  e80566ffff           call 0x788ff0
// 007929eb  6afe                 push -2
// 007929ed  56                   push esi
// 007929ee  e88d69ffff           call 0x789380
// 007929f3  83c414               add esp, 0x14
// 007929f6  b801000000           mov eax, 1
// 007929fb  5e                   pop esi
// 007929fc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushYellow@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
