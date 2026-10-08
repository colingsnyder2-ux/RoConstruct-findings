// roc 2007-08 00426c60  unit: RBX::Reflection::Metadata::Item  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00426c60
//
// 00426c60  56                   push esi
// 00426c61  8bf1                 mov esi, ecx
// 00426c63  e828fcffff           call 0x426890
// 00426c68  c7061c8e7800         mov dword ptr [esi], 0x788e1c
// 00426c6e  c74604108e7800       mov dword ptr [esi + 4], 0x788e10
// 00426c75  c74610088e7800       mov dword ptr [esi + 0x10], 0x788e08
// 00426c7c  c74614f88d7800       mov dword ptr [esi + 0x14], 0x788df8
// 00426c83  c7462ce88d7800       mov dword ptr [esi + 0x2c], 0x788de8
// 00426c8a  c74644d88d7800       mov dword ptr [esi + 0x44], 0x788dd8
// 00426c91  c7465cc88d7800       mov dword ptr [esi + 0x5c], 0x788dc8
// 00426c98  c74674b88d7800       mov dword ptr [esi + 0x74], 0x788db8
// 00426c9f  c7868c000000a88d7800 mov dword ptr [esi + 0x8c], 0x788da8
// 00426ca9  8bc6                 mov eax, esi
// 00426cab  5e                   pop esi
// 00426cac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
