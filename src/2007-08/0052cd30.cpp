// roc 2007-08 0052cd30  unit: RBX::VRunService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052cd30
//
// 0052cd30  56                   push esi
// 0052cd31  8bf1                 mov esi, ecx
// 0052cd33  c706ec487a00         mov dword ptr [esi], 0x7a48ec
// 0052cd39  c74604e0487a00       mov dword ptr [esi + 4], 0x7a48e0
// 0052cd40  c74610d8487a00       mov dword ptr [esi + 0x10], 0x7a48d8
// 0052cd47  c74614c8487a00       mov dword ptr [esi + 0x14], 0x7a48c8
// 0052cd4e  c7462cb8487a00       mov dword ptr [esi + 0x2c], 0x7a48b8
// 0052cd55  c74644a8487a00       mov dword ptr [esi + 0x44], 0x7a48a8
// 0052cd5c  c7465c98487a00       mov dword ptr [esi + 0x5c], 0x7a4898
// 0052cd63  c7467488487a00       mov dword ptr [esi + 0x74], 0x7a4888
// 0052cd6a  c7868c00000078487a00 mov dword ptr [esi + 0x8c], 0x7a4878
// 0052cd74  e837350100           call 0x5402b0
// 0052cd79  f644240801           test byte ptr [esp + 8], 1
// 0052cd7e  740a                 je 0x52cd8a
// 0052cd80  56                   push esi
// 0052cd81  ff15c4e67700         call dword ptr [0x77e6c4]
// 0052cd87  83c404               add esp, 4
// 0052cd8a  8bc6                 mov eax, esi
// 0052cd8c  5e                   pop esi
// 0052cd8d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
