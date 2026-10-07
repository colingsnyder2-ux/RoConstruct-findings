// roc 2010-06 0072b070  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072b070
//
// 0072b070  56                   push esi
// 0072b071  8b742408             mov esi, dword ptr [esp + 8]
// 0072b075  6a04                 push 4
// 0072b077  56                   push esi
// 0072b078  e8236fffff           call 0x721fa0
// 0072b07d  83c408               add esp, 8
// 0072b080  85c0                 test eax, eax
// 0072b082  7406                 je 0x72b08a
// 0072b084  c7001a000000         mov dword ptr [eax], 0x1a
// 0072b08a  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0072b08f  50                   push eax
// 0072b090  68f0d8ffff           push 0xffffd8f0
// 0072b095  56                   push esi
// 0072b096  e80567ffff           call 0x7217a0
// 0072b09b  6afe                 push -2
// 0072b09d  56                   push esi
// 0072b09e  e88d6affff           call 0x721b30
// 0072b0a3  83c414               add esp, 0x14
// 0072b0a6  b801000000           mov eax, 1
// 0072b0ab  5e                   pop esi
// 0072b0ac  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlack@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
