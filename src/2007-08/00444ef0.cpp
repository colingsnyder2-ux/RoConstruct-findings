// roc 2007-08 00444ef0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444ef0
//
// 00444ef0  56                   push esi
// 00444ef1  8bf1                 mov esi, ecx
// 00444ef3  e828ffffff           call 0x444e20
// 00444ef8  c706a4fb7800         mov dword ptr [esi], 0x78fba4
// 00444efe  c746049cfb7800       mov dword ptr [esi + 4], 0x78fb9c
// 00444f05  c7461094fb7800       mov dword ptr [esi + 0x10], 0x78fb94
// 00444f0c  c7461484fb7800       mov dword ptr [esi + 0x14], 0x78fb84
// 00444f13  c7462c74fb7800       mov dword ptr [esi + 0x2c], 0x78fb74
// 00444f1a  c7464464fb7800       mov dword ptr [esi + 0x44], 0x78fb64
// 00444f21  c7465c54fb7800       mov dword ptr [esi + 0x5c], 0x78fb54
// 00444f28  c7467444fb7800       mov dword ptr [esi + 0x74], 0x78fb44
// 00444f2f  c7868c00000034fb7800 mov dword ptr [esi + 0x8c], 0x78fb34
// 00444f39  8bc6                 mov eax, esi
// 00444f3b  5e                   pop esi
// 00444f3c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
