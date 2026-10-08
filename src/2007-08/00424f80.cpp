// roc 2007-08 00424f80  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424f80
//
// 00424f80  56                   push esi
// 00424f81  8bf1                 mov esi, ecx
// 00424f83  e8c8fcffff           call 0x424c50
// 00424f88  c7066c8c7800         mov dword ptr [esi], 0x788c6c
// 00424f8e  c74604608c7800       mov dword ptr [esi + 4], 0x788c60
// 00424f95  c74610588c7800       mov dword ptr [esi + 0x10], 0x788c58
// 00424f9c  c74614488c7800       mov dword ptr [esi + 0x14], 0x788c48
// 00424fa3  c7462c388c7800       mov dword ptr [esi + 0x2c], 0x788c38
// 00424faa  c74644288c7800       mov dword ptr [esi + 0x44], 0x788c28
// 00424fb1  c7465c188c7800       mov dword ptr [esi + 0x5c], 0x788c18
// 00424fb8  c74674088c7800       mov dword ptr [esi + 0x74], 0x788c08
// 00424fbf  c7868c000000f88b7800 mov dword ptr [esi + 0x8c], 0x788bf8
// 00424fc9  8bc6                 mov eax, esi
// 00424fcb  5e                   pop esi
// 00424fcc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
