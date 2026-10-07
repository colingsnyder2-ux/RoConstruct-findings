// roc 2008-06 0061d2f0  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d2f0
//
// 0061d2f0  56                   push esi
// 0061d2f1  8b742408             mov esi, dword ptr [esp + 8]
// 0061d2f5  6a04                 push 4
// 0061d2f7  56                   push esi
// 0061d2f8  e84359ffff           call 0x612c40
// 0061d2fd  83c408               add esp, 8
// 0061d300  85c0                 test eax, eax
// 0061d302  7406                 je 0x61d30a
// 0061d304  c700c7000000         mov dword ptr [eax], 0xc7
// 0061d30a  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d30f  50                   push eax
// 0061d310  68f0d8ffff           push 0xffffd8f0
// 0061d315  56                   push esi
// 0061d316  e87551ffff           call 0x612490
// 0061d31b  6afe                 push -2
// 0061d31d  56                   push esi
// 0061d31e  e8cd54ffff           call 0x6127f0
// 0061d323  83c414               add esp, 0x14
// 0061d326  b801000000           mov eax, 1
// 0061d32b  5e                   pop esi
// 0061d32c  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushDarkGray@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
