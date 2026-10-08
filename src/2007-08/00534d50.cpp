// roc 2007-08 00534d50  unit: std::logic_error  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534d50
//
// 00534d50  56                   push esi
// 00534d51  8b742408             mov esi, dword ptr [esp + 8]
// 00534d55  6a0c                 push 0xc
// 00534d57  56                   push esi
// 00534d58  e853980800           call 0x5be5b0
// 00534d5d  83c408               add esp, 8
// 00534d60  85c0                 test eax, eax
// 00534d62  7414                 je 0x534d78
// 00534d64  d944240c             fld dword ptr [esp + 0xc]
// 00534d68  d918                 fstp dword ptr [eax]
// 00534d6a  d9442410             fld dword ptr [esp + 0x10]
// 00534d6e  d95804               fstp dword ptr [eax + 4]
// 00534d71  d9442414             fld dword ptr [esp + 0x14]
// 00534d75  d95808               fstp dword ptr [eax + 8]
// 00534d78  a178be8a00           mov eax, dword ptr [0x8abe78]
// 00534d7d  50                   push eax
// 00534d7e  68f0d8ffff           push 0xffffd8f0
// 00534d83  56                   push esi
// 00534d84  e877900800           call 0x5bde00
// 00534d89  6afe                 push -2
// 00534d8b  56                   push esi
// 00534d8c  e8cf930800           call 0x5be160
// 00534d91  83c414               add esp, 0x14
// 00534d94  5e                   pop esi
// 00534d95  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushVector3@Vector3Bridge@Lua@RBX@@SAXPAUlua_State@@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
