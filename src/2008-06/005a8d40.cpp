// roc 2008-06 005a8d40  unit: RBX::ScriptContext  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8d40
//
// 005a8d40  56                   push esi
// 005a8d41  57                   push edi
// 005a8d42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a8d46  6a0c                 push 0xc
// 005a8d48  57                   push edi
// 005a8d49  e8f29e0600           call 0x612c40
// 005a8d4e  8bf0                 mov esi, eax
// 005a8d50  83c408               add esp, 8
// 005a8d53  85f6                 test esi, esi
// 005a8d55  7414                 je 0x5a8d6b
// 005a8d57  d9442410             fld dword ptr [esp + 0x10]
// 005a8d5b  d91e                 fstp dword ptr [esi]
// 005a8d5d  d9442414             fld dword ptr [esp + 0x14]
// 005a8d61  d95e04               fstp dword ptr [esi + 4]
// 005a8d64  d9442418             fld dword ptr [esp + 0x18]
// 005a8d68  d95e08               fstp dword ptr [esi + 8]
// 005a8d6b  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005a8d70  50                   push eax
// 005a8d71  68f0d8ffff           push 0xffffd8f0
// 005a8d76  57                   push edi
// 005a8d77  e814970600           call 0x612490
// 005a8d7c  6afe                 push -2
// 005a8d7e  57                   push edi
// 005a8d7f  e86c9a0600           call 0x6127f0
// 005a8d84  83c414               add esp, 0x14
// 005a8d87  5f                   pop edi
// 005a8d88  8bc6                 mov eax, esi
// 005a8d8a  5e                   pop esi
// 005a8d8b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SAPAVVector3@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
