// roc 2008-06 005ac270  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ac270
//
// 005ac270  53                   push ebx
// 005ac271  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005ac275  56                   push esi
// 005ac276  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ac27a  57                   push edi
// 005ac27b  53                   push ebx
// 005ac27c  56                   push esi
// 005ac27d  e89e5e0600           call 0x612120
// 005ac282  8bf8                 mov edi, eax
// 005ac284  83c408               add esp, 8
// 005ac287  85ff                 test edi, edi
// 005ac289  7456                 je 0x5ac2e1
// 005ac28b  53                   push ebx
// 005ac28c  56                   push esi
// 005ac28d  e81e630600           call 0x6125b0
// 005ac292  83c408               add esp, 8
// 005ac295  85c0                 test eax, eax
// 005ac297  743d                 je 0x5ac2d6
// 005ac299  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 005ac29e  50                   push eax
// 005ac29f  68f0d8ffff           push 0xffffd8f0
// 005ac2a4  56                   push esi
// 005ac2a5  e8e6610600           call 0x612490
// 005ac2aa  6afe                 push -2
// 005ac2ac  6aff                 push -1
// 005ac2ae  56                   push esi
// 005ac2af  e82c5c0600           call 0x611ee0
// 005ac2b4  83c418               add esp, 0x18
// 005ac2b7  85c0                 test eax, eax
// 005ac2b9  7426                 je 0x5ac2e1
// 005ac2bb  6afd                 push -3
// 005ac2bd  56                   push esi
// 005ac2be  e85d590600           call 0x611c20
// 005ac2c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ac2c7  83c408               add esp, 8
// 005ac2ca  57                   push edi
// 005ac2cb  e8d0f9edff           call 0x48bca0
// 005ac2d0  5f                   pop edi
// 005ac2d1  5e                   pop esi
// 005ac2d2  b001                 mov al, 1
// 005ac2d4  5b                   pop ebx
// 005ac2d5  c3                   ret 
// 005ac2d6  6afe                 push -2
// 005ac2d8  56                   push esi
// 005ac2d9  e842590600           call 0x611c20
// 005ac2de  83c408               add esp, 8
// 005ac2e1  5f                   pop edi
// 005ac2e2  5e                   pop esi
// 005ac2e3  32c0                 xor al, al
// 005ac2e5  5b                   pop ebx
// 005ac2e6  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
