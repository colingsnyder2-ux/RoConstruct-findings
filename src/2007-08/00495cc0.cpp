// roc 2007-08 00495cc0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00495cc0
//
// 00495cc0  56                   push esi
// 00495cc1  8bf1                 mov esi, ecx
// 00495cc3  e838f2ffff           call 0x494f00
// 00495cc8  c70674bb7900         mov dword ptr [esi], 0x79bb74
// 00495cce  c746046cbb7900       mov dword ptr [esi + 4], 0x79bb6c
// 00495cd5  c7461064bb7900       mov dword ptr [esi + 0x10], 0x79bb64
// 00495cdc  c7461454bb7900       mov dword ptr [esi + 0x14], 0x79bb54
// 00495ce3  c7462c44bb7900       mov dword ptr [esi + 0x2c], 0x79bb44
// 00495cea  c7464434bb7900       mov dword ptr [esi + 0x44], 0x79bb34
// 00495cf1  c7465c24bb7900       mov dword ptr [esi + 0x5c], 0x79bb24
// 00495cf8  c7467414bb7900       mov dword ptr [esi + 0x74], 0x79bb14
// 00495cff  c7868c00000004bb7900 mov dword ptr [esi + 0x8c], 0x79bb04
// 00495d09  8bc6                 mov eax, esi
// 00495d0b  5e                   pop esi
// 00495d0c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
