// roc 2007-08 005f5ae0  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5ae0
//
// 005f5ae0  56                   push esi
// 005f5ae1  8bf1                 mov esi, ecx
// 005f5ae3  e858f3ffff           call 0x5f4e40
// 005f5ae8  c70604147c00         mov dword ptr [esi], 0x7c1404
// 005f5aee  c74604fc137c00       mov dword ptr [esi + 4], 0x7c13fc
// 005f5af5  c74610f4137c00       mov dword ptr [esi + 0x10], 0x7c13f4
// 005f5afc  c74614e4137c00       mov dword ptr [esi + 0x14], 0x7c13e4
// 005f5b03  c7462cd4137c00       mov dword ptr [esi + 0x2c], 0x7c13d4
// 005f5b0a  c74644c4137c00       mov dword ptr [esi + 0x44], 0x7c13c4
// 005f5b11  c7465cb4137c00       mov dword ptr [esi + 0x5c], 0x7c13b4
// 005f5b18  c74674a4137c00       mov dword ptr [esi + 0x74], 0x7c13a4
// 005f5b1f  c7868c00000094137c00 mov dword ptr [esi + 0x8c], 0x7c1394
// 005f5b29  8bc6                 mov eax, esi
// 005f5b2b  5e                   pop esi
// 005f5b2c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
