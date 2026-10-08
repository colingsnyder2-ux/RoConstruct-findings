// roc 2007-03 005bd140  unit: seg_005b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd140
//
// 005bd140  56                   push esi
// 005bd141  8b742408             mov esi, dword ptr [esp + 8]
// 005bd145  6a04                 push 4
// 005bd147  56                   push esi
// 005bd148  e833c9ffff           call 0x5b9a80
// 005bd14d  83c408               add esp, 8
// 005bd150  85c0                 test eax, eax
// 005bd152  7406                 je 0x5bd15a
// 005bd154  c70018000000         mov dword ptr [eax], 0x18
// 005bd15a  a14c828a00           mov eax, dword ptr [0x8a824c]
// 005bd15f  50                   push eax
// 005bd160  68f0d8ffff           push 0xffffd8f0
// 005bd165  56                   push esi
// 005bd166  e865c1ffff           call 0x5b92d0
// 005bd16b  6afe                 push -2
// 005bd16d  56                   push esi
// 005bd16e  e8bdc4ffff           call 0x5b9630
// 005bd173  83c414               add esp, 0x14
// 005bd176  b801000000           mov eax, 1
// 005bd17b  5e                   pop esi
// 005bd17c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushYellow@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
