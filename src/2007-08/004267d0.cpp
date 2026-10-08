// roc 2007-08 004267d0  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004267d0
//
// 004267d0  56                   push esi
// 004267d1  8bf1                 mov esi, ecx
// 004267d3  c7066c8c7800         mov dword ptr [esi], 0x788c6c
// 004267d9  c74604608c7800       mov dword ptr [esi + 4], 0x788c60
// 004267e0  c74610588c7800       mov dword ptr [esi + 0x10], 0x788c58
// 004267e7  c74614488c7800       mov dword ptr [esi + 0x14], 0x788c48
// 004267ee  c7462c388c7800       mov dword ptr [esi + 0x2c], 0x788c38
// 004267f5  c74644288c7800       mov dword ptr [esi + 0x44], 0x788c28
// 004267fc  c7465c188c7800       mov dword ptr [esi + 0x5c], 0x788c18
// 00426803  c74674088c7800       mov dword ptr [esi + 0x74], 0x788c08
// 0042680a  c7868c000000f88b7800 mov dword ptr [esi + 0x8c], 0x788bf8
// 00426814  e8979a1100           call 0x5402b0
// 00426819  f644240801           test byte ptr [esp + 8], 1
// 0042681e  740a                 je 0x42682a
// 00426820  56                   push esi
// 00426821  ff15c4e67700         call dword ptr [0x77e6c4]
// 00426827  83c404               add esp, 4
// 0042682a  8bc6                 mov eax, esi
// 0042682c  5e                   pop esi
// 0042682d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
