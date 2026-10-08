// roc 2007-08 0048e860  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048e860
//
// 0048e860  56                   push esi
// 0048e861  8bf1                 mov esi, ecx
// 0048e863  e868efffff           call 0x48d7d0
// 0048e868  c706fcb27900         mov dword ptr [esi], 0x79b2fc
// 0048e86e  c74604f4b27900       mov dword ptr [esi + 4], 0x79b2f4
// 0048e875  c74610ecb27900       mov dword ptr [esi + 0x10], 0x79b2ec
// 0048e87c  c74614dcb27900       mov dword ptr [esi + 0x14], 0x79b2dc
// 0048e883  c7462cccb27900       mov dword ptr [esi + 0x2c], 0x79b2cc
// 0048e88a  c74644bcb27900       mov dword ptr [esi + 0x44], 0x79b2bc
// 0048e891  c7465cacb27900       mov dword ptr [esi + 0x5c], 0x79b2ac
// 0048e898  c746749cb27900       mov dword ptr [esi + 0x74], 0x79b29c
// 0048e89f  c7868c0000008cb27900 mov dword ptr [esi + 0x8c], 0x79b28c
// 0048e8a9  8bc6                 mov eax, esi
// 0048e8ab  5e                   pop esi
// 0048e8ac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
