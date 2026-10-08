// roc 2007-08 005f5a70  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5a70
//
// 005f5a70  56                   push esi
// 005f5a71  8bf1                 mov esi, ecx
// 005f5a73  e828f3ffff           call 0x5f4da0
// 005f5a78  c7064c137c00         mov dword ptr [esi], 0x7c134c
// 005f5a7e  c7460444137c00       mov dword ptr [esi + 4], 0x7c1344
// 005f5a85  c746103c137c00       mov dword ptr [esi + 0x10], 0x7c133c
// 005f5a8c  c746142c137c00       mov dword ptr [esi + 0x14], 0x7c132c
// 005f5a93  c7462c1c137c00       mov dword ptr [esi + 0x2c], 0x7c131c
// 005f5a9a  c746440c137c00       mov dword ptr [esi + 0x44], 0x7c130c
// 005f5aa1  c7465cfc127c00       mov dword ptr [esi + 0x5c], 0x7c12fc
// 005f5aa8  c74674ec127c00       mov dword ptr [esi + 0x74], 0x7c12ec
// 005f5aaf  c7868c000000dc127c00 mov dword ptr [esi + 0x8c], 0x7c12dc
// 005f5ab9  8bc6                 mov eax, esi
// 005f5abb  5e                   pop esi
// 005f5abc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
