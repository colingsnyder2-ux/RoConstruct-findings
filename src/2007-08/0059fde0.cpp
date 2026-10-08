// roc 2007-08 0059fde0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059fde0
//
// 0059fde0  56                   push esi
// 0059fde1  8bf1                 mov esi, ecx
// 0059fde3  e83827faff           call 0x542520
// 0059fde8  c706e4367b00         mov dword ptr [esi], 0x7b36e4
// 0059fdee  c74604dc367b00       mov dword ptr [esi + 4], 0x7b36dc
// 0059fdf5  c74610d4367b00       mov dword ptr [esi + 0x10], 0x7b36d4
// 0059fdfc  c74614c4367b00       mov dword ptr [esi + 0x14], 0x7b36c4
// 0059fe03  c7462cb4367b00       mov dword ptr [esi + 0x2c], 0x7b36b4
// 0059fe0a  c74644a4367b00       mov dword ptr [esi + 0x44], 0x7b36a4
// 0059fe11  c7465c94367b00       mov dword ptr [esi + 0x5c], 0x7b3694
// 0059fe18  c7467484367b00       mov dword ptr [esi + 0x74], 0x7b3684
// 0059fe1f  c7868c00000074367b00 mov dword ptr [esi + 0x8c], 0x7b3674
// 0059fe29  8bc6                 mov eax, esi
// 0059fe2b  5e                   pop esi
// 0059fe2c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
