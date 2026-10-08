// roc 2007-08 00579770  unit: RBX::VSpecialShape::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579770
//
// 00579770  56                   push esi
// 00579771  8bf1                 mov esi, ecx
// 00579773  c7064cb17a00         mov dword ptr [esi], 0x7ab14c
// 00579779  c7460444b17a00       mov dword ptr [esi + 4], 0x7ab144
// 00579780  c746103cb17a00       mov dword ptr [esi + 0x10], 0x7ab13c
// 00579787  c746142cb17a00       mov dword ptr [esi + 0x14], 0x7ab12c
// 0057978e  c7462c1cb17a00       mov dword ptr [esi + 0x2c], 0x7ab11c
// 00579795  c746440cb17a00       mov dword ptr [esi + 0x44], 0x7ab10c
// 0057979c  c7465cfcb07a00       mov dword ptr [esi + 0x5c], 0x7ab0fc
// 005797a3  c74674ecb07a00       mov dword ptr [esi + 0x74], 0x7ab0ec
// 005797aa  c7868c000000dcb07a00 mov dword ptr [esi + 0x8c], 0x7ab0dc
// 005797b4  e8f76afcff           call 0x5402b0
// 005797b9  f644240801           test byte ptr [esp + 8], 1
// 005797be  740a                 je 0x5797ca
// 005797c0  56                   push esi
// 005797c1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005797c7  83c404               add esp, 4
// 005797ca  8bc6                 mov eax, esi
// 005797cc  5e                   pop esi
// 005797cd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
