// roc 2007-08 004a50e0  unit: RBX::Network::Server::ClientProxy  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a50e0
//
// 004a50e0  56                   push esi
// 004a50e1  8bf1                 mov esi, ecx
// 004a50e3  e838d40900           call 0x542520
// 004a50e8  c706f4d27900         mov dword ptr [esi], 0x79d2f4
// 004a50ee  c74604ecd27900       mov dword ptr [esi + 4], 0x79d2ec
// 004a50f5  c74610e4d27900       mov dword ptr [esi + 0x10], 0x79d2e4
// 004a50fc  c74614d4d27900       mov dword ptr [esi + 0x14], 0x79d2d4
// 004a5103  c7462cc4d27900       mov dword ptr [esi + 0x2c], 0x79d2c4
// 004a510a  c74644b4d27900       mov dword ptr [esi + 0x44], 0x79d2b4
// 004a5111  c7465ca4d27900       mov dword ptr [esi + 0x5c], 0x79d2a4
// 004a5118  c7467494d27900       mov dword ptr [esi + 0x74], 0x79d294
// 004a511f  c7868c00000084d27900 mov dword ptr [esi + 0x8c], 0x79d284
// 004a5129  8bc6                 mov eax, esi
// 004a512b  5e                   pop esi
// 004a512c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
