// roc 2009-06 00633730  unit: std::strstream  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633730
//
// 00633730  56                   push esi
// 00633731  57                   push edi
// 00633732  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00633736  6a0c                 push 0xc
// 00633738  57                   push edi
// 00633739  e892660800           call 0x6b9dd0
// 0063373e  8bf0                 mov esi, eax
// 00633740  83c408               add esp, 8
// 00633743  85f6                 test esi, esi
// 00633745  7414                 je 0x63375b
// 00633747  d9442410             fld dword ptr [esp + 0x10]
// 0063374b  d91e                 fstp dword ptr [esi]
// 0063374d  d9442414             fld dword ptr [esp + 0x14]
// 00633751  d95e04               fstp dword ptr [esi + 4]
// 00633754  d9442418             fld dword ptr [esp + 0x18]
// 00633758  d95e08               fstp dword ptr [esi + 8]
// 0063375b  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 00633760  50                   push eax
// 00633761  68f0d8ffff           push 0xffffd8f0
// 00633766  57                   push edi
// 00633767  e8645e0800           call 0x6b95d0
// 0063376c  6afe                 push -2
// 0063376e  57                   push edi
// 0063376f  e8ec610800           call 0x6b9960
// 00633774  83c414               add esp, 0x14
// 00633777  5f                   pop edi
// 00633778  8bc6                 mov eax, esi
// 0063377a  5e                   pop esi
// 0063377b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SAPAVVector3@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
