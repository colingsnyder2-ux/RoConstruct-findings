// roc 2007-08 005a77d0  unit: RBX::VHumanoid::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a77d0
//
// 005a77d0  56                   push esi
// 005a77d1  8bf1                 mov esi, ecx
// 005a77d3  c706dc527b00         mov dword ptr [esi], 0x7b52dc
// 005a77d9  c74604d0527b00       mov dword ptr [esi + 4], 0x7b52d0
// 005a77e0  c74610c8527b00       mov dword ptr [esi + 0x10], 0x7b52c8
// 005a77e7  c74614b8527b00       mov dword ptr [esi + 0x14], 0x7b52b8
// 005a77ee  c7462ca8527b00       mov dword ptr [esi + 0x2c], 0x7b52a8
// 005a77f5  c7464498527b00       mov dword ptr [esi + 0x44], 0x7b5298
// 005a77fc  c7465c88527b00       mov dword ptr [esi + 0x5c], 0x7b5288
// 005a7803  c7467478527b00       mov dword ptr [esi + 0x74], 0x7b5278
// 005a780a  c7868c00000068527b00 mov dword ptr [esi + 0x8c], 0x7b5268
// 005a7814  e8978af9ff           call 0x5402b0
// 005a7819  f644240801           test byte ptr [esp + 8], 1
// 005a781e  740a                 je 0x5a782a
// 005a7820  56                   push esi
// 005a7821  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a7827  83c404               add esp, 4
// 005a782a  8bc6                 mov eax, esi
// 005a782c  5e                   pop esi
// 005a782d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
