// roc 2007-08 0053e220  unit: RBX::VLocalScript::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e220
//
// 0053e220  56                   push esi
// 0053e221  8bf1                 mov esi, ecx
// 0053e223  c706ac5f7a00         mov dword ptr [esi], 0x7a5fac
// 0053e229  c74604a45f7a00       mov dword ptr [esi + 4], 0x7a5fa4
// 0053e230  c746109c5f7a00       mov dword ptr [esi + 0x10], 0x7a5f9c
// 0053e237  c746148c5f7a00       mov dword ptr [esi + 0x14], 0x7a5f8c
// 0053e23e  c7462c7c5f7a00       mov dword ptr [esi + 0x2c], 0x7a5f7c
// 0053e245  c746446c5f7a00       mov dword ptr [esi + 0x44], 0x7a5f6c
// 0053e24c  c7465c5c5f7a00       mov dword ptr [esi + 0x5c], 0x7a5f5c
// 0053e253  c746744c5f7a00       mov dword ptr [esi + 0x74], 0x7a5f4c
// 0053e25a  c7868c0000003c5f7a00 mov dword ptr [esi + 0x8c], 0x7a5f3c
// 0053e264  e877f1ffff           call 0x53d3e0
// 0053e269  f644240801           test byte ptr [esp + 8], 1
// 0053e26e  740a                 je 0x53e27a
// 0053e270  56                   push esi
// 0053e271  ff15c4e67700         call dword ptr [0x77e6c4]
// 0053e277  83c404               add esp, 4
// 0053e27a  8bc6                 mov eax, esi
// 0053e27c  5e                   pop esi
// 0053e27d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
