// from server: 100% by tester
// roc 2007-03 005bd3c0  unit: seg_005b0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd3c0
//
// 005bd3c0  51                   push ecx
// 005bd3c1  56                   push esi
// 005bd3c2  8d442404             lea eax, [esp + 4]
// 005bd3c6  57                   push edi
// 005bd3c7  50                   push eax
// 005bd3c8  e8b35bfcff           call 0x582f80
// 005bd3cd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005bd3d1  8b30                 mov esi, dword ptr [eax]
// 005bd3d3  6a04                 push 4
// 005bd3d5  57                   push edi
// 005bd3d6  e8a5c6ffff           call 0x5b9a80
// 005bd3db  83c40c               add esp, 0xc
// 005bd3de  85c0                 test eax, eax
// 005bd3e0  7402                 je 0x5bd3e4
// 005bd3e2  8930                 mov dword ptr [eax], esi
// 005bd3e4  8b0d4c828a00         mov ecx, dword ptr [0x8a824c]
// 005bd3ea  51                   push ecx
// 005bd3eb  68f0d8ffff           push 0xffffd8f0
// 005bd3f0  57                   push edi
// 005bd3f1  e8dabeffff           call 0x5b92d0
// 005bd3f6  6afe                 push -2
// 005bd3f8  57                   push edi
// 005bd3f9  e832c2ffff           call 0x5b9630
// 005bd3fe  83c414               add esp, 0x14
// 005bd401  5f                   pop edi
// 005bd402  b801000000           mov eax, 1
// 005bd407  5e                   pop esi
// 005bd408  59                   pop ecx
// 005bd409  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?randomBrickColor@BrickColorBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
