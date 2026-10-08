// roc 2007-08 00572cb0  unit: RBX::VTexture::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572cb0
//
// 00572cb0  56                   push esi
// 00572cb1  8bf1                 mov esi, ecx
// 00572cb3  c7062ca37a00         mov dword ptr [esi], 0x7aa32c
// 00572cb9  c7460424a37a00       mov dword ptr [esi + 4], 0x7aa324
// 00572cc0  c746101ca37a00       mov dword ptr [esi + 0x10], 0x7aa31c
// 00572cc7  c746140ca37a00       mov dword ptr [esi + 0x14], 0x7aa30c
// 00572cce  c7462cfca27a00       mov dword ptr [esi + 0x2c], 0x7aa2fc
// 00572cd5  c74644eca27a00       mov dword ptr [esi + 0x44], 0x7aa2ec
// 00572cdc  c7465cdca27a00       mov dword ptr [esi + 0x5c], 0x7aa2dc
// 00572ce3  c74674cca27a00       mov dword ptr [esi + 0x74], 0x7aa2cc
// 00572cea  c7868c000000bca27a00 mov dword ptr [esi + 0x8c], 0x7aa2bc
// 00572cf4  e847feffff           call 0x572b40
// 00572cf9  f644240801           test byte ptr [esp + 8], 1
// 00572cfe  740a                 je 0x572d0a
// 00572d00  56                   push esi
// 00572d01  ff15c4e67700         call dword ptr [0x77e6c4]
// 00572d07  83c404               add esp, 4
// 00572d0a  8bc6                 mov eax, esi
// 00572d0c  5e                   pop esi
// 00572d0d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
