// roc 2007-08 00549950  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00549950
//
// 00549950  56                   push esi
// 00549951  8bf1                 mov esi, ecx
// 00549953  e8c88bffff           call 0x542520
// 00549958  c7064c717a00         mov dword ptr [esi], 0x7a714c
// 0054995e  c7460444717a00       mov dword ptr [esi + 4], 0x7a7144
// 00549965  c746103c717a00       mov dword ptr [esi + 0x10], 0x7a713c
// 0054996c  c746142c717a00       mov dword ptr [esi + 0x14], 0x7a712c
// 00549973  c7462c1c717a00       mov dword ptr [esi + 0x2c], 0x7a711c
// 0054997a  c746440c717a00       mov dword ptr [esi + 0x44], 0x7a710c
// 00549981  c7465cfc707a00       mov dword ptr [esi + 0x5c], 0x7a70fc
// 00549988  c74674ec707a00       mov dword ptr [esi + 0x74], 0x7a70ec
// 0054998f  c7868c000000dc707a00 mov dword ptr [esi + 0x8c], 0x7a70dc
// 00549999  8bc6                 mov eax, esi
// 0054999b  5e                   pop esi
// 0054999c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
