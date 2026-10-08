// roc 2007-08 00590370  unit: RBX::VObjectValue::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590370
//
// 00590370  56                   push esi
// 00590371  8bf1                 mov esi, ecx
// 00590373  c70604fa7a00         mov dword ptr [esi], 0x7afa04
// 00590379  c74604fcf97a00       mov dword ptr [esi + 4], 0x7af9fc
// 00590380  c74610f4f97a00       mov dword ptr [esi + 0x10], 0x7af9f4
// 00590387  c74614e4f97a00       mov dword ptr [esi + 0x14], 0x7af9e4
// 0059038e  c7462cd4f97a00       mov dword ptr [esi + 0x2c], 0x7af9d4
// 00590395  c74644c4f97a00       mov dword ptr [esi + 0x44], 0x7af9c4
// 0059039c  c7465cb4f97a00       mov dword ptr [esi + 0x5c], 0x7af9b4
// 005903a3  c74674a4f97a00       mov dword ptr [esi + 0x74], 0x7af9a4
// 005903aa  c7868c00000094f97a00 mov dword ptr [esi + 0x8c], 0x7af994
// 005903b4  e8f7fefaff           call 0x5402b0
// 005903b9  f644240801           test byte ptr [esp + 8], 1
// 005903be  740a                 je 0x5903ca
// 005903c0  56                   push esi
// 005903c1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005903c7  83c404               add esp, 4
// 005903ca  8bc6                 mov eax, esi
// 005903cc  5e                   pop esi
// 005903cd  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
