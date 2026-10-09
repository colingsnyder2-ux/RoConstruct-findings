// roc 2009-12 00792900  unit: seg_00790000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00792900
//
// 00792900  56                   push esi
// 00792901  8b742408             mov esi, dword ptr [esp + 8]
// 00792905  6a04                 push 4
// 00792907  56                   push esi
// 00792908  e8e36effff           call 0x7897f0
// 0079290d  83c408               add esp, 8
// 00792910  85c0                 test eax, eax
// 00792912  7406                 je 0x79291a
// 00792914  c700c2000000         mov dword ptr [eax], 0xc2
// 0079291a  a1502bb600           mov eax, dword ptr [0xb62b50]
// 0079291f  50                   push eax
// 00792920  68f0d8ffff           push 0xffffd8f0
// 00792925  56                   push esi
// 00792926  e8c566ffff           call 0x788ff0
// 0079292b  6afe                 push -2
// 0079292d  56                   push esi
// 0079292e  e84d6affff           call 0x789380
// 00792933  83c414               add esp, 0x14
// 00792936  b801000000           mov eax, 1
// 0079293b  5e                   pop esi
// 0079293c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
