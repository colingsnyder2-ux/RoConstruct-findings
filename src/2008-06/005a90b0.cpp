// roc 2008-06 005a90b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a90b0
//
// 005a90b0  83ec0c               sub esp, 0xc
// 005a90b3  d9442414             fld dword ptr [esp + 0x14]
// 005a90b7  56                   push esi
// 005a90b8  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a90bc  d95c2404             fstp dword ptr [esp + 4]
// 005a90c0  d944241c             fld dword ptr [esp + 0x1c]
// 005a90c4  6a0c                 push 0xc
// 005a90c6  d95c240c             fstp dword ptr [esp + 0xc]
// 005a90ca  56                   push esi
// 005a90cb  d9442428             fld dword ptr [esp + 0x28]
// 005a90cf  d95c2414             fstp dword ptr [esp + 0x14]
// 005a90d3  e8689b0600           call 0x612c40
// 005a90d8  83c408               add esp, 8
// 005a90db  85c0                 test eax, eax
// 005a90dd  7414                 je 0x5a90f3
// 005a90df  d9442404             fld dword ptr [esp + 4]
// 005a90e3  d918                 fstp dword ptr [eax]
// 005a90e5  d9442408             fld dword ptr [esp + 8]
// 005a90e9  d95804               fstp dword ptr [eax + 4]
// 005a90ec  d944240c             fld dword ptr [esp + 0xc]
// 005a90f0  d95808               fstp dword ptr [eax + 8]
// 005a90f3  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005a90f8  50                   push eax
// 005a90f9  68f0d8ffff           push 0xffffd8f0
// 005a90fe  56                   push esi
// 005a90ff  e88c930600           call 0x612490
// 005a9104  6afe                 push -2
// 005a9106  56                   push esi
// 005a9107  e8e4960600           call 0x6127f0
// 005a910c  83c414               add esp, 0x14
// 005a910f  5e                   pop esi
// 005a9110  83c40c               add esp, 0xc
// 005a9113  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushVector3@Vector3Bridge@Lua@RBX@@SAXPAUlua_State@@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
