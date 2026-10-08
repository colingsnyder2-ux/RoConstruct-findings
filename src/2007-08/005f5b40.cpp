// roc 2007-08 005f5b40  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5b40
//
// 005f5b40  56                   push esi
// 005f5b41  8bf1                 mov esi, ecx
// 005f5b43  e8f8f3ffff           call 0x5f4f40
// 005f5b48  c706bc147c00         mov dword ptr [esi], 0x7c14bc
// 005f5b4e  c74604b4147c00       mov dword ptr [esi + 4], 0x7c14b4
// 005f5b55  c74610ac147c00       mov dword ptr [esi + 0x10], 0x7c14ac
// 005f5b5c  c746149c147c00       mov dword ptr [esi + 0x14], 0x7c149c
// 005f5b63  c7462c8c147c00       mov dword ptr [esi + 0x2c], 0x7c148c
// 005f5b6a  c746447c147c00       mov dword ptr [esi + 0x44], 0x7c147c
// 005f5b71  c7465c6c147c00       mov dword ptr [esi + 0x5c], 0x7c146c
// 005f5b78  c746745c147c00       mov dword ptr [esi + 0x74], 0x7c145c
// 005f5b7f  c7868c0000004c147c00 mov dword ptr [esi + 0x8c], 0x7c144c
// 005f5b89  8bc6                 mov eax, esi
// 005f5b8b  5e                   pop esi
// 005f5b8c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
