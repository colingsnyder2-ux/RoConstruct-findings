// roc 2007-08 0048e8d0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048e8d0
//
// 0048e8d0  56                   push esi
// 0048e8d1  8bf1                 mov esi, ecx
// 0048e8d3  c70694ad7900         mov dword ptr [esi], 0x79ad94
// 0048e8d9  c7460488ad7900       mov dword ptr [esi + 4], 0x79ad88
// 0048e8e0  c7461080ad7900       mov dword ptr [esi + 0x10], 0x79ad80
// 0048e8e7  c7461470ad7900       mov dword ptr [esi + 0x14], 0x79ad70
// 0048e8ee  c7462c60ad7900       mov dword ptr [esi + 0x2c], 0x79ad60
// 0048e8f5  c7464450ad7900       mov dword ptr [esi + 0x44], 0x79ad50
// 0048e8fc  c7465c40ad7900       mov dword ptr [esi + 0x5c], 0x79ad40
// 0048e903  c7467430ad7900       mov dword ptr [esi + 0x74], 0x79ad30
// 0048e90a  c7868c00000020ad7900 mov dword ptr [esi + 0x8c], 0x79ad20
// 0048e914  e897190b00           call 0x5402b0
// 0048e919  f644240801           test byte ptr [esp + 8], 1
// 0048e91e  740a                 je 0x48e92a
// 0048e920  56                   push esi
// 0048e921  ff15c4e67700         call dword ptr [0x77e6c4]
// 0048e927  83c404               add esp, 4
// 0048e92a  8bc6                 mov eax, esi
// 0048e92c  5e                   pop esi
// 0048e92d  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??_G?$FactoryProduct@VCamera@RBX@@VInstance@2@$1?sCamera@2@3PBDB@RBX@@MAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
