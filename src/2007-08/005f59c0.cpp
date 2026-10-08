// roc 2007-08 005f59c0  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f59c0
//
// 005f59c0  56                   push esi
// 005f59c1  8bf1                 mov esi, ecx
// 005f59c3  c70684037c00         mov dword ptr [esi], 0x7c0384
// 005f59c9  c746047c037c00       mov dword ptr [esi + 4], 0x7c037c
// 005f59d0  c7461074037c00       mov dword ptr [esi + 0x10], 0x7c0374
// 005f59d7  c7461464037c00       mov dword ptr [esi + 0x14], 0x7c0364
// 005f59de  c7462c54037c00       mov dword ptr [esi + 0x2c], 0x7c0354
// 005f59e5  c7464444037c00       mov dword ptr [esi + 0x44], 0x7c0344
// 005f59ec  c7465c34037c00       mov dword ptr [esi + 0x5c], 0x7c0334
// 005f59f3  c7467424037c00       mov dword ptr [esi + 0x74], 0x7c0324
// 005f59fa  c7868c00000014037c00 mov dword ptr [esi + 0x8c], 0x7c0314
// 005f5a04  e8a7a8f4ff           call 0x5402b0
// 005f5a09  f644240801           test byte ptr [esp + 8], 1
// 005f5a0e  740a                 je 0x5f5a1a
// 005f5a10  56                   push esi
// 005f5a11  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f5a17  83c404               add esp, 4
// 005f5a1a  8bc6                 mov eax, esi
// 005f5a1c  5e                   pop esi
// 005f5a1d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
