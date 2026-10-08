// roc 2007-08 005b5980  unit: RBX::VSky::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5980
//
// 005b5980  56                   push esi
// 005b5981  8bf1                 mov esi, ecx
// 005b5983  c7060c807b00         mov dword ptr [esi], 0x7b800c
// 005b5989  c7460404807b00       mov dword ptr [esi + 4], 0x7b8004
// 005b5990  c74610fc7f7b00       mov dword ptr [esi + 0x10], 0x7b7ffc
// 005b5997  c74614ec7f7b00       mov dword ptr [esi + 0x14], 0x7b7fec
// 005b599e  c7462cdc7f7b00       mov dword ptr [esi + 0x2c], 0x7b7fdc
// 005b59a5  c74644cc7f7b00       mov dword ptr [esi + 0x44], 0x7b7fcc
// 005b59ac  c7465cbc7f7b00       mov dword ptr [esi + 0x5c], 0x7b7fbc
// 005b59b3  c74674ac7f7b00       mov dword ptr [esi + 0x74], 0x7b7fac
// 005b59ba  c7868c0000009c7f7b00 mov dword ptr [esi + 0x8c], 0x7b7f9c
// 005b59c4  e8e7a8f8ff           call 0x5402b0
// 005b59c9  f644240801           test byte ptr [esp + 8], 1
// 005b59ce  740a                 je 0x5b59da
// 005b59d0  56                   push esi
// 005b59d1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005b59d7  83c404               add esp, 4
// 005b59da  8bc6                 mov eax, esi
// 005b59dc  5e                   pop esi
// 005b59dd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
