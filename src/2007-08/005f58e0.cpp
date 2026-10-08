// roc 2007-08 005f58e0  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f58e0
//
// 005f58e0  56                   push esi
// 005f58e1  8bf1                 mov esi, ecx
// 005f58e3  e8c8f2ffff           call 0x5f4bb0
// 005f58e8  c70624117c00         mov dword ptr [esi], 0x7c1124
// 005f58ee  c746041c117c00       mov dword ptr [esi + 4], 0x7c111c
// 005f58f5  c7461014117c00       mov dword ptr [esi + 0x10], 0x7c1114
// 005f58fc  c7461404117c00       mov dword ptr [esi + 0x14], 0x7c1104
// 005f5903  c7462cf4107c00       mov dword ptr [esi + 0x2c], 0x7c10f4
// 005f590a  c74644e4107c00       mov dword ptr [esi + 0x44], 0x7c10e4
// 005f5911  c7465cd4107c00       mov dword ptr [esi + 0x5c], 0x7c10d4
// 005f5918  c74674c4107c00       mov dword ptr [esi + 0x74], 0x7c10c4
// 005f591f  c7868c000000b4107c00 mov dword ptr [esi + 0x8c], 0x7c10b4
// 005f5929  8bc6                 mov eax, esi
// 005f592b  5e                   pop esi
// 005f592c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
