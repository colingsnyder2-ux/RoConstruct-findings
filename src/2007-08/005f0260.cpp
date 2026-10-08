// roc 2007-08 005f0260  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0260
//
// 005f0260  56                   push esi
// 005f0261  8bf1                 mov esi, ecx
// 005f0263  c7063c047c00         mov dword ptr [esi], 0x7c043c
// 005f0269  c7460434047c00       mov dword ptr [esi + 4], 0x7c0434
// 005f0270  c746102c047c00       mov dword ptr [esi + 0x10], 0x7c042c
// 005f0277  c746141c047c00       mov dword ptr [esi + 0x14], 0x7c041c
// 005f027e  c7462c0c047c00       mov dword ptr [esi + 0x2c], 0x7c040c
// 005f0285  c74644fc037c00       mov dword ptr [esi + 0x44], 0x7c03fc
// 005f028c  c7465cec037c00       mov dword ptr [esi + 0x5c], 0x7c03ec
// 005f0293  c74674dc037c00       mov dword ptr [esi + 0x74], 0x7c03dc
// 005f029a  c7868c000000cc037c00 mov dword ptr [esi + 0x8c], 0x7c03cc
// 005f02a4  e80700f5ff           call 0x5402b0
// 005f02a9  f644240801           test byte ptr [esp + 8], 1
// 005f02ae  740a                 je 0x5f02ba
// 005f02b0  56                   push esi
// 005f02b1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f02b7  83c404               add esp, 4
// 005f02ba  8bc6                 mov eax, esi
// 005f02bc  5e                   pop esi
// 005f02bd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
