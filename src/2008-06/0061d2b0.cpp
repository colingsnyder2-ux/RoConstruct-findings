// roc 2008-06 0061d2b0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d2b0
//
// 0061d2b0  56                   push esi
// 0061d2b1  8b742408             mov esi, dword ptr [esp + 8]
// 0061d2b5  6a04                 push 4
// 0061d2b7  56                   push esi
// 0061d2b8  e88359ffff           call 0x612c40
// 0061d2bd  83c408               add esp, 8
// 0061d2c0  85c0                 test eax, eax
// 0061d2c2  7406                 je 0x61d2ca
// 0061d2c4  c700c2000000         mov dword ptr [eax], 0xc2
// 0061d2ca  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d2cf  50                   push eax
// 0061d2d0  68f0d8ffff           push 0xffffd8f0
// 0061d2d5  56                   push esi
// 0061d2d6  e8b551ffff           call 0x612490
// 0061d2db  6afe                 push -2
// 0061d2dd  56                   push esi
// 0061d2de  e80d55ffff           call 0x6127f0
// 0061d2e3  83c414               add esp, 0x14
// 0061d2e6  b801000000           mov eax, 1
// 0061d2eb  5e                   pop esi
// 0061d2ec  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
