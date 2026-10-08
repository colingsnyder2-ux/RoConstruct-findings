// roc 2007-08 005f4b30  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4b30
//
// 005f4b30  56                   push esi
// 005f4b31  8bf1                 mov esi, ecx
// 005f4b33  c70614027c00         mov dword ptr [esi], 0x7c0214
// 005f4b39  c746040c027c00       mov dword ptr [esi + 4], 0x7c020c
// 005f4b40  c7461004027c00       mov dword ptr [esi + 0x10], 0x7c0204
// 005f4b47  c74614f4017c00       mov dword ptr [esi + 0x14], 0x7c01f4
// 005f4b4e  c7462ce4017c00       mov dword ptr [esi + 0x2c], 0x7c01e4
// 005f4b55  c74644d4017c00       mov dword ptr [esi + 0x44], 0x7c01d4
// 005f4b5c  c7465cc4017c00       mov dword ptr [esi + 0x5c], 0x7c01c4
// 005f4b63  c74674b4017c00       mov dword ptr [esi + 0x74], 0x7c01b4
// 005f4b6a  c7868c000000a4017c00 mov dword ptr [esi + 0x8c], 0x7c01a4
// 005f4b74  e837b7f4ff           call 0x5402b0
// 005f4b79  f644240801           test byte ptr [esp + 8], 1
// 005f4b7e  740a                 je 0x5f4b8a
// 005f4b80  56                   push esi
// 005f4b81  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f4b87  83c404               add esp, 4
// 005f4b8a  8bc6                 mov eax, esi
// 005f4b8c  5e                   pop esi
// 005f4b8d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
