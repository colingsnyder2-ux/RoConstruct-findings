// roc 2007-08 005a3c50  unit: RBX::VTimerService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3c50
//
// 005a3c50  56                   push esi
// 005a3c51  8bf1                 mov esi, ecx
// 005a3c53  c706a44f7b00         mov dword ptr [esi], 0x7b4fa4
// 005a3c59  c746049c4f7b00       mov dword ptr [esi + 4], 0x7b4f9c
// 005a3c60  c74610944f7b00       mov dword ptr [esi + 0x10], 0x7b4f94
// 005a3c67  c74614844f7b00       mov dword ptr [esi + 0x14], 0x7b4f84
// 005a3c6e  c7462c744f7b00       mov dword ptr [esi + 0x2c], 0x7b4f74
// 005a3c75  c74644644f7b00       mov dword ptr [esi + 0x44], 0x7b4f64
// 005a3c7c  c7465c544f7b00       mov dword ptr [esi + 0x5c], 0x7b4f54
// 005a3c83  c74674444f7b00       mov dword ptr [esi + 0x74], 0x7b4f44
// 005a3c8a  c7868c000000344f7b00 mov dword ptr [esi + 0x8c], 0x7b4f34
// 005a3c94  e817c6f9ff           call 0x5402b0
// 005a3c99  f644240801           test byte ptr [esp + 8], 1
// 005a3c9e  740a                 je 0x5a3caa
// 005a3ca0  56                   push esi
// 005a3ca1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a3ca7  83c404               add esp, 4
// 005a3caa  8bc6                 mov eax, esi
// 005a3cac  5e                   pop esi
// 005a3cad  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
