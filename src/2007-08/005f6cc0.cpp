// roc 2007-08 005f6cc0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f6cc0
//
// 005f6cc0  56                   push esi
// 005f6cc1  8bf1                 mov esi, ecx
// 005f6cc3  c70664067c00         mov dword ptr [esi], 0x7c0664
// 005f6cc9  c746045c067c00       mov dword ptr [esi + 4], 0x7c065c
// 005f6cd0  c7461054067c00       mov dword ptr [esi + 0x10], 0x7c0654
// 005f6cd7  c7461444067c00       mov dword ptr [esi + 0x14], 0x7c0644
// 005f6cde  c7462c34067c00       mov dword ptr [esi + 0x2c], 0x7c0634
// 005f6ce5  c7464424067c00       mov dword ptr [esi + 0x44], 0x7c0624
// 005f6cec  c7465c14067c00       mov dword ptr [esi + 0x5c], 0x7c0614
// 005f6cf3  c7467404067c00       mov dword ptr [esi + 0x74], 0x7c0604
// 005f6cfa  c7868c000000f4057c00 mov dword ptr [esi + 0x8c], 0x7c05f4
// 005f6d04  e8a795f4ff           call 0x5402b0
// 005f6d09  f644240801           test byte ptr [esp + 8], 1
// 005f6d0e  740a                 je 0x5f6d1a
// 005f6d10  56                   push esi
// 005f6d11  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f6d17  83c404               add esp, 4
// 005f6d1a  8bc6                 mov eax, esi
// 005f6d1c  5e                   pop esi
// 005f6d1d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
