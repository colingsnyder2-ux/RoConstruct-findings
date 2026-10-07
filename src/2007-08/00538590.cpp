// roc 2007-08 00538590  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538590
//
// 00538590  53                   push ebx
// 00538591  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00538595  56                   push esi
// 00538596  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053859a  57                   push edi
// 0053859b  53                   push ebx
// 0053859c  56                   push esi
// 0053859d  e8ee540800           call 0x5bda90
// 005385a2  8bf8                 mov edi, eax
// 005385a4  83c408               add esp, 8
// 005385a7  85ff                 test edi, edi
// 005385a9  7456                 je 0x538601
// 005385ab  53                   push ebx
// 005385ac  56                   push esi
// 005385ad  e86e590800           call 0x5bdf20
// 005385b2  83c408               add esp, 8
// 005385b5  85c0                 test eax, eax
// 005385b7  743d                 je 0x5385f6
// 005385b9  a174be8a00           mov eax, dword ptr [0x8abe74]
// 005385be  50                   push eax
// 005385bf  68f0d8ffff           push 0xffffd8f0
// 005385c4  56                   push esi
// 005385c5  e836580800           call 0x5bde00
// 005385ca  6afe                 push -2
// 005385cc  6aff                 push -1
// 005385ce  56                   push esi
// 005385cf  e87c520800           call 0x5bd850
// 005385d4  83c418               add esp, 0x18
// 005385d7  85c0                 test eax, eax
// 005385d9  7426                 je 0x538601
// 005385db  6afd                 push -3
// 005385dd  56                   push esi
// 005385de  e8ad4f0800           call 0x5bd590
// 005385e3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005385e7  83c408               add esp, 8
// 005385ea  57                   push edi
// 005385eb  e830f6ffff           call 0x537c20
// 005385f0  5f                   pop edi
// 005385f1  5e                   pop esi
// 005385f2  b001                 mov al, 1
// 005385f4  5b                   pop ebx
// 005385f5  c3                   ret 
// 005385f6  6afe                 push -2
// 005385f8  56                   push esi
// 005385f9  e8924f0800           call 0x5bd590
// 005385fe  83c408               add esp, 8
// 00538601  5f                   pop edi
// 00538602  5e                   pop esi
// 00538603  32c0                 xor al, al
// 00538605  5b                   pop ebx
// 00538606  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
