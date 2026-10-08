// roc 2007-08 00587ba0  unit: RBX::Reflection::EnumDescriptor  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587ba0
//
// 00587ba0  56                   push esi
// 00587ba1  8bf1                 mov esi, ecx
// 00587ba3  e878a9fbff           call 0x542520
// 00587ba8  c70674e97a00         mov dword ptr [esi], 0x7ae974
// 00587bae  c746046ce97a00       mov dword ptr [esi + 4], 0x7ae96c
// 00587bb5  c7461064e97a00       mov dword ptr [esi + 0x10], 0x7ae964
// 00587bbc  c7461454e97a00       mov dword ptr [esi + 0x14], 0x7ae954
// 00587bc3  c7462c44e97a00       mov dword ptr [esi + 0x2c], 0x7ae944
// 00587bca  c7464434e97a00       mov dword ptr [esi + 0x44], 0x7ae934
// 00587bd1  c7465c24e97a00       mov dword ptr [esi + 0x5c], 0x7ae924
// 00587bd8  c7467414e97a00       mov dword ptr [esi + 0x74], 0x7ae914
// 00587bdf  c7868c00000004e97a00 mov dword ptr [esi + 0x8c], 0x7ae904
// 00587be9  8bc6                 mov eax, esi
// 00587beb  5e                   pop esi
// 00587bec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
