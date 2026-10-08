// roc 2007-08 005f0020  unit: RBX::VMessage::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0020
//
// 005f0020  56                   push esi
// 005f0021  8bf1                 mov esi, ecx
// 005f0023  c7065cf87a00         mov dword ptr [esi], 0x7af85c
// 005f0029  c7460454f87a00       mov dword ptr [esi + 4], 0x7af854
// 005f0030  c746104cf87a00       mov dword ptr [esi + 0x10], 0x7af84c
// 005f0037  c746143cf87a00       mov dword ptr [esi + 0x14], 0x7af83c
// 005f003e  c7462c2cf87a00       mov dword ptr [esi + 0x2c], 0x7af82c
// 005f0045  c746441cf87a00       mov dword ptr [esi + 0x44], 0x7af81c
// 005f004c  c7465c0cf87a00       mov dword ptr [esi + 0x5c], 0x7af80c
// 005f0053  c74674fcf77a00       mov dword ptr [esi + 0x74], 0x7af7fc
// 005f005a  c7868c000000ecf77a00 mov dword ptr [esi + 0x8c], 0x7af7ec
// 005f0064  e84702f5ff           call 0x5402b0
// 005f0069  f644240801           test byte ptr [esp + 8], 1
// 005f006e  740a                 je 0x5f007a
// 005f0070  56                   push esi
// 005f0071  ff15c4e67700         call dword ptr [0x77e6c4]
// 005f0077  83c404               add esp, 4
// 005f007a  8bc6                 mov eax, esi
// 005f007c  5e                   pop esi
// 005f007d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
