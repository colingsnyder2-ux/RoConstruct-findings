// roc 2007-08 00424d10  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424d10
//
// 00424d10  56                   push esi
// 00424d11  8bf1                 mov esi, ecx
// 00424d13  c706948b7800         mov dword ptr [esi], 0x788b94
// 00424d19  c74604888b7800       mov dword ptr [esi + 4], 0x788b88
// 00424d20  c74610808b7800       mov dword ptr [esi + 0x10], 0x788b80
// 00424d27  c74614708b7800       mov dword ptr [esi + 0x14], 0x788b70
// 00424d2e  c7462c608b7800       mov dword ptr [esi + 0x2c], 0x788b60
// 00424d35  c74644508b7800       mov dword ptr [esi + 0x44], 0x788b50
// 00424d3c  c7465c408b7800       mov dword ptr [esi + 0x5c], 0x788b40
// 00424d43  c74674308b7800       mov dword ptr [esi + 0x74], 0x788b30
// 00424d4a  c7868c000000208b7800 mov dword ptr [esi + 0x8c], 0x788b20
// 00424d54  e857b51100           call 0x5402b0
// 00424d59  f644240801           test byte ptr [esp + 8], 1
// 00424d5e  740a                 je 0x424d6a
// 00424d60  56                   push esi
// 00424d61  ff15c4e67700         call dword ptr [0x77e6c4]
// 00424d67  83c404               add esp, 4
// 00424d6a  8bc6                 mov eax, esi
// 00424d6c  5e                   pop esi
// 00424d6d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
