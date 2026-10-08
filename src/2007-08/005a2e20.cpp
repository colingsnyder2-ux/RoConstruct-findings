// roc 2007-08 005a2e20  unit: RBX::VShirt::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2e20
//
// 005a2e20  56                   push esi
// 005a2e21  8bf1                 mov esi, ecx
// 005a2e23  c706ac417b00         mov dword ptr [esi], 0x7b41ac
// 005a2e29  c74604a0417b00       mov dword ptr [esi + 4], 0x7b41a0
// 005a2e30  c7461098417b00       mov dword ptr [esi + 0x10], 0x7b4198
// 005a2e37  c7461488417b00       mov dword ptr [esi + 0x14], 0x7b4188
// 005a2e3e  c7462c78417b00       mov dword ptr [esi + 0x2c], 0x7b4178
// 005a2e45  c7464468417b00       mov dword ptr [esi + 0x44], 0x7b4168
// 005a2e4c  c7465c58417b00       mov dword ptr [esi + 0x5c], 0x7b4158
// 005a2e53  c7467448417b00       mov dword ptr [esi + 0x74], 0x7b4148
// 005a2e5a  c7868c00000038417b00 mov dword ptr [esi + 0x8c], 0x7b4138
// 005a2e64  e8c7ecffff           call 0x5a1b30
// 005a2e69  f644240801           test byte ptr [esp + 8], 1
// 005a2e6e  740a                 je 0x5a2e7a
// 005a2e70  56                   push esi
// 005a2e71  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a2e77  83c404               add esp, 4
// 005a2e7a  8bc6                 mov eax, esi
// 005a2e7c  5e                   pop esi
// 005a2e7d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
