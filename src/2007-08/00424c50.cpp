// roc 2007-08 00424c50  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424c50
//
// 00424c50  56                   push esi
// 00424c51  8bf1                 mov esi, ecx
// 00424c53  e8c8d81100           call 0x542520
// 00424c58  c706c48a7800         mov dword ptr [esi], 0x788ac4
// 00424c5e  c74604bc8a7800       mov dword ptr [esi + 4], 0x788abc
// 00424c65  c74610b48a7800       mov dword ptr [esi + 0x10], 0x788ab4
// 00424c6c  c74614a48a7800       mov dword ptr [esi + 0x14], 0x788aa4
// 00424c73  c7462c948a7800       mov dword ptr [esi + 0x2c], 0x788a94
// 00424c7a  c74644848a7800       mov dword ptr [esi + 0x44], 0x788a84
// 00424c81  c7465c748a7800       mov dword ptr [esi + 0x5c], 0x788a74
// 00424c88  c74674648a7800       mov dword ptr [esi + 0x74], 0x788a64
// 00424c8f  c7868c000000548a7800 mov dword ptr [esi + 0x8c], 0x788a54
// 00424c99  8bc6                 mov eax, esi
// 00424c9b  5e                   pop esi
// 00424c9c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
