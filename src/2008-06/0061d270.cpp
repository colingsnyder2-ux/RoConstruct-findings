// roc 2008-06 0061d270  unit: RBX::Lua::LuaArguments  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d270
//
// 0061d270  56                   push esi
// 0061d271  8b742408             mov esi, dword ptr [esp + 8]
// 0061d275  6a04                 push 4
// 0061d277  56                   push esi
// 0061d278  e8c359ffff           call 0x612c40
// 0061d27d  83c408               add esp, 8
// 0061d280  85c0                 test eax, eax
// 0061d282  7406                 je 0x61d28a
// 0061d284  c70001000000         mov dword ptr [eax], 1
// 0061d28a  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 0061d28f  50                   push eax
// 0061d290  68f0d8ffff           push 0xffffd8f0
// 0061d295  56                   push esi
// 0061d296  e8f551ffff           call 0x612490
// 0061d29b  6afe                 push -2
// 0061d29d  56                   push esi
// 0061d29e  e84d55ffff           call 0x6127f0
// 0061d2a3  83c414               add esp, 0x14
// 0061d2a6  b801000000           mov eax, 1
// 0061d2ab  5e                   pop esi
// 0061d2ac  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushWhite@@YAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
