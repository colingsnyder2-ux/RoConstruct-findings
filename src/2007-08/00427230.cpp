// roc 2007-08 00427230  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00427230
//
// 00427230  56                   push esi
// 00427231  8bf1                 mov esi, ecx
// 00427233  c7061c8e7800         mov dword ptr [esi], 0x788e1c
// 00427239  c74604108e7800       mov dword ptr [esi + 4], 0x788e10
// 00427240  c74610088e7800       mov dword ptr [esi + 0x10], 0x788e08
// 00427247  c74614f88d7800       mov dword ptr [esi + 0x14], 0x788df8
// 0042724e  c7462ce88d7800       mov dword ptr [esi + 0x2c], 0x788de8
// 00427255  c74644d88d7800       mov dword ptr [esi + 0x44], 0x788dd8
// 0042725c  c7465cc88d7800       mov dword ptr [esi + 0x5c], 0x788dc8
// 00427263  c74674b88d7800       mov dword ptr [esi + 0x74], 0x788db8
// 0042726a  c7868c000000a88d7800 mov dword ptr [esi + 0x8c], 0x788da8
// 00427274  e837d8ffff           call 0x424ab0
// 00427279  f644240801           test byte ptr [esp + 8], 1
// 0042727e  740a                 je 0x42728a
// 00427280  56                   push esi
// 00427281  ff15c4e67700         call dword ptr [0x77e6c4]
// 00427287  83c404               add esp, 4
// 0042728a  8bc6                 mov eax, esi
// 0042728c  5e                   pop esi
// 0042728d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
