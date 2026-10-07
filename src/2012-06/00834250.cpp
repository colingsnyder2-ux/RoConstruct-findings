// roc 2012-06 00834250  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00834250
//
// 00834250  56                   push esi
// 00834251  57                   push edi
// 00834252  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00834256  6a04                 push 4
// 00834258  57                   push edi
// 00834259  e8e2e8ffff           call 0x832b40
// 0083425e  8bf0                 mov esi, eax
// 00834260  83c408               add esp, 8
// 00834263  85f6                 test esi, esi
// 00834265  7406                 je 0x83426d
// 00834267  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083426b  8906                 mov dword ptr [esi], eax
// 0083426d  8b0de413de00         mov ecx, dword ptr [0xde13e4]
// 00834273  51                   push ecx
// 00834274  68f0d8ffff           push 0xffffd8f0
// 00834279  57                   push edi
// 0083427a  e8c1e0ffff           call 0x832340
// 0083427f  6afe                 push -2
// 00834281  57                   push edi
// 00834282  e849e4ffff           call 0x8326d0
// 00834287  83c414               add esp, 0x14
// 0083428a  5f                   pop edi
// 0083428b  8bc6                 mov eax, esi
// 0083428d  5e                   pop esi
// 0083428e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
