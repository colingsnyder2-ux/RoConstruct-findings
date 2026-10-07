// roc 2008-06 005ac0d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac0d0
//
// 005ac0d0  53                   push ebx
// 005ac0d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005ac0d5  56                   push esi
// 005ac0d6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ac0da  57                   push edi
// 005ac0db  53                   push ebx
// 005ac0dc  56                   push esi
// 005ac0dd  e83e600600           call 0x612120
// 005ac0e2  8bf8                 mov edi, eax
// 005ac0e4  83c408               add esp, 8
// 005ac0e7  85ff                 test edi, edi
// 005ac0e9  7456                 je 0x5ac141
// 005ac0eb  53                   push ebx
// 005ac0ec  56                   push esi
// 005ac0ed  e8be640600           call 0x6125b0
// 005ac0f2  83c408               add esp, 8
// 005ac0f5  85c0                 test eax, eax
// 005ac0f7  743d                 je 0x5ac136
// 005ac0f9  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 005ac0fe  50                   push eax
// 005ac0ff  68f0d8ffff           push 0xffffd8f0
// 005ac104  56                   push esi
// 005ac105  e886630600           call 0x612490
// 005ac10a  6afe                 push -2
// 005ac10c  6aff                 push -1
// 005ac10e  56                   push esi
// 005ac10f  e8cc5d0600           call 0x611ee0
// 005ac114  83c418               add esp, 0x18
// 005ac117  85c0                 test eax, eax
// 005ac119  7426                 je 0x5ac141
// 005ac11b  6afd                 push -3
// 005ac11d  56                   push esi
// 005ac11e  e8fd5a0600           call 0x611c20
// 005ac123  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ac127  83c408               add esp, 8
// 005ac12a  57                   push edi
// 005ac12b  e82086fdff           call 0x584750
// 005ac130  5f                   pop edi
// 005ac131  5e                   pop esi
// 005ac132  b001                 mov al, 1
// 005ac134  5b                   pop ebx
// 005ac135  c3                   ret 
// 005ac136  6afe                 push -2
// 005ac138  56                   push esi
// 005ac139  e8e25a0600           call 0x611c20
// 005ac13e  83c408               add esp, 8
// 005ac141  5f                   pop edi
// 005ac142  5e                   pop esi
// 005ac143  32c0                 xor al, al
// 005ac145  5b                   pop ebx
// 005ac146  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
