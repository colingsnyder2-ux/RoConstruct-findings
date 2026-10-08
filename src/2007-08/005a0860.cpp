// roc 2007-08 005a0860  unit: RBX::VSpawnerService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0860
//
// 005a0860  56                   push esi
// 005a0861  8bf1                 mov esi, ecx
// 005a0863  c706e4367b00         mov dword ptr [esi], 0x7b36e4
// 005a0869  c74604dc367b00       mov dword ptr [esi + 4], 0x7b36dc
// 005a0870  c74610d4367b00       mov dword ptr [esi + 0x10], 0x7b36d4
// 005a0877  c74614c4367b00       mov dword ptr [esi + 0x14], 0x7b36c4
// 005a087e  c7462cb4367b00       mov dword ptr [esi + 0x2c], 0x7b36b4
// 005a0885  c74644a4367b00       mov dword ptr [esi + 0x44], 0x7b36a4
// 005a088c  c7465c94367b00       mov dword ptr [esi + 0x5c], 0x7b3694
// 005a0893  c7467484367b00       mov dword ptr [esi + 0x74], 0x7b3684
// 005a089a  c7868c00000074367b00 mov dword ptr [esi + 0x8c], 0x7b3674
// 005a08a4  e807faf9ff           call 0x5402b0
// 005a08a9  f644240801           test byte ptr [esp + 8], 1
// 005a08ae  740a                 je 0x5a08ba
// 005a08b0  56                   push esi
// 005a08b1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a08b7  83c404               add esp, 4
// 005a08ba  8bc6                 mov eax, esi
// 005a08bc  5e                   pop esi
// 005a08bd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
