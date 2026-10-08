// roc 2007-08 00591fa0  unit: RBX::VVisit::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591fa0
//
// 00591fa0  56                   push esi
// 00591fa1  8bf1                 mov esi, ecx
// 00591fa3  c706bcff7a00         mov dword ptr [esi], 0x7affbc
// 00591fa9  c74604b4ff7a00       mov dword ptr [esi + 4], 0x7affb4
// 00591fb0  c74610acff7a00       mov dword ptr [esi + 0x10], 0x7affac
// 00591fb7  c746149cff7a00       mov dword ptr [esi + 0x14], 0x7aff9c
// 00591fbe  c7462c8cff7a00       mov dword ptr [esi + 0x2c], 0x7aff8c
// 00591fc5  c746447cff7a00       mov dword ptr [esi + 0x44], 0x7aff7c
// 00591fcc  c7465c6cff7a00       mov dword ptr [esi + 0x5c], 0x7aff6c
// 00591fd3  c746745cff7a00       mov dword ptr [esi + 0x74], 0x7aff5c
// 00591fda  c7868c0000004cff7a00 mov dword ptr [esi + 0x8c], 0x7aff4c
// 00591fe4  e8c7e2faff           call 0x5402b0
// 00591fe9  f644240801           test byte ptr [esp + 8], 1
// 00591fee  740a                 je 0x591ffa
// 00591ff0  56                   push esi
// 00591ff1  ff15c4e67700         call dword ptr [0x77e6c4]
// 00591ff7  83c404               add esp, 4
// 00591ffa  8bc6                 mov eax, esi
// 00591ffc  5e                   pop esi
// 00591ffd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
