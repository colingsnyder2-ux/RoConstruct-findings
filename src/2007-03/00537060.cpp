// roc 2007-03 00537060  unit: seg_00530000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537060
//
// 00537060  56                   push esi
// 00537061  8b742408             mov esi, dword ptr [esp + 8]
// 00537065  6a0c                 push 0xc
// 00537067  56                   push esi
// 00537068  e8132a0800           call 0x5b9a80
// 0053706d  83c408               add esp, 8
// 00537070  85c0                 test eax, eax
// 00537072  7414                 je 0x537088
// 00537074  d944240c             fld dword ptr [esp + 0xc]
// 00537078  d918                 fstp dword ptr [eax]
// 0053707a  d9442410             fld dword ptr [esp + 0x10]
// 0053707e  d95804               fstp dword ptr [eax + 4]
// 00537081  d9442414             fld dword ptr [esp + 0x14]
// 00537085  d95808               fstp dword ptr [eax + 8]
// 00537088  a148828a00           mov eax, dword ptr [0x8a8248]
// 0053708d  50                   push eax
// 0053708e  68f0d8ffff           push 0xffffd8f0
// 00537093  56                   push esi
// 00537094  e837220800           call 0x5b92d0
// 00537099  6afe                 push -2
// 0053709b  56                   push esi
// 0053709c  e88f250800           call 0x5b9630
// 005370a1  83c414               add esp, 0x14
// 005370a4  5e                   pop esi
// 005370a5  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?pushVector3@Vector3Bridge@Lua@RBX@@SAXPAUlua_State@@VVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
