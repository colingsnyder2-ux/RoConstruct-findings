// roc 2007-08 005d3fb0  unit: RBX::Tool  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d3fb0
//
// 005d3fb0  56                   push esi
// 005d3fb1  8bf1                 mov esi, ecx
// 005d3fb3  e868f6ffff           call 0x5d3620
// 005d3fb8  c706e4b37b00         mov dword ptr [esi], 0x7bb3e4
// 005d3fbe  c74604dcb37b00       mov dword ptr [esi + 4], 0x7bb3dc
// 005d3fc5  c74610d4b37b00       mov dword ptr [esi + 0x10], 0x7bb3d4
// 005d3fcc  c74614c4b37b00       mov dword ptr [esi + 0x14], 0x7bb3c4
// 005d3fd3  c7462cb4b37b00       mov dword ptr [esi + 0x2c], 0x7bb3b4
// 005d3fda  c74644a4b37b00       mov dword ptr [esi + 0x44], 0x7bb3a4
// 005d3fe1  c7465c94b37b00       mov dword ptr [esi + 0x5c], 0x7bb394
// 005d3fe8  c7467484b37b00       mov dword ptr [esi + 0x74], 0x7bb384
// 005d3fef  c7868c00000074b37b00 mov dword ptr [esi + 0x8c], 0x7bb374
// 005d3ff9  8bc6                 mov eax, esi
// 005d3ffb  5e                   pop esi
// 005d3ffc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
