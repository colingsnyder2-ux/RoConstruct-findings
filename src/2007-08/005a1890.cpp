// roc 2007-08 005a1890  unit: RBX::VSkin::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1890
//
// 005a1890  56                   push esi
// 005a1891  8bf1                 mov esi, ecx
// 005a1893  e8e8fdffff           call 0x5a1680
// 005a1898  c706ec3f7b00         mov dword ptr [esi], 0x7b3fec
// 005a189e  c74604e03f7b00       mov dword ptr [esi + 4], 0x7b3fe0
// 005a18a5  c74610d83f7b00       mov dword ptr [esi + 0x10], 0x7b3fd8
// 005a18ac  c74614c83f7b00       mov dword ptr [esi + 0x14], 0x7b3fc8
// 005a18b3  c7462cb83f7b00       mov dword ptr [esi + 0x2c], 0x7b3fb8
// 005a18ba  c74644a83f7b00       mov dword ptr [esi + 0x44], 0x7b3fa8
// 005a18c1  c7465c983f7b00       mov dword ptr [esi + 0x5c], 0x7b3f98
// 005a18c8  c74674883f7b00       mov dword ptr [esi + 0x74], 0x7b3f88
// 005a18cf  c7868c000000783f7b00 mov dword ptr [esi + 0x8c], 0x7b3f78
// 005a18d9  8bc6                 mov eax, esi
// 005a18db  5e                   pop esi
// 005a18dc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
