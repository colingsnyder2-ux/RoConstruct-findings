// roc 2008-06 0061d230  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d230
//
// 0061d230  56                   push esi
// 0061d231  8b742408             mov esi, dword ptr [esp + 8]
// 0061d235  6a04                 push 4
// 0061d237  56                   push esi
// 0061d238  e8035affff           call 0x612c40
// 0061d23d  83c408               add esp, 8
// 0061d240  85c0                 test eax, eax
// 0061d242  7406                 je 0x61d24a
// 0061d244  c70015000000         mov dword ptr [eax], 0x15
// 0061d24a  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d24f  50                   push eax
// 0061d250  68f0d8ffff           push 0xffffd8f0
// 0061d255  56                   push esi
// 0061d256  e83552ffff           call 0x612490
// 0061d25b  6afe                 push -2
// 0061d25d  56                   push esi
// 0061d25e  e88d55ffff           call 0x6127f0
// 0061d263  83c414               add esp, 0x14
// 0061d266  b801000000           mov eax, 1
// 0061d26b  5e                   pop esi
// 0061d26c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushRed@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
