// roc 2007-08 00425e40  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00425e40
//
// 00425e40  56                   push esi
// 00425e41  8bf1                 mov esi, ecx
// 00425e43  c706448d7800         mov dword ptr [esi], 0x788d44
// 00425e49  c74604388d7800       mov dword ptr [esi + 4], 0x788d38
// 00425e50  c74610308d7800       mov dword ptr [esi + 0x10], 0x788d30
// 00425e57  c74614208d7800       mov dword ptr [esi + 0x14], 0x788d20
// 00425e5e  c7462c108d7800       mov dword ptr [esi + 0x2c], 0x788d10
// 00425e65  c74644008d7800       mov dword ptr [esi + 0x44], 0x788d00
// 00425e6c  c7465cf08c7800       mov dword ptr [esi + 0x5c], 0x788cf0
// 00425e73  c74674e08c7800       mov dword ptr [esi + 0x74], 0x788ce0
// 00425e7a  c7868c000000d08c7800 mov dword ptr [esi + 0x8c], 0x788cd0
// 00425e84  e827a41100           call 0x5402b0
// 00425e89  f644240801           test byte ptr [esp + 8], 1
// 00425e8e  740a                 je 0x425e9a
// 00425e90  56                   push esi
// 00425e91  ff15c4e67700         call dword ptr [0x77e6c4]
// 00425e97  83c404               add esp, 4
// 00425e9a  8bc6                 mov eax, esi
// 00425e9c  5e                   pop esi
// 00425e9d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
