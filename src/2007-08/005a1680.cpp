// roc 2007-08 005a1680  unit: RBX::Humanoid  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1680
//
// 005a1680  56                   push esi
// 005a1681  8bf1                 mov esi, ecx
// 005a1683  e8980efaff           call 0x542520
// 005a1688  c7066c3e7b00         mov dword ptr [esi], 0x7b3e6c
// 005a168e  c74604603e7b00       mov dword ptr [esi + 4], 0x7b3e60
// 005a1695  c74610583e7b00       mov dword ptr [esi + 0x10], 0x7b3e58
// 005a169c  c74614483e7b00       mov dword ptr [esi + 0x14], 0x7b3e48
// 005a16a3  c7462c383e7b00       mov dword ptr [esi + 0x2c], 0x7b3e38
// 005a16aa  c74644283e7b00       mov dword ptr [esi + 0x44], 0x7b3e28
// 005a16b1  c7465c183e7b00       mov dword ptr [esi + 0x5c], 0x7b3e18
// 005a16b8  c74674083e7b00       mov dword ptr [esi + 0x74], 0x7b3e08
// 005a16bf  c7868c000000f83d7b00 mov dword ptr [esi + 0x8c], 0x7b3df8
// 005a16c9  8bc6                 mov eax, esi
// 005a16cb  5e                   pop esi
// 005a16cc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
