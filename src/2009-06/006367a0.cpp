// roc 2009-06 006367a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006367a0
//
// 006367a0  53                   push ebx
// 006367a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006367a5  56                   push esi
// 006367a6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006367aa  57                   push edi
// 006367ab  53                   push ebx
// 006367ac  56                   push esi
// 006367ad  e8ae2a0800           call 0x6b9260
// 006367b2  8bf8                 mov edi, eax
// 006367b4  83c408               add esp, 8
// 006367b7  85ff                 test edi, edi
// 006367b9  7456                 je 0x636811
// 006367bb  53                   push ebx
// 006367bc  56                   push esi
// 006367bd  e84e2f0800           call 0x6b9710
// 006367c2  83c408               add esp, 8
// 006367c5  85c0                 test eax, eax
// 006367c7  743d                 je 0x636806
// 006367c9  a1f42aa200           mov eax, dword ptr [0xa22af4]
// 006367ce  50                   push eax
// 006367cf  68f0d8ffff           push 0xffffd8f0
// 006367d4  56                   push esi
// 006367d5  e8f62d0800           call 0x6b95d0
// 006367da  6afe                 push -2
// 006367dc  6aff                 push -1
// 006367de  56                   push esi
// 006367df  e86c280800           call 0x6b9050
// 006367e4  83c418               add esp, 0x18
// 006367e7  85c0                 test eax, eax
// 006367e9  7426                 je 0x636811
// 006367eb  6afd                 push -3
// 006367ed  56                   push esi
// 006367ee  e89d250800           call 0x6b8d90
// 006367f3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006367f7  83c408               add esp, 8
// 006367fa  57                   push edi
// 006367fb  e8a0fbffff           call 0x6363a0
// 00636800  5f                   pop edi
// 00636801  5e                   pop esi
// 00636802  b001                 mov al, 1
// 00636804  5b                   pop ebx
// 00636805  c3                   ret 
// 00636806  6afe                 push -2
// 00636808  56                   push esi
// 00636809  e882250800           call 0x6b8d90
// 0063680e  83c408               add esp, 8
// 00636811  5f                   pop edi
// 00636812  5e                   pop esi
// 00636813  32c0                 xor al, al
// 00636815  5b                   pop ebx
// 00636816  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$getValue@VValue@Reflection@RBX@@@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SA_NPAUlua_State@@IAAVValue@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
