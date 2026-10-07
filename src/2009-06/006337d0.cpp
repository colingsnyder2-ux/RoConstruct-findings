// roc 2009-06 006337d0  unit: std::strstream  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006337d0
//
// 006337d0  56                   push esi
// 006337d1  57                   push edi
// 006337d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006337d6  6a0c                 push 0xc
// 006337d8  57                   push edi
// 006337d9  e8f2650800           call 0x6b9dd0
// 006337de  8bf0                 mov esi, eax
// 006337e0  83c408               add esp, 8
// 006337e3  85f6                 test esi, esi
// 006337e5  7414                 je 0x6337fb
// 006337e7  d9442410             fld dword ptr [esp + 0x10]
// 006337eb  d91e                 fstp dword ptr [esi]
// 006337ed  d9442414             fld dword ptr [esp + 0x14]
// 006337f1  d95e04               fstp dword ptr [esi + 4]
// 006337f4  d9442418             fld dword ptr [esp + 0x18]
// 006337f8  d95e08               fstp dword ptr [esi + 8]
// 006337fb  a1ec2aa200           mov eax, dword ptr [0xa22aec]
// 00633800  50                   push eax
// 00633801  68f0d8ffff           push 0xffffd8f0
// 00633806  57                   push edi
// 00633807  e8c45d0800           call 0x6b95d0
// 0063380c  6afe                 push -2
// 0063380e  57                   push edi
// 0063380f  e84c610800           call 0x6b9960
// 00633814  83c414               add esp, 0x14
// 00633817  5f                   pop edi
// 00633818  8bc6                 mov eax, esi
// 0063381a  5e                   pop esi
// 0063381b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SAPAVVector3@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
