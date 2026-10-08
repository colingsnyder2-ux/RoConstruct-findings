// roc 2007-08 00597e30  unit: RBX::VControllerService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597e30
//
// 00597e30  56                   push esi
// 00597e31  8bf1                 mov esi, ecx
// 00597e33  c706e4117b00         mov dword ptr [esi], 0x7b11e4
// 00597e39  c74604d8117b00       mov dword ptr [esi + 4], 0x7b11d8
// 00597e40  c74610d0117b00       mov dword ptr [esi + 0x10], 0x7b11d0
// 00597e47  c74614c0117b00       mov dword ptr [esi + 0x14], 0x7b11c0
// 00597e4e  c7462cb0117b00       mov dword ptr [esi + 0x2c], 0x7b11b0
// 00597e55  c74644a0117b00       mov dword ptr [esi + 0x44], 0x7b11a0
// 00597e5c  c7465c90117b00       mov dword ptr [esi + 0x5c], 0x7b1190
// 00597e63  c7467480117b00       mov dword ptr [esi + 0x74], 0x7b1180
// 00597e6a  c7868c00000070117b00 mov dword ptr [esi + 0x8c], 0x7b1170
// 00597e74  e83784faff           call 0x5402b0
// 00597e79  f644240801           test byte ptr [esp + 8], 1
// 00597e7e  740a                 je 0x597e8a
// 00597e80  56                   push esi
// 00597e81  ff15c4e67700         call dword ptr [0x77e6c4]
// 00597e87  83c404               add esp, 4
// 00597e8a  8bc6                 mov eax, esi
// 00597e8c  5e                   pop esi
// 00597e8d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
