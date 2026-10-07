// roc 2008-06 005a9040  unit: RBX::VScriptContext::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9040
//
// 005a9040  83ec0c               sub esp, 0xc
// 005a9043  d9442414             fld dword ptr [esp + 0x14]
// 005a9047  56                   push esi
// 005a9048  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a904c  d95c2404             fstp dword ptr [esp + 4]
// 005a9050  d944241c             fld dword ptr [esp + 0x1c]
// 005a9054  6a0c                 push 0xc
// 005a9056  d95c240c             fstp dword ptr [esp + 0xc]
// 005a905a  56                   push esi
// 005a905b  d9442428             fld dword ptr [esp + 0x28]
// 005a905f  d95c2414             fstp dword ptr [esp + 0x14]
// 005a9063  e8d89b0600           call 0x612c40
// 005a9068  83c408               add esp, 8
// 005a906b  85c0                 test eax, eax
// 005a906d  7414                 je 0x5a9083
// 005a906f  d9442404             fld dword ptr [esp + 4]
// 005a9073  d918                 fstp dword ptr [eax]
// 005a9075  d9442408             fld dword ptr [esp + 8]
// 005a9079  d95804               fstp dword ptr [eax + 4]
// 005a907c  d944240c             fld dword ptr [esp + 0xc]
// 005a9080  d95808               fstp dword ptr [eax + 8]
// 005a9083  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 005a9088  50                   push eax
// 005a9089  68f0d8ffff           push 0xffffd8f0
// 005a908e  56                   push esi
// 005a908f  e8fc930600           call 0x612490
// 005a9094  6afe                 push -2
// 005a9096  56                   push esi
// 005a9097  e854970600           call 0x6127f0
// 005a909c  83c414               add esp, 0x14
// 005a909f  5e                   pop esi
// 005a90a0  83c40c               add esp, 0xc
// 005a90a3  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushVector3@Vector3Bridge@Lua@RBX@@SAXPAUlua_State@@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
