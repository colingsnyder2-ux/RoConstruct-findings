// roc 2007-08 00587b50  unit: RBX::Reflection::EnumDescriptor  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587b50
//
// 00587b50  56                   push esi
// 00587b51  8bf1                 mov esi, ecx
// 00587b53  e8c8a9fbff           call 0x542520
// 00587b58  c706bce87a00         mov dword ptr [esi], 0x7ae8bc
// 00587b5e  c74604b0e87a00       mov dword ptr [esi + 4], 0x7ae8b0
// 00587b65  c74610a8e87a00       mov dword ptr [esi + 0x10], 0x7ae8a8
// 00587b6c  c7461498e87a00       mov dword ptr [esi + 0x14], 0x7ae898
// 00587b73  c7462c88e87a00       mov dword ptr [esi + 0x2c], 0x7ae888
// 00587b7a  c7464478e87a00       mov dword ptr [esi + 0x44], 0x7ae878
// 00587b81  c7465c68e87a00       mov dword ptr [esi + 0x5c], 0x7ae868
// 00587b88  c7467458e87a00       mov dword ptr [esi + 0x74], 0x7ae858
// 00587b8f  c7868c00000048e87a00 mov dword ptr [esi + 0x8c], 0x7ae848
// 00587b99  8bc6                 mov eax, esi
// 00587b9b  5e                   pop esi
// 00587b9c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
