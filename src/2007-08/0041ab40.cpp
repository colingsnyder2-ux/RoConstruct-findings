// roc 2007-08 0041ab40  unit: VDHTMLWindowService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041ab40
//
// 0041ab40  56                   push esi
// 0041ab41  8bf1                 mov esi, ecx
// 0041ab43  c7064c757800         mov dword ptr [esi], 0x78754c
// 0041ab49  c7460444757800       mov dword ptr [esi + 4], 0x787544
// 0041ab50  c746103c757800       mov dword ptr [esi + 0x10], 0x78753c
// 0041ab57  c746142c757800       mov dword ptr [esi + 0x14], 0x78752c
// 0041ab5e  c7462c1c757800       mov dword ptr [esi + 0x2c], 0x78751c
// 0041ab65  c746440c757800       mov dword ptr [esi + 0x44], 0x78750c
// 0041ab6c  c7465cfc747800       mov dword ptr [esi + 0x5c], 0x7874fc
// 0041ab73  c74674ec747800       mov dword ptr [esi + 0x74], 0x7874ec
// 0041ab7a  c7868c000000dc747800 mov dword ptr [esi + 0x8c], 0x7874dc
// 0041ab84  e827571200           call 0x5402b0
// 0041ab89  f644240801           test byte ptr [esp + 8], 1
// 0041ab8e  740a                 je 0x41ab9a
// 0041ab90  56                   push esi
// 0041ab91  ff15c4e67700         call dword ptr [0x77e6c4]
// 0041ab97  83c404               add esp, 4
// 0041ab9a  8bc6                 mov eax, esi
// 0041ab9c  5e                   pop esi
// 0041ab9d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
