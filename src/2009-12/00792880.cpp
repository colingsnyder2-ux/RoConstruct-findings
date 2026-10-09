// roc 2009-12 00792880  unit: seg_00790000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00792880
//
// 00792880  56                   push esi
// 00792881  8b742408             mov esi, dword ptr [esp + 8]
// 00792885  6a04                 push 4
// 00792887  56                   push esi
// 00792888  e8636fffff           call 0x7897f0
// 0079288d  83c408               add esp, 8
// 00792890  85c0                 test eax, eax
// 00792892  7406                 je 0x79289a
// 00792894  c70015000000         mov dword ptr [eax], 0x15
// 0079289a  a1502bb600           mov eax, dword ptr [0xb62b50]
// 0079289f  50                   push eax
// 007928a0  68f0d8ffff           push 0xffffd8f0
// 007928a5  56                   push esi
// 007928a6  e84567ffff           call 0x788ff0
// 007928ab  6afe                 push -2
// 007928ad  56                   push esi
// 007928ae  e8cd6affff           call 0x789380
// 007928b3  83c414               add esp, 0x14
// 007928b6  b801000000           mov eax, 1
// 007928bb  5e                   pop esi
// 007928bc  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushRed@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
