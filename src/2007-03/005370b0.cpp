// roc 2007-03 005370b0  unit: seg_00530000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005370b0
//
// 005370b0  56                   push esi
// 005370b1  8b742408             mov esi, dword ptr [esp + 8]
// 005370b5  6a0c                 push 0xc
// 005370b7  56                   push esi
// 005370b8  e8c3290800           call 0x5b9a80
// 005370bd  83c408               add esp, 8
// 005370c0  85c0                 test eax, eax
// 005370c2  7414                 je 0x5370d8
// 005370c4  d944240c             fld dword ptr [esp + 0xc]
// 005370c8  d918                 fstp dword ptr [eax]
// 005370ca  d9442410             fld dword ptr [esp + 0x10]
// 005370ce  d95804               fstp dword ptr [eax + 4]
// 005370d1  d9442414             fld dword ptr [esp + 0x14]
// 005370d5  d95808               fstp dword ptr [eax + 8]
// 005370d8  a144828a00           mov eax, dword ptr [0x8a8244]
// 005370dd  50                   push eax
// 005370de  68f0d8ffff           push 0xffffd8f0
// 005370e3  56                   push esi
// 005370e4  e8e7210800           call 0x5b92d0
// 005370e9  6afe                 push -2
// 005370eb  56                   push esi
// 005370ec  e83f250800           call 0x5b9630
// 005370f1  83c414               add esp, 0x14
// 005370f4  5e                   pop esi
// 005370f5  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushVector3@Vector3Bridge@Lua@RBX@@SAXPAUlua_State@@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
