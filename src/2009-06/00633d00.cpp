// roc 2009-06 00633d00  unit: RBX::VScriptContext::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633d00
//
// 00633d00  83ec0c               sub esp, 0xc
// 00633d03  d9442414             fld dword ptr [esp + 0x14]
// 00633d07  56                   push esi
// 00633d08  8b742414             mov esi, dword ptr [esp + 0x14]
// 00633d0c  d95c2404             fstp dword ptr [esp + 4]
// 00633d10  d944241c             fld dword ptr [esp + 0x1c]
// 00633d14  6a0c                 push 0xc
// 00633d16  d95c240c             fstp dword ptr [esp + 0xc]
// 00633d1a  56                   push esi
// 00633d1b  d9442428             fld dword ptr [esp + 0x28]
// 00633d1f  d95c2414             fstp dword ptr [esp + 0x14]
// 00633d23  e8a8600800           call 0x6b9dd0
// 00633d28  83c408               add esp, 8
// 00633d2b  85c0                 test eax, eax
// 00633d2d  7414                 je 0x633d43
// 00633d2f  d9442404             fld dword ptr [esp + 4]
// 00633d33  d918                 fstp dword ptr [eax]
// 00633d35  d9442408             fld dword ptr [esp + 8]
// 00633d39  d95804               fstp dword ptr [eax + 4]
// 00633d3c  d944240c             fld dword ptr [esp + 0xc]
// 00633d40  d95808               fstp dword ptr [eax + 8]
// 00633d43  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 00633d48  50                   push eax
// 00633d49  68f0d8ffff           push 0xffffd8f0
// 00633d4e  56                   push esi
// 00633d4f  e87c580800           call 0x6b95d0
// 00633d54  6afe                 push -2
// 00633d56  56                   push esi
// 00633d57  e8045c0800           call 0x6b9960
// 00633d5c  83c414               add esp, 0x14
// 00633d5f  5e                   pop esi
// 00633d60  83c40c               add esp, 0xc
// 00633d63  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushVector3@Vector3Bridge@Lua@RBX@@SAXPAUlua_State@@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
