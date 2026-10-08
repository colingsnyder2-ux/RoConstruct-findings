// roc 2007-08 005f65f0  unit: RBX::M$1?sFloatValue::V?$Value::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f65f0
//
// 005f65f0  56                   push esi
// 005f65f1  8bf1                 mov esi, ecx
// 005f65f3  c706cc027c00         mov dword ptr [esi], 0x7c02cc
// 005f65f9  c74604c4027c00       mov dword ptr [esi + 4], 0x7c02c4
// 005f6600  c74610bc027c00       mov dword ptr [esi + 0x10], 0x7c02bc
// 005f6607  c74614ac027c00       mov dword ptr [esi + 0x14], 0x7c02ac
// 005f660e  c7462c9c027c00       mov dword ptr [esi + 0x2c], 0x7c029c
// 005f6615  c746448c027c00       mov dword ptr [esi + 0x44], 0x7c028c
// 005f661c  c7465c7c027c00       mov dword ptr [esi + 0x5c], 0x7c027c
// 005f6623  c746746c027c00       mov dword ptr [esi + 0x74], 0x7c026c
// 005f662a  c7868c0000005c027c00 mov dword ptr [esi + 0x8c], 0x7c025c
// 005f6634  e8779cf4ff           call 0x5402b0
// 005f6639  f644240801           test byte ptr [esp + 8], 1
// 005f663e  740a                 je 0x5f664a
// 005f6640  56                   push esi
// 005f6641  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f6647  83c404               add esp, 4
// 005f664a  8bc6                 mov eax, esi
// 005f664c  5e                   pop esi
// 005f664d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
