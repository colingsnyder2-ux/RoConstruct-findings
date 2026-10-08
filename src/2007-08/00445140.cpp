// roc 2007-08 00445140  unit: VCRenderSettings::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445140
//
// 00445140  56                   push esi
// 00445141  8bf1                 mov esi, ecx
// 00445143  c706bcfc7800         mov dword ptr [esi], 0x78fcbc
// 00445149  c74604b4fc7800       mov dword ptr [esi + 4], 0x78fcb4
// 00445150  c74610acfc7800       mov dword ptr [esi + 0x10], 0x78fcac
// 00445157  c746149cfc7800       mov dword ptr [esi + 0x14], 0x78fc9c
// 0044515e  c7462c8cfc7800       mov dword ptr [esi + 0x2c], 0x78fc8c
// 00445165  c746447cfc7800       mov dword ptr [esi + 0x44], 0x78fc7c
// 0044516c  c7465c6cfc7800       mov dword ptr [esi + 0x5c], 0x78fc6c
// 00445173  c746745cfc7800       mov dword ptr [esi + 0x74], 0x78fc5c
// 0044517a  c7868c0000004cfc7800 mov dword ptr [esi + 0x8c], 0x78fc4c
// 00445184  e827b10f00           call 0x5402b0
// 00445189  f644240801           test byte ptr [esp + 8], 1
// 0044518e  740a                 je 0x44519a
// 00445190  56                   push esi
// 00445191  ff15c4e67700         call dword ptr [0x77e6c4]
// 00445197  83c404               add esp, 4
// 0044519a  8bc6                 mov eax, esi
// 0044519c  5e                   pop esi
// 0044519d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
