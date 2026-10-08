// roc 2007-08 005a1840  unit: RBX::VSkin::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1840
//
// 005a1840  56                   push esi
// 005a1841  8bf1                 mov esi, ecx
// 005a1843  e838feffff           call 0x5a1680
// 005a1848  c7062c3f7b00         mov dword ptr [esi], 0x7b3f2c
// 005a184e  c74604203f7b00       mov dword ptr [esi + 4], 0x7b3f20
// 005a1855  c74610183f7b00       mov dword ptr [esi + 0x10], 0x7b3f18
// 005a185c  c74614083f7b00       mov dword ptr [esi + 0x14], 0x7b3f08
// 005a1863  c7462cf83e7b00       mov dword ptr [esi + 0x2c], 0x7b3ef8
// 005a186a  c74644e83e7b00       mov dword ptr [esi + 0x44], 0x7b3ee8
// 005a1871  c7465cd83e7b00       mov dword ptr [esi + 0x5c], 0x7b3ed8
// 005a1878  c74674c83e7b00       mov dword ptr [esi + 0x74], 0x7b3ec8
// 005a187f  c7868c000000b83e7b00 mov dword ptr [esi + 0x8c], 0x7b3eb8
// 005a1889  8bc6                 mov eax, esi
// 005a188b  5e                   pop esi
// 005a188c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
