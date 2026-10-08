// roc 2007-08 0058af00  unit: RBX::VSoundService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058af00
//
// 0058af00  56                   push esi
// 0058af01  8bf1                 mov esi, ecx
// 0058af03  c706bce87a00         mov dword ptr [esi], 0x7ae8bc
// 0058af09  c74604b0e87a00       mov dword ptr [esi + 4], 0x7ae8b0
// 0058af10  c74610a8e87a00       mov dword ptr [esi + 0x10], 0x7ae8a8
// 0058af17  c7461498e87a00       mov dword ptr [esi + 0x14], 0x7ae898
// 0058af1e  c7462c88e87a00       mov dword ptr [esi + 0x2c], 0x7ae888
// 0058af25  c7464478e87a00       mov dword ptr [esi + 0x44], 0x7ae878
// 0058af2c  c7465c68e87a00       mov dword ptr [esi + 0x5c], 0x7ae868
// 0058af33  c7467458e87a00       mov dword ptr [esi + 0x74], 0x7ae858
// 0058af3a  c7868c00000048e87a00 mov dword ptr [esi + 0x8c], 0x7ae848
// 0058af44  e86753fbff           call 0x5402b0
// 0058af49  f644240801           test byte ptr [esp + 8], 1
// 0058af4e  740a                 je 0x58af5a
// 0058af50  56                   push esi
// 0058af51  ff15c4e67700         call dword ptr [0x77e6c4]
// 0058af57  83c404               add esp, 4
// 0058af5a  8bc6                 mov eax, esi
// 0058af5c  5e                   pop esi
// 0058af5d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
