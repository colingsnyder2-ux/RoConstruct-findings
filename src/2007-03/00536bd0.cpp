// roc 2007-03 00536bd0  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536bd0
//
// 00536bd0  56                   push esi
// 00536bd1  57                   push edi
// 00536bd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00536bd6  6a0c                 push 0xc
// 00536bd8  57                   push edi
// 00536bd9  e8a22e0800           call 0x5b9a80
// 00536bde  8bf0                 mov esi, eax
// 00536be0  83c408               add esp, 8
// 00536be3  85f6                 test esi, esi
// 00536be5  7414                 je 0x536bfb
// 00536be7  d9442410             fld dword ptr [esp + 0x10]
// 00536beb  d91e                 fstp dword ptr [esi]
// 00536bed  d9442414             fld dword ptr [esp + 0x14]
// 00536bf1  d95e04               fstp dword ptr [esi + 4]
// 00536bf4  d9442418             fld dword ptr [esp + 0x18]
// 00536bf8  d95e08               fstp dword ptr [esi + 8]
// 00536bfb  a148828a00           mov eax, dword ptr [0x8a8248]
// 00536c00  50                   push eax
// 00536c01  68f0d8ffff           push 0xffffd8f0
// 00536c06  57                   push edi
// 00536c07  e8c4260800           call 0x5b92d0
// 00536c0c  6afe                 push -2
// 00536c0e  57                   push edi
// 00536c0f  e81c2a0800           call 0x5b9630
// 00536c14  83c414               add esp, 0x14
// 00536c17  5f                   pop edi
// 00536c18  8bc6                 mov eax, esi
// 00536c1a  5e                   pop esi
// 00536c1b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SAPAVVector3@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
