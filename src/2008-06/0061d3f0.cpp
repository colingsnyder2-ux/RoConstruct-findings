// roc 2008-06 0061d3f0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d3f0
//
// 0061d3f0  56                   push esi
// 0061d3f1  8b742408             mov esi, dword ptr [esp + 8]
// 0061d3f5  6a04                 push 4
// 0061d3f7  56                   push esi
// 0061d3f8  e84358ffff           call 0x612c40
// 0061d3fd  83c408               add esp, 8
// 0061d400  85c0                 test eax, eax
// 0061d402  7406                 je 0x61d40a
// 0061d404  c70017000000         mov dword ptr [eax], 0x17
// 0061d40a  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d40f  50                   push eax
// 0061d410  68f0d8ffff           push 0xffffd8f0
// 0061d415  56                   push esi
// 0061d416  e87550ffff           call 0x612490
// 0061d41b  6afe                 push -2
// 0061d41d  56                   push esi
// 0061d41e  e8cd53ffff           call 0x6127f0
// 0061d423  83c414               add esp, 0x14
// 0061d426  b801000000           mov eax, 1
// 0061d42b  5e                   pop esi
// 0061d42c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushBlue@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
