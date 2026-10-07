// roc 2008-06 0061d330  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d330
//
// 0061d330  56                   push esi
// 0061d331  8b742408             mov esi, dword ptr [esp + 8]
// 0061d335  6a04                 push 4
// 0061d337  56                   push esi
// 0061d338  e80359ffff           call 0x612c40
// 0061d33d  83c408               add esp, 8
// 0061d340  85c0                 test eax, eax
// 0061d342  7406                 je 0x61d34a
// 0061d344  c7001a000000         mov dword ptr [eax], 0x1a
// 0061d34a  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d34f  50                   push eax
// 0061d350  68f0d8ffff           push 0xffffd8f0
// 0061d355  56                   push esi
// 0061d356  e83551ffff           call 0x612490
// 0061d35b  6afe                 push -2
// 0061d35d  56                   push esi
// 0061d35e  e88d54ffff           call 0x6127f0
// 0061d363  83c414               add esp, 0x14
// 0061d366  b801000000           mov eax, 1
// 0061d36b  5e                   pop esi
// 0061d36c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlack@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
