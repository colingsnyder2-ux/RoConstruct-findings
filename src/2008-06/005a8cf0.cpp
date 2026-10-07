// roc 2008-06 005a8cf0  unit: RBX::ScriptContext  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8cf0
//
// 005a8cf0  56                   push esi
// 005a8cf1  57                   push edi
// 005a8cf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a8cf6  6a0c                 push 0xc
// 005a8cf8  57                   push edi
// 005a8cf9  e8429f0600           call 0x612c40
// 005a8cfe  8bf0                 mov esi, eax
// 005a8d00  83c408               add esp, 8
// 005a8d03  85f6                 test esi, esi
// 005a8d05  7414                 je 0x5a8d1b
// 005a8d07  d9442410             fld dword ptr [esp + 0x10]
// 005a8d0b  d91e                 fstp dword ptr [esi]
// 005a8d0d  d9442414             fld dword ptr [esp + 0x14]
// 005a8d11  d95e04               fstp dword ptr [esi + 4]
// 005a8d14  d9442418             fld dword ptr [esp + 0x18]
// 005a8d18  d95e08               fstp dword ptr [esi + 8]
// 005a8d1b  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 005a8d20  50                   push eax
// 005a8d21  68f0d8ffff           push 0xffffd8f0
// 005a8d26  57                   push edi
// 005a8d27  e864970600           call 0x612490
// 005a8d2c  6afe                 push -2
// 005a8d2e  57                   push edi
// 005a8d2f  e8bc9a0600           call 0x6127f0
// 005a8d34  83c414               add esp, 0x14
// 005a8d37  5f                   pop edi
// 005a8d38  8bc6                 mov eax, esi
// 005a8d3a  5e                   pop esi
// 005a8d3b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VVector3@G3D@@@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@SAPAVVector3@G3D@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
