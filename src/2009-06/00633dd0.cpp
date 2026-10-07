// roc 2009-06 00633dd0  unit: RBX::VScriptContext::?$FactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633dd0
//
// 00633dd0  83ec0c               sub esp, 0xc
// 00633dd3  d9442414             fld dword ptr [esp + 0x14]
// 00633dd7  56                   push esi
// 00633dd8  8b742414             mov esi, dword ptr [esp + 0x14]
// 00633ddc  d95c2404             fstp dword ptr [esp + 4]
// 00633de0  d944241c             fld dword ptr [esp + 0x1c]
// 00633de4  6a0c                 push 0xc
// 00633de6  d95c240c             fstp dword ptr [esp + 0xc]
// 00633dea  56                   push esi
// 00633deb  d9442428             fld dword ptr [esp + 0x28]
// 00633def  d95c2414             fstp dword ptr [esp + 0x14]
// 00633df3  e8d85f0800           call 0x6b9dd0
// 00633df8  83c408               add esp, 8
// 00633dfb  85c0                 test eax, eax
// 00633dfd  7414                 je 0x633e13
// 00633dff  d9442404             fld dword ptr [esp + 4]
// 00633e03  d918                 fstp dword ptr [eax]
// 00633e05  d9442408             fld dword ptr [esp + 8]
// 00633e09  d95804               fstp dword ptr [eax + 4]
// 00633e0c  d944240c             fld dword ptr [esp + 0xc]
// 00633e10  d95808               fstp dword ptr [eax + 8]
// 00633e13  a1ec2aa200           mov eax, dword ptr [0xa22aec]
// 00633e18  50                   push eax
// 00633e19  68f0d8ffff           push 0xffffd8f0
// 00633e1e  56                   push esi
// 00633e1f  e8ac570800           call 0x6b95d0
// 00633e24  6afe                 push -2
// 00633e26  56                   push esi
// 00633e27  e8345b0800           call 0x6b9960
// 00633e2c  83c414               add esp, 0x14
// 00633e2f  5e                   pop esi
// 00633e30  83c40c               add esp, 0xc
// 00633e33  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushVector3@Vector3Bridge@Lua@RBX@@SAXPAUlua_State@@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
