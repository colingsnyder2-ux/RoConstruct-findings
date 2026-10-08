// roc 2007-08 00424770  unit: 1RBX::Metadata::VReflection::?$FactoryProduct::Creator  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424770
//
// 00424770  56                   push esi
// 00424771  8bf1                 mov esi, ecx
// 00424773  e8a8dd1100           call 0x542520
// 00424778  c7065c887800         mov dword ptr [esi], 0x78885c
// 0042477e  c7460454887800       mov dword ptr [esi + 4], 0x788854
// 00424785  c746104c887800       mov dword ptr [esi + 0x10], 0x78884c
// 0042478c  c746143c887800       mov dword ptr [esi + 0x14], 0x78883c
// 00424793  c7462c2c887800       mov dword ptr [esi + 0x2c], 0x78882c
// 0042479a  c746441c887800       mov dword ptr [esi + 0x44], 0x78881c
// 004247a1  c7465c0c887800       mov dword ptr [esi + 0x5c], 0x78880c
// 004247a8  c74674fc877800       mov dword ptr [esi + 0x74], 0x7887fc
// 004247af  c7868c000000ec877800 mov dword ptr [esi + 0x8c], 0x7887ec
// 004247b9  8bc6                 mov eax, esi
// 004247bb  5e                   pop esi
// 004247bc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
