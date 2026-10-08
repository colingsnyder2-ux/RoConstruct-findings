// roc 2007-08 005a24b0  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a24b0
//
// 005a24b0  56                   push esi
// 005a24b1  8bf1                 mov esi, ecx
// 005a24b3  c7062c3f7b00         mov dword ptr [esi], 0x7b3f2c
// 005a24b9  c74604203f7b00       mov dword ptr [esi + 4], 0x7b3f20
// 005a24c0  c74610183f7b00       mov dword ptr [esi + 0x10], 0x7b3f18
// 005a24c7  c74614083f7b00       mov dword ptr [esi + 0x14], 0x7b3f08
// 005a24ce  c7462cf83e7b00       mov dword ptr [esi + 0x2c], 0x7b3ef8
// 005a24d5  c74644e83e7b00       mov dword ptr [esi + 0x44], 0x7b3ee8
// 005a24dc  c7465cd83e7b00       mov dword ptr [esi + 0x5c], 0x7b3ed8
// 005a24e3  c74674c83e7b00       mov dword ptr [esi + 0x74], 0x7b3ec8
// 005a24ea  c7868c000000b83e7b00 mov dword ptr [esi + 0x8c], 0x7b3eb8
// 005a24f4  e8b7ddf9ff           call 0x5402b0
// 005a24f9  f644240801           test byte ptr [esp + 8], 1
// 005a24fe  740a                 je 0x5a250a
// 005a2500  56                   push esi
// 005a2501  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a2507  83c404               add esp, 4
// 005a250a  8bc6                 mov eax, esi
// 005a250c  5e                   pop esi
// 005a250d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
