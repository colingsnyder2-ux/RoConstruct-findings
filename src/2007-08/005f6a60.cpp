// roc 2007-08 005f6a60  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f6a60
//
// 005f6a60  56                   push esi
// 005f6a61  8bf1                 mov esi, ecx
// 005f6a63  c706f4047c00         mov dword ptr [esi], 0x7c04f4
// 005f6a69  c74604ec047c00       mov dword ptr [esi + 4], 0x7c04ec
// 005f6a70  c74610e4047c00       mov dword ptr [esi + 0x10], 0x7c04e4
// 005f6a77  c74614d4047c00       mov dword ptr [esi + 0x14], 0x7c04d4
// 005f6a7e  c7462cc4047c00       mov dword ptr [esi + 0x2c], 0x7c04c4
// 005f6a85  c74644b4047c00       mov dword ptr [esi + 0x44], 0x7c04b4
// 005f6a8c  c7465ca4047c00       mov dword ptr [esi + 0x5c], 0x7c04a4
// 005f6a93  c7467494047c00       mov dword ptr [esi + 0x74], 0x7c0494
// 005f6a9a  c7868c00000084047c00 mov dword ptr [esi + 0x8c], 0x7c0484
// 005f6aa4  e80798f4ff           call 0x5402b0
// 005f6aa9  f644240801           test byte ptr [esp + 8], 1
// 005f6aae  740a                 je 0x5f6aba
// 005f6ab0  56                   push esi
// 005f6ab1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f6ab7  83c404               add esp, 4
// 005f6aba  8bc6                 mov eax, esi
// 005f6abc  5e                   pop esi
// 005f6abd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
