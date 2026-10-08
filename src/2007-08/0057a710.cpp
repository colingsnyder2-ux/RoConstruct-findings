// roc 2007-08 0057a710  unit: RBX::VSpecialShape::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a710
//
// 0057a710  56                   push esi
// 0057a711  8bf1                 mov esi, ecx
// 0057a713  e888fdffff           call 0x57a4a0
// 0057a718  c70624b47a00         mov dword ptr [esi], 0x7ab424
// 0057a71e  c746041cb47a00       mov dword ptr [esi + 4], 0x7ab41c
// 0057a725  c7461014b47a00       mov dword ptr [esi + 0x10], 0x7ab414
// 0057a72c  c7461404b47a00       mov dword ptr [esi + 0x14], 0x7ab404
// 0057a733  c7462cf4b37a00       mov dword ptr [esi + 0x2c], 0x7ab3f4
// 0057a73a  c74644e4b37a00       mov dword ptr [esi + 0x44], 0x7ab3e4
// 0057a741  c7465cd4b37a00       mov dword ptr [esi + 0x5c], 0x7ab3d4
// 0057a748  c74674c4b37a00       mov dword ptr [esi + 0x74], 0x7ab3c4
// 0057a74f  c7868c000000b4b37a00 mov dword ptr [esi + 0x8c], 0x7ab3b4
// 0057a759  8bc6                 mov eax, esi
// 0057a75b  5e                   pop esi
// 0057a75c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
