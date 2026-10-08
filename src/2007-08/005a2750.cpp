// roc 2007-08 005a2750  unit: RBX::VBodyColors::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2750
//
// 005a2750  56                   push esi
// 005a2751  8bf1                 mov esi, ecx
// 005a2753  c706ec3f7b00         mov dword ptr [esi], 0x7b3fec
// 005a2759  c74604e03f7b00       mov dword ptr [esi + 4], 0x7b3fe0
// 005a2760  c74610d83f7b00       mov dword ptr [esi + 0x10], 0x7b3fd8
// 005a2767  c74614c83f7b00       mov dword ptr [esi + 0x14], 0x7b3fc8
// 005a276e  c7462cb83f7b00       mov dword ptr [esi + 0x2c], 0x7b3fb8
// 005a2775  c74644a83f7b00       mov dword ptr [esi + 0x44], 0x7b3fa8
// 005a277c  c7465c983f7b00       mov dword ptr [esi + 0x5c], 0x7b3f98
// 005a2783  c74674883f7b00       mov dword ptr [esi + 0x74], 0x7b3f88
// 005a278a  c7868c000000783f7b00 mov dword ptr [esi + 0x8c], 0x7b3f78
// 005a2794  e817dbf9ff           call 0x5402b0
// 005a2799  f644240801           test byte ptr [esp + 8], 1
// 005a279e  740a                 je 0x5a27aa
// 005a27a0  56                   push esi
// 005a27a1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a27a7  83c404               add esp, 4
// 005a27aa  8bc6                 mov eax, esi
// 005a27ac  5e                   pop esi
// 005a27ad  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
