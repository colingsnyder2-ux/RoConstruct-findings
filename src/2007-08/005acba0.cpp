// roc 2007-08 005acba0  unit: RBX::Lighting  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acba0
//
// 005acba0  56                   push esi
// 005acba1  8bf1                 mov esi, ecx
// 005acba3  e87859f9ff           call 0x542520
// 005acba8  c70694597b00         mov dword ptr [esi], 0x7b5994
// 005acbae  c746048c597b00       mov dword ptr [esi + 4], 0x7b598c
// 005acbb5  c7461084597b00       mov dword ptr [esi + 0x10], 0x7b5984
// 005acbbc  c7461474597b00       mov dword ptr [esi + 0x14], 0x7b5974
// 005acbc3  c7462c64597b00       mov dword ptr [esi + 0x2c], 0x7b5964
// 005acbca  c7464454597b00       mov dword ptr [esi + 0x44], 0x7b5954
// 005acbd1  c7465c44597b00       mov dword ptr [esi + 0x5c], 0x7b5944
// 005acbd8  c7467434597b00       mov dword ptr [esi + 0x74], 0x7b5934
// 005acbdf  c7868c00000024597b00 mov dword ptr [esi + 0x8c], 0x7b5924
// 005acbe9  8bc6                 mov eax, esi
// 005acbeb  5e                   pop esi
// 005acbec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
