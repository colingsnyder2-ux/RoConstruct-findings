// roc 2007-08 004269d0  unit: RBX::Reflection::Metadata::Item  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004269d0
//
// 004269d0  56                   push esi
// 004269d1  8bf1                 mov esi, ecx
// 004269d3  e8b8feffff           call 0x426890
// 004269d8  c706048a7800         mov dword ptr [esi], 0x788a04
// 004269de  c74604f8897800       mov dword ptr [esi + 4], 0x7889f8
// 004269e5  c74610f0897800       mov dword ptr [esi + 0x10], 0x7889f0
// 004269ec  c74614e0897800       mov dword ptr [esi + 0x14], 0x7889e0
// 004269f3  c7462cd0897800       mov dword ptr [esi + 0x2c], 0x7889d0
// 004269fa  c74644c0897800       mov dword ptr [esi + 0x44], 0x7889c0
// 00426a01  c7465cb0897800       mov dword ptr [esi + 0x5c], 0x7889b0
// 00426a08  c74674a0897800       mov dword ptr [esi + 0x74], 0x7889a0
// 00426a0f  c7868c00000090897800 mov dword ptr [esi + 0x8c], 0x788990
// 00426a19  8bc6                 mov eax, esi
// 00426a1b  5e                   pop esi
// 00426a1c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
