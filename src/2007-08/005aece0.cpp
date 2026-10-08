// roc 2007-08 005aece0  unit: RBX::VLighting::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aece0
//
// 005aece0  56                   push esi
// 005aece1  8bf1                 mov esi, ecx
// 005aece3  c70694597b00         mov dword ptr [esi], 0x7b5994
// 005aece9  c746048c597b00       mov dword ptr [esi + 4], 0x7b598c
// 005aecf0  c7461084597b00       mov dword ptr [esi + 0x10], 0x7b5984
// 005aecf7  c7461474597b00       mov dword ptr [esi + 0x14], 0x7b5974
// 005aecfe  c7462c64597b00       mov dword ptr [esi + 0x2c], 0x7b5964
// 005aed05  c7464454597b00       mov dword ptr [esi + 0x44], 0x7b5954
// 005aed0c  c7465c44597b00       mov dword ptr [esi + 0x5c], 0x7b5944
// 005aed13  c7467434597b00       mov dword ptr [esi + 0x74], 0x7b5934
// 005aed1a  c7868c00000024597b00 mov dword ptr [esi + 0x8c], 0x7b5924
// 005aed24  e88715f9ff           call 0x5402b0
// 005aed29  f644240801           test byte ptr [esp + 8], 1
// 005aed2e  740a                 je 0x5aed3a
// 005aed30  56                   push esi
// 005aed31  ff15c4e67700         call dword ptr [0x77e6c4]
// 005aed37  83c404               add esp, 4
// 005aed3a  8bc6                 mov eax, esi
// 005aed3c  5e                   pop esi
// 005aed3d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
