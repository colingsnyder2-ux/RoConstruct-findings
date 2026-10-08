// roc 2007-08 00599650  unit: RBX::VCamera::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00599650
//
// 00599650  56                   push esi
// 00599651  8bf1                 mov esi, ecx
// 00599653  c706c4157b00         mov dword ptr [esi], 0x7b15c4
// 00599659  c74604bc157b00       mov dword ptr [esi + 4], 0x7b15bc
// 00599660  c74610b4157b00       mov dword ptr [esi + 0x10], 0x7b15b4
// 00599667  c74614a4157b00       mov dword ptr [esi + 0x14], 0x7b15a4
// 0059966e  c7462c94157b00       mov dword ptr [esi + 0x2c], 0x7b1594
// 00599675  c7464484157b00       mov dword ptr [esi + 0x44], 0x7b1584
// 0059967c  c7465c74157b00       mov dword ptr [esi + 0x5c], 0x7b1574
// 00599683  c7467464157b00       mov dword ptr [esi + 0x74], 0x7b1564
// 0059968a  c7868c00000054157b00 mov dword ptr [esi + 0x8c], 0x7b1554
// 00599694  e8176cfaff           call 0x5402b0
// 00599699  f644240801           test byte ptr [esp + 8], 1
// 0059969e  740a                 je 0x5996aa
// 005996a0  56                   push esi
// 005996a1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005996a7  83c404               add esp, 4
// 005996aa  8bc6                 mov eax, esi
// 005996ac  5e                   pop esi
// 005996ad  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
