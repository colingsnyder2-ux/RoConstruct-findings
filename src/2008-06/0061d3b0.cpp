// roc 2008-06 0061d3b0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d3b0
//
// 0061d3b0  56                   push esi
// 0061d3b1  8b742408             mov esi, dword ptr [esp + 8]
// 0061d3b5  6a04                 push 4
// 0061d3b7  56                   push esi
// 0061d3b8  e88358ffff           call 0x612c40
// 0061d3bd  83c408               add esp, 8
// 0061d3c0  85c0                 test eax, eax
// 0061d3c2  7406                 je 0x61d3ca
// 0061d3c4  c7001c000000         mov dword ptr [eax], 0x1c
// 0061d3ca  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d3cf  50                   push eax
// 0061d3d0  68f0d8ffff           push 0xffffd8f0
// 0061d3d5  56                   push esi
// 0061d3d6  e8b550ffff           call 0x612490
// 0061d3db  6afe                 push -2
// 0061d3dd  56                   push esi
// 0061d3de  e80d54ffff           call 0x6127f0
// 0061d3e3  83c414               add esp, 0x14
// 0061d3e6  b801000000           mov eax, 1
// 0061d3eb  5e                   pop esi
// 0061d3ec  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushGreen@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
