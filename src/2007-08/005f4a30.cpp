// roc 2007-08 005f4a30  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4a30
//
// 005f4a30  56                   push esi
// 005f4a31  8bf1                 mov esi, ecx
// 005f4a33  c7065c017c00         mov dword ptr [esi], 0x7c015c
// 005f4a39  c7460454017c00       mov dword ptr [esi + 4], 0x7c0154
// 005f4a40  c746104c017c00       mov dword ptr [esi + 0x10], 0x7c014c
// 005f4a47  c746143c017c00       mov dword ptr [esi + 0x14], 0x7c013c
// 005f4a4e  c7462c2c017c00       mov dword ptr [esi + 0x2c], 0x7c012c
// 005f4a55  c746441c017c00       mov dword ptr [esi + 0x44], 0x7c011c
// 005f4a5c  c7465c0c017c00       mov dword ptr [esi + 0x5c], 0x7c010c
// 005f4a63  c74674fc007c00       mov dword ptr [esi + 0x74], 0x7c00fc
// 005f4a6a  c7868c000000ec007c00 mov dword ptr [esi + 0x8c], 0x7c00ec
// 005f4a74  e837b8f4ff           call 0x5402b0
// 005f4a79  f644240801           test byte ptr [esp + 8], 1
// 005f4a7e  740a                 je 0x5f4a8a
// 005f4a80  56                   push esi
// 005f4a81  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f4a87  83c404               add esp, 4
// 005f4a8a  8bc6                 mov eax, esi
// 005f4a8c  5e                   pop esi
// 005f4a8d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
