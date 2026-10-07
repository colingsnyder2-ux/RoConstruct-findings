// roc 2012-06 0083e070  unit: seg_00830000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0083e070
//
// 0083e070  56                   push esi
// 0083e071  8b742408             mov esi, dword ptr [esp + 8]
// 0083e075  6a04                 push 4
// 0083e077  56                   push esi
// 0083e078  e8c34affff           call 0x832b40
// 0083e07d  83c408               add esp, 8
// 0083e080  85c0                 test eax, eax
// 0083e082  7406                 je 0x83e08a
// 0083e084  c7001c000000         mov dword ptr [eax], 0x1c
// 0083e08a  a1d013de00           mov eax, dword ptr [0xde13d0]
// 0083e08f  50                   push eax
// 0083e090  68f0d8ffff           push 0xffffd8f0
// 0083e095  56                   push esi
// 0083e096  e8a542ffff           call 0x832340
// 0083e09b  6afe                 push -2
// 0083e09d  56                   push esi
// 0083e09e  e82d46ffff           call 0x8326d0
// 0083e0a3  83c414               add esp, 0x14
// 0083e0a6  b801000000           mov eax, 1
// 0083e0ab  5e                   pop esi
// 0083e0ac  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGreen@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
