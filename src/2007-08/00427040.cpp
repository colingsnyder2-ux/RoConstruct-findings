// roc 2007-08 00427040  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00427040
//
// 00427040  56                   push esi
// 00427041  8bf1                 mov esi, ecx
// 00427043  c706048a7800         mov dword ptr [esi], 0x788a04
// 00427049  c74604f8897800       mov dword ptr [esi + 4], 0x7889f8
// 00427050  c74610f0897800       mov dword ptr [esi + 0x10], 0x7889f0
// 00427057  c74614e0897800       mov dword ptr [esi + 0x14], 0x7889e0
// 0042705e  c7462cd0897800       mov dword ptr [esi + 0x2c], 0x7889d0
// 00427065  c74644c0897800       mov dword ptr [esi + 0x44], 0x7889c0
// 0042706c  c7465cb0897800       mov dword ptr [esi + 0x5c], 0x7889b0
// 00427073  c74674a0897800       mov dword ptr [esi + 0x74], 0x7889a0
// 0042707a  c7868c00000090897800 mov dword ptr [esi + 0x8c], 0x788990
// 00427084  e827daffff           call 0x424ab0
// 00427089  f644240801           test byte ptr [esp + 8], 1
// 0042708e  740a                 je 0x42709a
// 00427090  56                   push esi
// 00427091  ff15c4e67700         call dword ptr [0x77e6c4]
// 00427097  83c404               add esp, 4
// 0042709a  8bc6                 mov eax, esi
// 0042709c  5e                   pop esi
// 0042709d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
