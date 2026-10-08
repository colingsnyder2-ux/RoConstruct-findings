// roc 2007-08 00534da0  unit: std::logic_error  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534da0
//
// 00534da0  56                   push esi
// 00534da1  8b742408             mov esi, dword ptr [esp + 8]
// 00534da5  6a0c                 push 0xc
// 00534da7  56                   push esi
// 00534da8  e803980800           call 0x5be5b0
// 00534dad  83c408               add esp, 8
// 00534db0  85c0                 test eax, eax
// 00534db2  7414                 je 0x534dc8
// 00534db4  d944240c             fld dword ptr [esp + 0xc]
// 00534db8  d918                 fstp dword ptr [eax]
// 00534dba  d9442410             fld dword ptr [esp + 0x10]
// 00534dbe  d95804               fstp dword ptr [eax + 4]
// 00534dc1  d9442414             fld dword ptr [esp + 0x14]
// 00534dc5  d95808               fstp dword ptr [eax + 8]
// 00534dc8  a174be8a00           mov eax, dword ptr [0x8abe74]
// 00534dcd  50                   push eax
// 00534dce  68f0d8ffff           push 0xffffd8f0
// 00534dd3  56                   push esi
// 00534dd4  e827900800           call 0x5bde00
// 00534dd9  6afe                 push -2
// 00534ddb  56                   push esi
// 00534ddc  e87f930800           call 0x5be160
// 00534de1  83c414               add esp, 0x14
// 00534de4  5e                   pop esi
// 00534de5  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushVector3@Vector3Bridge@Lua@RBX@@SAXPAUlua_State@@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
