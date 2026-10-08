// roc 2007-08 005321d0  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005321d0
//
// 005321d0  56                   push esi
// 005321d1  8bf1                 mov esi, ecx
// 005321d3  e848030100           call 0x542520
// 005321d8  c706e4527a00         mov dword ptr [esi], 0x7a52e4
// 005321de  c74604d8527a00       mov dword ptr [esi + 4], 0x7a52d8
// 005321e5  c74610d0527a00       mov dword ptr [esi + 0x10], 0x7a52d0
// 005321ec  c74614c0527a00       mov dword ptr [esi + 0x14], 0x7a52c0
// 005321f3  c7462cb0527a00       mov dword ptr [esi + 0x2c], 0x7a52b0
// 005321fa  c74644a0527a00       mov dword ptr [esi + 0x44], 0x7a52a0
// 00532201  c7465c90527a00       mov dword ptr [esi + 0x5c], 0x7a5290
// 00532208  c7467480527a00       mov dword ptr [esi + 0x74], 0x7a5280
// 0053220f  c7868c00000070527a00 mov dword ptr [esi + 0x8c], 0x7a5270
// 00532219  8bc6                 mov eax, esi
// 0053221b  5e                   pop esi
// 0053221c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
