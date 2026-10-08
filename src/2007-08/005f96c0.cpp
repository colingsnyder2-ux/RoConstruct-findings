// roc 2007-08 005f96c0  unit: RBX::VDebrisService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f96c0
//
// 005f96c0  56                   push esi
// 005f96c1  8bf1                 mov esi, ecx
// 005f96c3  c7063c1b7c00         mov dword ptr [esi], 0x7c1b3c
// 005f96c9  c74604341b7c00       mov dword ptr [esi + 4], 0x7c1b34
// 005f96d0  c746102c1b7c00       mov dword ptr [esi + 0x10], 0x7c1b2c
// 005f96d7  c746141c1b7c00       mov dword ptr [esi + 0x14], 0x7c1b1c
// 005f96de  c7462c0c1b7c00       mov dword ptr [esi + 0x2c], 0x7c1b0c
// 005f96e5  c74644fc1a7c00       mov dword ptr [esi + 0x44], 0x7c1afc
// 005f96ec  c7465cec1a7c00       mov dword ptr [esi + 0x5c], 0x7c1aec
// 005f96f3  c74674dc1a7c00       mov dword ptr [esi + 0x74], 0x7c1adc
// 005f96fa  c7868c000000cc1a7c00 mov dword ptr [esi + 0x8c], 0x7c1acc
// 005f9704  e8a76bf4ff           call 0x5402b0
// 005f9709  f644240801           test byte ptr [esp + 8], 1
// 005f970e  740a                 je 0x5f971a
// 005f9710  56                   push esi
// 005f9711  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f9717  83c404               add esp, 4
// 005f971a  8bc6                 mov eax, esi
// 005f971c  5e                   pop esi
// 005f971d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
