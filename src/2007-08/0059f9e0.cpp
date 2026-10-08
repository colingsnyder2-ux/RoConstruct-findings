// roc 2007-08 0059f9e0  unit: RBX::VGameSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f9e0
//
// 0059f9e0  56                   push esi
// 0059f9e1  8bf1                 mov esi, ecx
// 0059f9e3  e858ffffff           call 0x59f940
// 0059f9e8  c706f4327b00         mov dword ptr [esi], 0x7b32f4
// 0059f9ee  c74604ec327b00       mov dword ptr [esi + 4], 0x7b32ec
// 0059f9f5  c74610e4327b00       mov dword ptr [esi + 0x10], 0x7b32e4
// 0059f9fc  c74614d4327b00       mov dword ptr [esi + 0x14], 0x7b32d4
// 0059fa03  c7462cc4327b00       mov dword ptr [esi + 0x2c], 0x7b32c4
// 0059fa0a  c74644b4327b00       mov dword ptr [esi + 0x44], 0x7b32b4
// 0059fa11  c7465ca4327b00       mov dword ptr [esi + 0x5c], 0x7b32a4
// 0059fa18  c7467494327b00       mov dword ptr [esi + 0x74], 0x7b3294
// 0059fa1f  c7868c00000084327b00 mov dword ptr [esi + 0x8c], 0x7b3284
// 0059fa29  8bc6                 mov eax, esi
// 0059fa2b  5e                   pop esi
// 0059fa2c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
