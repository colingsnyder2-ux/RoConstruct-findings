// roc 2007-08 00597e90  unit: RBX::VControllerService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597e90
//
// 00597e90  56                   push esi
// 00597e91  8bf1                 mov esi, ecx
// 00597e93  e888a6faff           call 0x542520
// 00597e98  c706e4117b00         mov dword ptr [esi], 0x7b11e4
// 00597e9e  c74604d8117b00       mov dword ptr [esi + 4], 0x7b11d8
// 00597ea5  c74610d0117b00       mov dword ptr [esi + 0x10], 0x7b11d0
// 00597eac  c74614c0117b00       mov dword ptr [esi + 0x14], 0x7b11c0
// 00597eb3  c7462cb0117b00       mov dword ptr [esi + 0x2c], 0x7b11b0
// 00597eba  c74644a0117b00       mov dword ptr [esi + 0x44], 0x7b11a0
// 00597ec1  c7465c90117b00       mov dword ptr [esi + 0x5c], 0x7b1190
// 00597ec8  c7467480117b00       mov dword ptr [esi + 0x74], 0x7b1180
// 00597ecf  c7868c00000070117b00 mov dword ptr [esi + 0x8c], 0x7b1170
// 00597ed9  8bc6                 mov eax, esi
// 00597edb  5e                   pop esi
// 00597edc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
