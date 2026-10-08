// roc 2007-08 005a17e0  unit: RBX::VSkin::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a17e0
//
// 005a17e0  56                   push esi
// 005a17e1  8bf1                 mov esi, ecx
// 005a17e3  c706ac407b00         mov dword ptr [esi], 0x7b40ac
// 005a17e9  c74604a0407b00       mov dword ptr [esi + 4], 0x7b40a0
// 005a17f0  c7461098407b00       mov dword ptr [esi + 0x10], 0x7b4098
// 005a17f7  c7461488407b00       mov dword ptr [esi + 0x14], 0x7b4088
// 005a17fe  c7462c78407b00       mov dword ptr [esi + 0x2c], 0x7b4078
// 005a1805  c7464468407b00       mov dword ptr [esi + 0x44], 0x7b4068
// 005a180c  c7465c58407b00       mov dword ptr [esi + 0x5c], 0x7b4058
// 005a1813  c7467448407b00       mov dword ptr [esi + 0x74], 0x7b4048
// 005a181a  c7868c00000038407b00 mov dword ptr [esi + 0x8c], 0x7b4038
// 005a1824  e887eaf9ff           call 0x5402b0
// 005a1829  f644240801           test byte ptr [esp + 8], 1
// 005a182e  740a                 je 0x5a183a
// 005a1830  56                   push esi
// 005a1831  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a1837  83c404               add esp, 4
// 005a183a  8bc6                 mov eax, esi
// 005a183c  5e                   pop esi
// 005a183d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
