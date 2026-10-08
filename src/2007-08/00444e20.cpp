// roc 2007-08 00444e20  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444e20
//
// 00444e20  56                   push esi
// 00444e21  8bf1                 mov esi, ecx
// 00444e23  e8f8d60f00           call 0x542520
// 00444e28  c706dcfa7800         mov dword ptr [esi], 0x78fadc
// 00444e2e  c74604d0fa7800       mov dword ptr [esi + 4], 0x78fad0
// 00444e35  c74610c8fa7800       mov dword ptr [esi + 0x10], 0x78fac8
// 00444e3c  c74614b8fa7800       mov dword ptr [esi + 0x14], 0x78fab8
// 00444e43  c7462ca8fa7800       mov dword ptr [esi + 0x2c], 0x78faa8
// 00444e4a  c7464498fa7800       mov dword ptr [esi + 0x44], 0x78fa98
// 00444e51  c7465c88fa7800       mov dword ptr [esi + 0x5c], 0x78fa88
// 00444e58  c7467478fa7800       mov dword ptr [esi + 0x74], 0x78fa78
// 00444e5f  c7868c00000068fa7800 mov dword ptr [esi + 0x8c], 0x78fa68
// 00444e69  8bc6                 mov eax, esi
// 00444e6b  5e                   pop esi
// 00444e6c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
