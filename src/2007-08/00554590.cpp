// roc 2007-08 00554590  unit: RBX::VTeam::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554590
//
// 00554590  56                   push esi
// 00554591  8bf1                 mov esi, ecx
// 00554593  c706847f7a00         mov dword ptr [esi], 0x7a7f84
// 00554599  c746047c7f7a00       mov dword ptr [esi + 4], 0x7a7f7c
// 005545a0  c74610747f7a00       mov dword ptr [esi + 0x10], 0x7a7f74
// 005545a7  c74614647f7a00       mov dword ptr [esi + 0x14], 0x7a7f64
// 005545ae  c7462c547f7a00       mov dword ptr [esi + 0x2c], 0x7a7f54
// 005545b5  c74644447f7a00       mov dword ptr [esi + 0x44], 0x7a7f44
// 005545bc  c7465c347f7a00       mov dword ptr [esi + 0x5c], 0x7a7f34
// 005545c3  c74674247f7a00       mov dword ptr [esi + 0x74], 0x7a7f24
// 005545ca  c7868c000000147f7a00 mov dword ptr [esi + 0x8c], 0x7a7f14
// 005545d4  e8d7bcfeff           call 0x5402b0
// 005545d9  f644240801           test byte ptr [esp + 8], 1
// 005545de  740a                 je 0x5545ea
// 005545e0  56                   push esi
// 005545e1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005545e7  83c404               add esp, 4
// 005545ea  8bc6                 mov eax, esi
// 005545ec  5e                   pop esi
// 005545ed  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
