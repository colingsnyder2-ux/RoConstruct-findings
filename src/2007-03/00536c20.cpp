// roc 2007-03 00536c20  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536c20
//
// 00536c20  56                   push esi
// 00536c21  57                   push edi
// 00536c22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00536c26  6a0c                 push 0xc
// 00536c28  57                   push edi
// 00536c29  e8522e0800           call 0x5b9a80
// 00536c2e  8bf0                 mov esi, eax
// 00536c30  83c408               add esp, 8
// 00536c33  85f6                 test esi, esi
// 00536c35  7414                 je 0x536c4b
// 00536c37  d9442410             fld dword ptr [esp + 0x10]
// 00536c3b  d91e                 fstp dword ptr [esi]
// 00536c3d  d9442414             fld dword ptr [esp + 0x14]
// 00536c41  d95e04               fstp dword ptr [esi + 4]
// 00536c44  d9442418             fld dword ptr [esp + 0x18]
// 00536c48  d95e08               fstp dword ptr [esi + 8]
// 00536c4b  a144828a00           mov eax, dword ptr [0x8a8244]
// 00536c50  50                   push eax
// 00536c51  68f0d8ffff           push 0xffffd8f0
// 00536c56  57                   push edi
// 00536c57  e874260800           call 0x5b92d0
// 00536c5c  6afe                 push -2
// 00536c5e  57                   push edi
// 00536c5f  e8cc290800           call 0x5b9630
// 00536c64  83c414               add esp, 0x14
// 00536c67  5f                   pop edi
// 00536c68  8bc6                 mov eax, esi
// 00536c6a  5e                   pop esi
// 00536c6b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SAPAVVector3@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
