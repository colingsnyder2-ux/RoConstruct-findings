// roc 2009-06 006368b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006368b0
//
// 006368b0  53                   push ebx
// 006368b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006368b5  56                   push esi
// 006368b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006368ba  57                   push edi
// 006368bb  53                   push ebx
// 006368bc  56                   push esi
// 006368bd  e89e290800           call 0x6b9260
// 006368c2  8bf8                 mov edi, eax
// 006368c4  83c408               add esp, 8
// 006368c7  85ff                 test edi, edi
// 006368c9  7456                 je 0x636921
// 006368cb  53                   push ebx
// 006368cc  56                   push esi
// 006368cd  e83e2e0800           call 0x6b9710
// 006368d2  83c408               add esp, 8
// 006368d5  85c0                 test eax, eax
// 006368d7  743d                 je 0x636916
// 006368d9  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006368de  50                   push eax
// 006368df  68f0d8ffff           push 0xffffd8f0
// 006368e4  56                   push esi
// 006368e5  e8e62c0800           call 0x6b95d0
// 006368ea  6afe                 push -2
// 006368ec  6aff                 push -1
// 006368ee  56                   push esi
// 006368ef  e85c270800           call 0x6b9050
// 006368f4  83c418               add esp, 0x18
// 006368f7  85c0                 test eax, eax
// 006368f9  7426                 je 0x636921
// 006368fb  6afd                 push -3
// 006368fd  56                   push esi
// 006368fe  e88d240800           call 0x6b8d90
// 00636903  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00636907  83c408               add esp, 8
// 0063690a  57                   push edi
// 0063690b  e890fde7ff           call 0x4b66a0
// 00636910  5f                   pop edi
// 00636911  5e                   pop esi
// 00636912  b001                 mov al, 1
// 00636914  5b                   pop ebx
// 00636915  c3                   ret 
// 00636916  6afe                 push -2
// 00636918  56                   push esi
// 00636919  e872240800           call 0x6b8d90
// 0063691e  83c408               add esp, 8
// 00636921  5f                   pop edi
// 00636922  5e                   pop esi
// 00636923  32c0                 xor al, al
// 00636925  5b                   pop ebx
// 00636926  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
