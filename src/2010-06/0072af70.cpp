// roc 2010-06 0072af70  unit: seg_00720000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072af70
//
// 0072af70  56                   push esi
// 0072af71  8b742408             mov esi, dword ptr [esp + 8]
// 0072af75  6a04                 push 4
// 0072af77  56                   push esi
// 0072af78  e82370ffff           call 0x721fa0
// 0072af7d  83c408               add esp, 8
// 0072af80  85c0                 test eax, eax
// 0072af82  7406                 je 0x72af8a
// 0072af84  c70015000000         mov dword ptr [eax], 0x15
// 0072af8a  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0072af8f  50                   push eax
// 0072af90  68f0d8ffff           push 0xffffd8f0
// 0072af95  56                   push esi
// 0072af96  e80568ffff           call 0x7217a0
// 0072af9b  6afe                 push -2
// 0072af9d  56                   push esi
// 0072af9e  e88d6bffff           call 0x721b30
// 0072afa3  83c414               add esp, 0x14
// 0072afa6  b801000000           mov eax, 1
// 0072afab  5e                   pop esi
// 0072afac  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushRed@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
