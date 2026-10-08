// roc 2007-08 00572660  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572660
//
// 00572660  56                   push esi
// 00572661  8bf1                 mov esi, ecx
// 00572663  e808680400           call 0x5b8e70
// 00572668  c7061ca27a00         mov dword ptr [esi], 0x7aa21c
// 0057266e  c7460414a27a00       mov dword ptr [esi + 4], 0x7aa214
// 00572675  c746100ca27a00       mov dword ptr [esi + 0x10], 0x7aa20c
// 0057267c  c74614fca17a00       mov dword ptr [esi + 0x14], 0x7aa1fc
// 00572683  c7462ceca17a00       mov dword ptr [esi + 0x2c], 0x7aa1ec
// 0057268a  c74644dca17a00       mov dword ptr [esi + 0x44], 0x7aa1dc
// 00572691  c7465ccca17a00       mov dword ptr [esi + 0x5c], 0x7aa1cc
// 00572698  c74674bca17a00       mov dword ptr [esi + 0x74], 0x7aa1bc
// 0057269f  c7868c000000aca17a00 mov dword ptr [esi + 0x8c], 0x7aa1ac
// 005726a9  8bc6                 mov eax, esi
// 005726ab  5e                   pop esi
// 005726ac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
