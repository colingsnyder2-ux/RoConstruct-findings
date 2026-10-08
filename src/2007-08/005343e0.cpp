// roc 2007-08 005343e0  unit: RBX::ScriptContext  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005343e0
//
// 005343e0  56                   push esi
// 005343e1  8bf1                 mov esi, ecx
// 005343e3  e838e10000           call 0x542520
// 005343e8  c706f4567a00         mov dword ptr [esi], 0x7a56f4
// 005343ee  c74604e8567a00       mov dword ptr [esi + 4], 0x7a56e8
// 005343f5  c74610e0567a00       mov dword ptr [esi + 0x10], 0x7a56e0
// 005343fc  c74614d0567a00       mov dword ptr [esi + 0x14], 0x7a56d0
// 00534403  c7462cc0567a00       mov dword ptr [esi + 0x2c], 0x7a56c0
// 0053440a  c74644b0567a00       mov dword ptr [esi + 0x44], 0x7a56b0
// 00534411  c7465ca0567a00       mov dword ptr [esi + 0x5c], 0x7a56a0
// 00534418  c7467490567a00       mov dword ptr [esi + 0x74], 0x7a5690
// 0053441f  c7868c00000080567a00 mov dword ptr [esi + 0x8c], 0x7a5680
// 00534429  8bc6                 mov eax, esi
// 0053442b  5e                   pop esi
// 0053442c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
