// roc 2007-08 00413920  unit: DHTMLWindowService  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413920
//
// 00413920  56                   push esi
// 00413921  8bf1                 mov esi, ecx
// 00413923  e8f8eb1200           call 0x542520
// 00413928  c70644717800         mov dword ptr [esi], 0x787144
// 0041392e  c746043c717800       mov dword ptr [esi + 4], 0x78713c
// 00413935  c7461034717800       mov dword ptr [esi + 0x10], 0x787134
// 0041393c  c7461424717800       mov dword ptr [esi + 0x14], 0x787124
// 00413943  c7462c14717800       mov dword ptr [esi + 0x2c], 0x787114
// 0041394a  c7464404717800       mov dword ptr [esi + 0x44], 0x787104
// 00413951  c7465cf4707800       mov dword ptr [esi + 0x5c], 0x7870f4
// 00413958  c74674e4707800       mov dword ptr [esi + 0x74], 0x7870e4
// 0041395f  c7868c000000d4707800 mov dword ptr [esi + 0x8c], 0x7870d4
// 00413969  8bc6                 mov eax, esi
// 0041396b  5e                   pop esi
// 0041396c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
