// roc 2007-08 0052cd90  unit: RBX::VRunService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052cd90
//
// 0052cd90  56                   push esi
// 0052cd91  8bf1                 mov esi, ecx
// 0052cd93  e888570100           call 0x542520
// 0052cd98  c706ec487a00         mov dword ptr [esi], 0x7a48ec
// 0052cd9e  c74604e0487a00       mov dword ptr [esi + 4], 0x7a48e0
// 0052cda5  c74610d8487a00       mov dword ptr [esi + 0x10], 0x7a48d8
// 0052cdac  c74614c8487a00       mov dword ptr [esi + 0x14], 0x7a48c8
// 0052cdb3  c7462cb8487a00       mov dword ptr [esi + 0x2c], 0x7a48b8
// 0052cdba  c74644a8487a00       mov dword ptr [esi + 0x44], 0x7a48a8
// 0052cdc1  c7465c98487a00       mov dword ptr [esi + 0x5c], 0x7a4898
// 0052cdc8  c7467488487a00       mov dword ptr [esi + 0x74], 0x7a4888
// 0052cdcf  c7868c00000078487a00 mov dword ptr [esi + 0x8c], 0x7a4878
// 0052cdd9  8bc6                 mov eax, esi
// 0052cddb  5e                   pop esi
// 0052cddc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
