// roc 2007-08 00532cf0  unit: RBX::VSelection::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532cf0
//
// 00532cf0  56                   push esi
// 00532cf1  8bf1                 mov esi, ecx
// 00532cf3  c706e4527a00         mov dword ptr [esi], 0x7a52e4
// 00532cf9  c74604d8527a00       mov dword ptr [esi + 4], 0x7a52d8
// 00532d00  c74610d0527a00       mov dword ptr [esi + 0x10], 0x7a52d0
// 00532d07  c74614c0527a00       mov dword ptr [esi + 0x14], 0x7a52c0
// 00532d0e  c7462cb0527a00       mov dword ptr [esi + 0x2c], 0x7a52b0
// 00532d15  c74644a0527a00       mov dword ptr [esi + 0x44], 0x7a52a0
// 00532d1c  c7465c90527a00       mov dword ptr [esi + 0x5c], 0x7a5290
// 00532d23  c7467480527a00       mov dword ptr [esi + 0x74], 0x7a5280
// 00532d2a  c7868c00000070527a00 mov dword ptr [esi + 0x8c], 0x7a5270
// 00532d34  e877d50000           call 0x5402b0
// 00532d39  f644240801           test byte ptr [esp + 8], 1
// 00532d3e  740a                 je 0x532d4a
// 00532d40  56                   push esi
// 00532d41  ff15c4e67700         call dword ptr [0x77e6c4]
// 00532d47  83c404               add esp, 4
// 00532d4a  8bc6                 mov eax, esi
// 00532d4c  5e                   pop esi
// 00532d4d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
