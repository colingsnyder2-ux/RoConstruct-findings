// roc 2012-06 00834170  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00834170
//
// 00834170  56                   push esi
// 00834171  57                   push edi
// 00834172  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00834176  6a04                 push 4
// 00834178  57                   push edi
// 00834179  e8c2e9ffff           call 0x832b40
// 0083417e  8bf0                 mov esi, eax
// 00834180  83c408               add esp, 8
// 00834183  85f6                 test esi, esi
// 00834185  7406                 je 0x83418d
// 00834187  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083418b  8906                 mov dword ptr [esi], eax
// 0083418d  8b0dd013de00         mov ecx, dword ptr [0xde13d0]
// 00834193  51                   push ecx
// 00834194  68f0d8ffff           push 0xffffd8f0
// 00834199  57                   push edi
// 0083419a  e8a1e1ffff           call 0x832340
// 0083419f  6afe                 push -2
// 008341a1  57                   push edi
// 008341a2  e829e5ffff           call 0x8326d0
// 008341a7  83c414               add esp, 0x14
// 008341aa  5f                   pop edi
// 008341ab  8bc6                 mov eax, esi
// 008341ad  5e                   pop esi
// 008341ae  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ??$pushNewObject@VBrickColor@RBX@@@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@SAPAVBrickColor@2@PAUlua_State@@V32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
