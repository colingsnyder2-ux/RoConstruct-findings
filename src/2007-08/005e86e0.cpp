// roc 2007-08 005e86e0  unit: RBX::VExplosion::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e86e0
//
// 005e86e0  56                   push esi
// 005e86e1  8bf1                 mov esi, ecx
// 005e86e3  c706ecd87b00         mov dword ptr [esi], 0x7bd8ec
// 005e86e9  c74604e4d87b00       mov dword ptr [esi + 4], 0x7bd8e4
// 005e86f0  c74610dcd87b00       mov dword ptr [esi + 0x10], 0x7bd8dc
// 005e86f7  c74614ccd87b00       mov dword ptr [esi + 0x14], 0x7bd8cc
// 005e86fe  c7462cbcd87b00       mov dword ptr [esi + 0x2c], 0x7bd8bc
// 005e8705  c74644acd87b00       mov dword ptr [esi + 0x44], 0x7bd8ac
// 005e870c  c7465c9cd87b00       mov dword ptr [esi + 0x5c], 0x7bd89c
// 005e8713  c746748cd87b00       mov dword ptr [esi + 0x74], 0x7bd88c
// 005e871a  c7868c0000007cd87b00 mov dword ptr [esi + 0x8c], 0x7bd87c
// 005e8724  e8877bf5ff           call 0x5402b0
// 005e8729  f644240801           test byte ptr [esp + 8], 1
// 005e872e  740a                 je 0x5e873a
// 005e8730  56                   push esi
// 005e8731  ff15c4e67700         call dword ptr [0x77e6c4]
// 005e8737  83c404               add esp, 4
// 005e873a  8bc6                 mov eax, esi
// 005e873c  5e                   pop esi
// 005e873d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
