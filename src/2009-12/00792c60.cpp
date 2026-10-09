// roc 2009-12 00792c60  unit: seg_00790000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00792c60
//
// 00792c60  51                   push ecx
// 00792c61  56                   push esi
// 00792c62  8d442404             lea eax, [esp + 4]
// 00792c66  57                   push edi
// 00792c67  50                   push eax
// 00792c68  e8b3e3f1ff           call 0x6b1020
// 00792c6d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00792c71  8b30                 mov esi, dword ptr [eax]
// 00792c73  6a04                 push 4
// 00792c75  57                   push edi
// 00792c76  e8756bffff           call 0x7897f0
// 00792c7b  83c40c               add esp, 0xc
// 00792c7e  85c0                 test eax, eax
// 00792c80  7402                 je 0x792c84
// 00792c82  8930                 mov dword ptr [eax], esi
// 00792c84  8b0d502bb600         mov ecx, dword ptr [0xb62b50]
// 00792c8a  51                   push ecx
// 00792c8b  68f0d8ffff           push 0xffffd8f0
// 00792c90  57                   push edi
// 00792c91  e85a63ffff           call 0x788ff0
// 00792c96  6afe                 push -2
// 00792c98  57                   push edi
// 00792c99  e8e266ffff           call 0x789380
// 00792c9e  83c414               add esp, 0x14
// 00792ca1  5f                   pop edi
// 00792ca2  b801000000           mov eax, 1
// 00792ca7  5e                   pop esi
// 00792ca8  59                   pop ecx
// 00792ca9  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?randomBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
