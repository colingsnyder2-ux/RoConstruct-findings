// roc 2007-08 005732f0  unit: RBX::VDecal::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005732f0
//
// 005732f0  56                   push esi
// 005732f1  8bf1                 mov esi, ecx
// 005732f3  e8c8feffff           call 0x5731c0
// 005732f8  c70614a57a00         mov dword ptr [esi], 0x7aa514
// 005732fe  c746040ca57a00       mov dword ptr [esi + 4], 0x7aa50c
// 00573305  c7461004a57a00       mov dword ptr [esi + 0x10], 0x7aa504
// 0057330c  c74614f4a47a00       mov dword ptr [esi + 0x14], 0x7aa4f4
// 00573313  c7462ce4a47a00       mov dword ptr [esi + 0x2c], 0x7aa4e4
// 0057331a  c74644d4a47a00       mov dword ptr [esi + 0x44], 0x7aa4d4
// 00573321  c7465cc4a47a00       mov dword ptr [esi + 0x5c], 0x7aa4c4
// 00573328  c74674b4a47a00       mov dword ptr [esi + 0x74], 0x7aa4b4
// 0057332f  c7868c000000a4a47a00 mov dword ptr [esi + 0x8c], 0x7aa4a4
// 00573339  8bc6                 mov eax, esi
// 0057333b  5e                   pop esi
// 0057333c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
