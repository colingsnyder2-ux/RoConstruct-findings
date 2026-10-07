// roc 2009-06 00636690  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00636690
//
// 00636690  53                   push ebx
// 00636691  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00636695  56                   push esi
// 00636696  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063669a  57                   push edi
// 0063669b  53                   push ebx
// 0063669c  56                   push esi
// 0063669d  e8be2b0800           call 0x6b9260
// 006366a2  8bf8                 mov edi, eax
// 006366a4  83c408               add esp, 8
// 006366a7  85ff                 test edi, edi
// 006366a9  7456                 je 0x636701
// 006366ab  53                   push ebx
// 006366ac  56                   push esi
// 006366ad  e85e300800           call 0x6b9710
// 006366b2  83c408               add esp, 8
// 006366b5  85c0                 test eax, eax
// 006366b7  743d                 je 0x6366f6
// 006366b9  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006366be  50                   push eax
// 006366bf  68f0d8ffff           push 0xffffd8f0
// 006366c4  56                   push esi
// 006366c5  e8062f0800           call 0x6b95d0
// 006366ca  6afe                 push -2
// 006366cc  6aff                 push -1
// 006366ce  56                   push esi
// 006366cf  e87c290800           call 0x6b9050
// 006366d4  83c418               add esp, 0x18
// 006366d7  85c0                 test eax, eax
// 006366d9  7426                 je 0x636701
// 006366db  6afd                 push -3
// 006366dd  56                   push esi
// 006366de  e8ad260800           call 0x6b8d90
// 006366e3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006366e7  83c408               add esp, 8
// 006366ea  57                   push edi
// 006366eb  e8a0b7fdff           call 0x611e90
// 006366f0  5f                   pop edi
// 006366f1  5e                   pop esi
// 006366f2  b001                 mov al, 1
// 006366f4  5b                   pop ebx
// 006366f5  c3                   ret 
// 006366f6  6afe                 push -2
// 006366f8  56                   push esi
// 006366f9  e892260800           call 0x6b8d90
// 006366fe  83c408               add esp, 8
// 00636701  5f                   pop edi
// 00636702  5e                   pop esi
// 00636703  32c0                 xor al, al
// 00636705  5b                   pop ebx
// 00636706  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
