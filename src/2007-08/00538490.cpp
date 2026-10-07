// roc 2007-08 00538490  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538490
//
// 00538490  53                   push ebx
// 00538491  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00538495  56                   push esi
// 00538496  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053849a  57                   push edi
// 0053849b  53                   push ebx
// 0053849c  56                   push esi
// 0053849d  e8ee550800           call 0x5bda90
// 005384a2  8bf8                 mov edi, eax
// 005384a4  83c408               add esp, 8
// 005384a7  85ff                 test edi, edi
// 005384a9  7456                 je 0x538501
// 005384ab  53                   push ebx
// 005384ac  56                   push esi
// 005384ad  e86e5a0800           call 0x5bdf20
// 005384b2  83c408               add esp, 8
// 005384b5  85c0                 test eax, eax
// 005384b7  743d                 je 0x5384f6
// 005384b9  a180be8a00           mov eax, dword ptr [0x8abe80]
// 005384be  50                   push eax
// 005384bf  68f0d8ffff           push 0xffffd8f0
// 005384c4  56                   push esi
// 005384c5  e836590800           call 0x5bde00
// 005384ca  6afe                 push -2
// 005384cc  6aff                 push -1
// 005384ce  56                   push esi
// 005384cf  e87c530800           call 0x5bd850
// 005384d4  83c418               add esp, 0x18
// 005384d7  85c0                 test eax, eax
// 005384d9  7426                 je 0x538501
// 005384db  6afd                 push -3
// 005384dd  56                   push esi
// 005384de  e8ad500800           call 0x5bd590
// 005384e3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005384e7  83c408               add esp, 8
// 005384ea  57                   push edi
// 005384eb  e8a0f6ffff           call 0x537b90
// 005384f0  5f                   pop edi
// 005384f1  5e                   pop esi
// 005384f2  b001                 mov al, 1
// 005384f4  5b                   pop ebx
// 005384f5  c3                   ret 
// 005384f6  6afe                 push -2
// 005384f8  56                   push esi
// 005384f9  e892500800           call 0x5bd590
// 005384fe  83c408               add esp, 8
// 00538501  5f                   pop edi
// 00538502  5e                   pop esi
// 00538503  32c0                 xor al, al
// 00538505  5b                   pop ebx
// 00538506  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
