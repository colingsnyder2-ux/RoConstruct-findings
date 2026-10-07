// roc 2012-06 00834210  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00834210
//
// 00834210  56                   push esi
// 00834211  57                   push edi
// 00834212  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00834216  6a04                 push 4
// 00834218  57                   push edi
// 00834219  e822e9ffff           call 0x832b40
// 0083421e  8bf0                 mov esi, eax
// 00834220  83c408               add esp, 8
// 00834223  85f6                 test esi, esi
// 00834225  7406                 je 0x83422d
// 00834227  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083422b  8906                 mov dword ptr [esi], eax
// 0083422d  8b0de013de00         mov ecx, dword ptr [0xde13e0]
// 00834233  51                   push ecx
// 00834234  68f0d8ffff           push 0xffffd8f0
// 00834239  57                   push edi
// 0083423a  e801e1ffff           call 0x832340
// 0083423f  6afe                 push -2
// 00834241  57                   push edi
// 00834242  e889e4ffff           call 0x8326d0
// 00834247  83c414               add esp, 0x14
// 0083424a  5f                   pop edi
// 0083424b  8bc6                 mov eax, esi
// 0083424d  5e                   pop esi
// 0083424e  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
