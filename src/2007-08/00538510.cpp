// roc 2007-08 00538510  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538510
//
// 00538510  53                   push ebx
// 00538511  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00538515  56                   push esi
// 00538516  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053851a  57                   push edi
// 0053851b  53                   push ebx
// 0053851c  56                   push esi
// 0053851d  e86e550800           call 0x5bda90
// 00538522  8bf8                 mov edi, eax
// 00538524  83c408               add esp, 8
// 00538527  85ff                 test edi, edi
// 00538529  7456                 je 0x538581
// 0053852b  53                   push ebx
// 0053852c  56                   push esi
// 0053852d  e8ee590800           call 0x5bdf20
// 00538532  83c408               add esp, 8
// 00538535  85c0                 test eax, eax
// 00538537  743d                 je 0x538576
// 00538539  a178be8a00           mov eax, dword ptr [0x8abe78]
// 0053853e  50                   push eax
// 0053853f  68f0d8ffff           push 0xffffd8f0
// 00538544  56                   push esi
// 00538545  e8b6580800           call 0x5bde00
// 0053854a  6afe                 push -2
// 0053854c  6aff                 push -1
// 0053854e  56                   push esi
// 0053854f  e8fc520800           call 0x5bd850
// 00538554  83c418               add esp, 0x18
// 00538557  85c0                 test eax, eax
// 00538559  7426                 je 0x538581
// 0053855b  6afd                 push -3
// 0053855d  56                   push esi
// 0053855e  e82d500800           call 0x5bd590
// 00538563  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00538567  83c408               add esp, 8
// 0053856a  57                   push edi
// 0053856b  e860f6ffff           call 0x537bd0
// 00538570  5f                   pop edi
// 00538571  5e                   pop esi
// 00538572  b001                 mov al, 1
// 00538574  5b                   pop ebx
// 00538575  c3                   ret 
// 00538576  6afe                 push -2
// 00538578  56                   push esi
// 00538579  e812500800           call 0x5bd590
// 0053857e  83c408               add esp, 8
// 00538581  5f                   pop edi
// 00538582  5e                   pop esi
// 00538583  32c0                 xor al, al
// 00538585  5b                   pop ebx
// 00538586  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
